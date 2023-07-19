#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDateTime>
#include <QTimer>
#include <QLabel>
#include <QLineEdit>
#include <QLCDNumber>
#include <QTextBrowser>
int timer;

    MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent), ui(new Ui::MainWindow){
    ui->setupUi(this);
    socket = new QTcpSocket(this);


    connect(ui->StartButton,
            SIGNAL(clicked(bool)),
            this,
            SLOT(putData()));

    connect(ui->ConnectButton,
            SIGNAL(clicked(bool)),
            this,
            SLOT(tcpConnect()));

    connect(ui->DisconnectButton,
            SIGNAL(clicked(bool)),
            this,
            SLOT(tcpDisconnect()));

    connect(ui->StopButton,
            SIGNAL(clicked(bool)),
            this,
            SLOT(StopData()));
}

void MainWindow::tcpConnect(){
    socket->connectToHost(getHost(),1234);
    if(socket->waitForConnected(3000)){
        qDebug() << "Connected";
    }
    else{
        qDebug() << "Disconnected";
    }

}

void MainWindow::tcpDisconnect()
{
    socket->disconnectFromHost();
}


QString MainWindow::getHost(){
    QString ip;

    ip = ui->lineEdit->text();

    return ip;

}

void MainWindow::putData(){


    timer = ui->TimeLcd->value();

    timer = startTimer((timer)*1000);
}

void MainWindow::StopData(){

    killTimer(timer);
}

void MainWindow::timerEvent(QTimerEvent *e){
    QString str;
    int max,min;
    qint64 msecdate;

    max = ui->MaxLcd->value();
    min = ui->MinLcd->value();

    if(min>max){
        ui->textBrowser->insertPlainText("Error! Min value higher than Max\n");
        killTimer(timer);
    }
    else{
        if(socket->state()== QAbstractSocket::ConnectedState){
            msecdate = QDateTime::currentDateTime().toMSecsSinceEpoch();

            str = "set "+ QString::number(msecdate) + " " + QString::number(rand()%(max - min) + min)+"\r\n";
            ui->textBrowser->append(str);

            qDebug() << str;
            qDebug() << socket->write(str.toStdString().c_str()) << " bytes written";
            if(socket->waitForBytesWritten(3000)){
                qDebug() << "wrote";
            }
        }
    }
}

MainWindow::~MainWindow(){
    delete socket;
    delete ui;
}

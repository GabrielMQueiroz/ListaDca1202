/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *StartButton;
    QLCDNumber *MinLcd;
    QLCDNumber *MaxLcd;
    QSlider *Maxslider;
    QSlider *Minslider;
    QPushButton *DisconnectButton;
    QSlider *horizontalSlider;
    QLineEdit *lineEdit;
    QLabel *label;
    QLabel *label_2;
    QPushButton *ConnectButton;
    QPushButton *StopButton;
    QTextBrowser *textBrowser;
    QLabel *timelabel;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(538, 342);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName("centralWidget");
        StartButton = new QPushButton(centralWidget);
        StartButton->setObjectName("StartButton");
        StartButton->setGeometry(QRect(30, 250, 101, 29));
        MinLcd = new QLCDNumber(centralWidget);
        MinLcd->setObjectName("MinLcd");
        MinLcd->setGeometry(QRect(210, 80, 71, 31));
        MaxLcd = new QLCDNumber(centralWidget);
        MaxLcd->setObjectName("MaxLcd");
        MaxLcd->setGeometry(QRect(210, 140, 71, 31));
        Maxslider = new QSlider(centralWidget);
        Maxslider->setObjectName("Maxslider");
        Maxslider->setGeometry(QRect(10, 130, 160, 16));
        Maxslider->setOrientation(Qt::Horizontal);
        Minslider = new QSlider(centralWidget);
        Minslider->setObjectName("Minslider");
        Minslider->setGeometry(QRect(10, 80, 160, 16));
        Minslider->setOrientation(Qt::Horizontal);
        DisconnectButton = new QPushButton(centralWidget);
        DisconnectButton->setObjectName("DisconnectButton");
        DisconnectButton->setGeometry(QRect(190, 30, 89, 25));
        horizontalSlider = new QSlider(centralWidget);
        horizontalSlider->setObjectName("horizontalSlider");
        horizontalSlider->setGeometry(QRect(10, 200, 160, 16));
        horizontalSlider->setOrientation(Qt::Horizontal);
        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(20, 0, 261, 25));
        label = new QLabel(centralWidget);
        label->setObjectName("label");
        label->setGeometry(QRect(210, 60, 67, 17));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(210, 120, 67, 17));
        ConnectButton = new QPushButton(centralWidget);
        ConnectButton->setObjectName("ConnectButton");
        ConnectButton->setGeometry(QRect(20, 30, 101, 21));
        StopButton = new QPushButton(centralWidget);
        StopButton->setObjectName("StopButton");
        StopButton->setGeometry(QRect(170, 250, 101, 29));
        textBrowser = new QTextBrowser(centralWidget);
        textBrowser->setObjectName("textBrowser");
        textBrowser->setGeometry(QRect(290, 0, 241, 271));
        timelabel = new QLabel(centralWidget);
        timelabel->setObjectName("timelabel");
        timelabel->setGeometry(QRect(200, 200, 67, 17));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 538, 22));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName("mainToolBar");
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);

        retranslateUi(MainWindow);
        QObject::connect(Minslider, SIGNAL(valueChanged(int)), MinLcd, SLOT(display(int)));
        QObject::connect(Maxslider, SIGNAL(valueChanged(int)), MaxLcd, SLOT(display(int)));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        StartButton->setText(QCoreApplication::translate("MainWindow", "Start", nullptr));
        DisconnectButton->setText(QCoreApplication::translate("MainWindow", "Disnconnect", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Min Value:", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Max Value:", nullptr));
        ConnectButton->setText(QCoreApplication::translate("MainWindow", "Connect", nullptr));
        StopButton->setText(QCoreApplication::translate("MainWindow", "Stop", nullptr));
        timelabel->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTcpSocket>
#include <QDebug>
#include <QTimer>
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
  Q_OBJECT

public:
  explicit MainWindow(QWidget *parent = 0);
  ~MainWindow();
  
public slots:
  void putData();
  void tcpConnect();

  void tcpDisconnect();
  QString getHost();
  void StopData();
  void timerEvent(QTimerEvent *e);


private:
  Ui::MainWindow *ui;
  QTcpSocket *socket;
};

#endif // MAINWINDOW_H

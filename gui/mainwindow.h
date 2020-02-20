#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "mynetworkclass.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void dataInDaHouse(QByteArray data);

    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
mynetworkclass theDon;
};

#endif // MAINWINDOW_H

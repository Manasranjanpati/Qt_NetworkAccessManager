#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(&theDon,SIGNAL(dataReadyRead(QByteArray)),this,SLOT(dataInDaHouse(QByteArray)));


}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::dataInDaHouse(QByteArray data)
{
    QString dataString;
    dataString=data;
    ui->apiresponseshow->setText(dataString);
}

void MainWindow::on_pushButton_clicked()
{
    theDon.makeRequest("https://micropyramid.com/");
}

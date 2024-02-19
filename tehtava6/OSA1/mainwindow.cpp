#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_BtnCount_clicked()
{
    x++;
    QString s = QString::number(x);
    qDebug()<<"Count nappain";
    ui->TextNumb->setText(s);

}


void MainWindow::on_BtnReset_clicked()
{
    x=0;
    QString s = QString::number(x);
      qDebug()<<"RESET nappain";
    ui->TextNumb->setText(s);
}


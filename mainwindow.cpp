#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <stdio.h>
using namespace std;
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)

{
    ui->setupUi(this);
}


MainWindow::~MainWindow()


{

    delete ui;

}

void MainWindow::on_pushButton_clicked()
{
    ui->label->setText("Hello");
    ui->pushButton->setEnabled(false);


}

void MainWindow::on_pushButton_2_clicked()
{
    ui->label->setText("Goodbye");
    ui->pushButton_2->setEnabled(false);
}

#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    int i=0;
    while(i>6)
    {
    MainWindow::on_pushButton_clicked();
    i++;}

    MainWindow w;
    w.show();

    return a.exec();
}

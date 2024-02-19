#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    qDebug() << "main Qt-konsolisovelluksen suoritus alkaa.. eika lopu";
    return a.exec();
}

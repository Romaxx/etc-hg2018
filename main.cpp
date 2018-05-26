#include "mainwindow.h"
#include <QApplication>
#include "pigpio.h"
#include <qdebug.h>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;

    qDebug() << "Program Started \n";
    if (gpioInitialise() < 0)
    {
        // pigpio initialisation failed.
        qDebug() << "gpio lib failed\n";
    }
    else
    {
        // pigpio initialised okay.
        qDebug() << "gpio lib okay\n";
    }
    w.show();
    return a.exec();
}

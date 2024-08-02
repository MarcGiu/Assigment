#include "View/mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow SensorApp;
    SensorApp.show();
    return a.exec();
}

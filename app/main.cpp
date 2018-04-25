#include <QApplication>
#include "mainwindow.h"
#include "bancodados/bancodados.h"


int main(int argc, char *argv[]) {
    QApplication application(argc, argv);
    
    MainWindow mainWindow(0);
    mainWindow.show();

    return application.exec();
}

#include <QApplication>
#include "mainwindow.h"
#include "bancodados/bancodados.h"


int main(int argc, char *argv[]) {
    QApplication application(argc, argv);
    
    MainWindow mainWindow;
    mainWindow.show();

    return application.exec();
}

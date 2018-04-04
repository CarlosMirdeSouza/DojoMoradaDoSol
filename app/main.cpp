#include <QApplication>
#include "mainwindow.h"
#include "bancodados/bancodados.h"

BancoDados db;

int main(int argc, char *argv[]) {
    QApplication application(argc, argv);
    db.setDatabaseName("database");
    db.setDriver("QSQLITE");
    db.openDatabase();
    MainWindow mainWindow(0);
    mainWindow.show();

    return application.exec();
}

#include "bancodados.h"


BancoDados::BancoDados(QObject *parent) : QObject(parent)
{

}

BancoDados::~BancoDados() {
	
}

void BancoDados::setTableName(QString name) {
    this->tableModel = new QSqlTableModel;
    this->tableModel->setTable(name);
    this->tableModel->select();
}

void BancoDados::setDatabaseName(QString name) {
    this->databaseName = name;
}

void BancoDados::setDriver(QString driver) {
    this->driver = driver;
}

void BancoDados::openDatabase() {
    if(this->database.isOpen()){
        qInfo() << "Database is already open";
        this->database.close();
    }
    this->database = this->database.addDatabase(this->getDriver());
    this->database.setDatabaseName(this->getDatabaseName());
    if(!this->database.open()) {
        qWarning() << "QSqlDatabase - Error: " << this->database.lastError();
    }

}

QSqlQuery BancoDados::getData() {
    return query;
}

QSqlTableModel* BancoDados::getTableModel() {
    return this->tableModel;
}


QString BancoDados::getDriver() {
    return this->driver;
}

QString BancoDados::getDatabaseName(){
    return this->databaseName;
}

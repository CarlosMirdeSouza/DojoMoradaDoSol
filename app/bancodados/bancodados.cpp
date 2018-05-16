#include "bancodados.h"

// TODO: Refatorar esta classe

BancoDados::BancoDados(QObject *parent) : QObject(parent)
{
    //this->setDatabaseName("database");
    //this->setDriver("QSQLITE");
}

BancoDados::~BancoDados() {

}

void BancoDados::setTableName(QString name) {
    this->tableModel = new QSqlTableModel;
    this->tableModel->setTable(name);
    this->tableModel->select();

    if (name.contains("Alunos")) {
        this->tableModel->setHeaderData(0, Qt::Horizontal, QObject::tr("CPF"));
        this->tableModel->setHeaderData(1, Qt::Horizontal, QObject::tr("Nome"));
        this->tableModel->setHeaderData(2, Qt::Horizontal, QObject::tr("RG"));
        this->tableModel->setHeaderData(3, Qt::Horizontal, QObject::tr("Data de Nascimento"));
        this->tableModel->setHeaderData(4, Qt::Horizontal, QObject::tr("Modalidade"));
        this->tableModel->setHeaderData(5, Qt::Horizontal, QObject::tr("Email"));
        this->tableModel->setHeaderData(6, Qt::Horizontal, QObject::tr("Telefone Celular"));
        this->tableModel->setHeaderData(7, Qt::Horizontal, QObject::tr("Telefone Fixo"));
        this->tableModel->setHeaderData(8, Qt::Horizontal, QObject::tr("Endereço"));
        this->tableModel->setHeaderData(9, Qt::Horizontal, QObject::tr("Cidade"));
        this->tableModel->setHeaderData(10, Qt::Horizontal, QObject::tr("Bairro"));
        this->tableModel->setHeaderData(11, Qt::Horizontal, QObject::tr("CEP"));
        this->tableModel->setHeaderData(12, Qt::Horizontal, QObject::tr("UF"));
        this->tableModel->setHeaderData(13, Qt::Horizontal, QObject::tr("Profissão"));
        this->tableModel->setHeaderData(14, Qt::Horizontal, QObject::tr("Categoria"));

    }
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

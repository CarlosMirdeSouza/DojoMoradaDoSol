#ifndef BANCODADOS_H
#define BANCODADOS_H

#include <QtCore/QtGlobal>
#include <QObject>

#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QSqlTableModel>
#include <QSqlRecord>
#include <QSqlRelationalTableModel>
#include <QSqlDatabase>
#include <QSqlError>

#include <QtDebug>

// TODO: Refatorar esta classe
// TODO: Refatorar includes


class BancoDados : QObject
{
	Q_OBJECT
public:
    BancoDados(QObject *parent = nullptr);
    ~BancoDados();

    void setTableName(QString name);
    void setDatabaseName(QString name);
    void openDatabase();
    void setDriver(QString driver);

    QSqlTableModel* getTableModel();
    QString getDriver();
    QString getDatabaseName();

    QSqlQuery getData();




private:
    QSqlDatabase database;
	QSqlQuery query;
	QSqlQueryModel queryModel;
    QSqlTableModel *tableModel;
    QSqlRelationalTableModel relationalModel;

    QString databaseName;
    QString driver;
    QString tableName;
    QString queryString;
};

#endif // BANCODADOS_H

#ifndef PESSOA_H
#define PESSOA_H

#include <QObject>
#include <QString>
#include "bancodados/bancodados.h"

class Pessoa : public QObject
{
    Q_OBJECT
public:
    explicit Pessoa(QObject *parent = nullptr);
	~Pessoa();
	
signals:

public slots:

private:
	// Dados Pessoais
	QString nome;
	QString cpf;
	QString rg;
	// Dados Contato
	QString email;
	QString telefone;
};

#endif // PESSOA_H

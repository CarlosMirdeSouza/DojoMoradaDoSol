#ifndef ALUNO_H
#define ALUNO_H

#include <QObject>
#include "classes/pessoa.h"

class Aluno : public Pessoa
{
    Q_OBJECT
    
public:
    explicit Aluno(QObject *parent = nullptr);
    ~Aluno();
    
    //~ Getters por grupo de dados
    //~ getDadosPessoais();
    //~ getDadosContato();
    //~ getDadosMoradia();
    //~ getDadosExtra();
    //~ getImagem();
    
    //~ // Setters por grupo de dados
    //~ setDadosPessoais();
    //~ setDadosContato();
    //~ setDadosMoradia();
    //~ setDadosExtra();
    //~ setImagem();

signals:

public slots:

private:

};

#endif // ALUNO_H

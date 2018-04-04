#ifndef CADASTRO_H
#define CADASTRO_H

#include <QWidget>
#include "ui_Cadastro.h"
#include "bancodados/bancodados.h"

namespace Ui {
    class Cadastro;
}

class Cadastro : public QWidget
{
    Q_OBJECT
public:
    explicit Cadastro(QWidget *parent = nullptr);

signals:

public slots:

private slots:
    void on_pushButtonCadastro_clicked();

    void on_pushButtonAdicionarFoto_clicked();

private:
    Ui::Cadastro *ui;
};

#endif // CADASTRO_H

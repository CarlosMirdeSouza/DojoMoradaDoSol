#ifndef PESQUISA_H
#define PESQUISA_H

#include "ui_Pesquisa.h"
#include "bancodados/bancodados.h"

namespace Ui {
    class Pesquisa;
}

class Pesquisa : public QWidget
{
    Q_OBJECT
public:
    explicit Pesquisa(QWidget *parent = nullptr);

signals:

public slots:

private slots:
    void on_pushButtonPesquisa_clicked();

    void on_pushButtonDelete_clicked();

    void on_checkBoxDadosPessoais_stateChanged(int arg1);

    void on_checkBoxDadosContato_stateChanged(int arg1);

    void on_checkBoxDadosMoradia_stateChanged(int arg1);

private:
    Ui::Pesquisa *ui;
};

#endif // PESQUISA_H

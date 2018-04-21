#include "dialogs/dialogadddoacao.h"

// TODO: Agregar conexao BancoDados
extern BancoDados db;

DialogAddDoacao::DialogAddDoacao(QWidget *parent) :
    QDialog(parent), ui(new Ui::DialogAddDoacao)
{
    ui->setupUi(this);
}
DialogAddDoacao::~DialogAddDoacao() {
    delete ui;
}

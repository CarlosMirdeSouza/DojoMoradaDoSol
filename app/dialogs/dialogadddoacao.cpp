#include "dialogs/dialogadddoacao.h"

extern BancoDados db;

DialogAddDoacao::DialogAddDoacao(QWidget *parent) :
    QDialog(parent), ui(new Ui::DialogAddDoacao)
{
    ui->setupUi(this);
}
DialogAddDoacao::~DialogAddDoacao() {
    delete ui;
}

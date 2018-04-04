#include "contabilidade.h"

Contabilidade::Contabilidade(QWidget *parent) :
    QWidget(parent), ui(new Ui::Contabilidade)
{
    ui->setupUi(this);
}

Contabilidade::~Contabilidade(){
    delete ui;
}

#include "dialogs/dialogadditem.h"

extern BancoDados db;

DialogAddItem::DialogAddItem(QWidget *parent) :
    QDialog(parent), ui(new Ui::DialogAddItem)
{
    ui->setupUi(this);
}

DialogAddItem::~DialogAddItem() {
    delete ui;
}

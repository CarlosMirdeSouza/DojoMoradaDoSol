#include "dialogs/dialogadditem.h"

DialogAddItem::DialogAddItem(QWidget *parent) :
    QDialog(parent), ui(new Ui::DialogAddItem)
{
    ui->setupUi(this);
    ui->lineEditData->setInputMask("00/00/0000");
    ui->lineEditValor->setInputMask("00000,00");

    db.openDatabase();

    // Agregando itens ao comboBox diretamente do BD
    // Assim o usuario pode modificar os tipos de itens
    QSqlTableModel table;
    table.setTable("Item");
    table.select();
    QList<QString> tipoItens;
    for (int i = 0; i <= table.rowCount(); i++){
        tipoItens.append(table.record(i).value("name").toString());
    }
    ui->comboBoxTipoItem->addItems(tipoItens);


}

DialogAddItem::~DialogAddItem() {
    delete ui;
}

void DialogAddItem::on_comboBoxTransacao_currentIndexChanged(const QString &text) {
    QString textValor = ui->lineEditValor->text();
    if (text.contains("Saida")) {
        textValor.prepend("- ");
        ui->lineEditValor->setText(textValor);
    }
}

#include "dialogs/dialogadditem.h"

DialogAddItem::DialogAddItem(QWidget *parent, int isAddTipoItem) :
    QDialog(parent), ui(new Ui::DialogAddItem)
{
    ui->setupUi(this);
    ui->lineEditValor->setInputMask("00000,00");


    if(isAddTipoItem == 1) {
        ui->comboBoxTipoItem->hide();
        ui->labelTipoItem->hide();
        ui->labelData->hide();
        ui->lineEditData->hide();
        ui->labelTransacao->hide();
        ui->comboBoxTransacao->hide();

        QRect retaAtual = ui->verticalLayoutAddItem->geometry();
        qInfo() << retaAtual;
        QRect rect(100, 100, 100, 100);
        ui->verticalLayoutAddItem->setGeometry(retaAtual);

    } else {
        ui->lineEditData->setInputMask("00/00/0000");

        //db.openDatabase();

        // Agregando itens ao comboBox diretamente do BD
        QSqlTableModel table;
        table.setTable("Item");
        table.select();
        QList<QString> tipoItens;
        for (int i = 0; i <= table.rowCount(); i++){
            tipoItens.append(table.record(i).value("name").toString());
        }
        ui->comboBoxTipoItem->addItems(tipoItens);

    }
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

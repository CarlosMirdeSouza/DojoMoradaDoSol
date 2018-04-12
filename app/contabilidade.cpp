#include "contabilidade.h"

#include <QMenu>
#include <QContextMenuEvent>
#include <QMessageBox>
#include <QDebug>
#include <bancodados/bancodados.h>

extern BancoDados db;


Contabilidade::Contabilidade(QWidget *parent) :
    QWidget(parent), ui(new Ui::Contabilidade)
{
    ui->setupUi(this);
}

Contabilidade::~Contabilidade(){
    delete ui;
}

#ifndef QT_NO_CONTEXTMENU
void Contabilidade::contextMenuEvent(QContextMenuEvent *event)
{
    QMenu menu(this);

    QString textTipoPesquisa = ui->comboBoxTipoPesquisa->currentText();
    QString textPesquisa = ui->lineEditPesquisa->text();

    if(ui->tableViewContabilidade->underMouse()) {
        if (textTipoPesquisa.contains("Nome") || textTipoPesquisa.contains("CPF")) {
            QAction *deleteRowAct = new QAction(tr("Apagar item"), this);
            deleteRowAct->setStatusTip(tr("Apaga registro do item vinculado ao aluno"));
            connect(deleteRowAct, &QAction::triggered, this, &Contabilidade::deleteRow);
            menu.addAction(deleteRowAct);

            QAction *addItemAct = new QAction(tr("Adicionar item ao aluno"), this);
            addItemAct->setStatusTip(tr("Adicionar item vinculando-os aos alunos"));
            connect(addItemAct, &QAction::triggered, this, &Contabilidade::addItem);
            menu.addAction(addItemAct);

            QAction *addMensalidadeAct = new QAction(tr("Adicionar mensalidade ao aluno"), this);
            addMensalidadeAct->setStatusTip(tr("Adicionar mensalidade e vincular essa mensalidade com o aluno"));
            connect(addItemAct, &QAction::triggered, this, &Contabilidade::);
            
        }

    }



    menu.exec(event->globalPos());
}
#endif // QT_NO_CONTEXTMENU

void Contabilidade::addItem() {

}

void Contabilidade::addMensalidade() {

}

void Contabilidade::on_pushButtonPesquisa_clicked()
{
    QString textPesquisa = ui->lineEditPesquisa->text();
    QString textTipoPesquisa = ui->comboBoxTipoPesquisa->currentText();

	if (textPesquisa.contains("") ) {
        if (textTipoPesquisa.contains("Nome") || textTipoPesquisa.contains("CPF")) {
            db.setTableName("Alunos");
            ui->tableViewContabilidade->setModel(db.getTableModel());
            ui->tableViewContabilidade->resizeColumnsToContents();

        } else if (textTipoPesquisa.contains("Mensalidade") ) {
            db.setTableName("Mensalidades");
            ui->tableViewContabilidade->setModel(db.getTableModel());
            ui->tableViewContabilidade->resizeColumnsToContents();

        } else if (textTipoPesquisa.contains("Item") ) {
            //QSqlRelationalTableModel *relationalModel = new QSqlRelationalTableModel;
            //relationalModel->setTable("Itens");
            //relationalModel->setRelation(2, QSqlRelation("Item", "id", "nome"));
            //relationalModel->setRelation(3, QSqlRelation("Item", "id", "descricao"));
            //relationalModel->setRelation(4, QSqlRelation("Item", "id", "valor"));
            //relationalModel->select();
            QSqlTableModel *table = new QSqlTableModel;
            table->setTable("Item");
            qInfo() << "Hello" << table->database().databaseName();
            ui->tableViewContabilidade->setModel(table/*relationalModel*/);
            ui->tableViewContabilidade->resizeColumnsToContents();

        }

    } else if (textTipoPesquisa.contains("Nome")) {
        QString nome("nome LIKE '%");
        nome.append(textPesquisa);
        nome.append("%'");
        db.getTableModel()->setFilter(nome);
        ui->tableViewContabilidade->setModel(db.getTableModel());
        ui->tableViewContabilidade->resizeColumnsToContents();

    } else if (textTipoPesquisa.contains("CPF") ) {
        ui->lineEditPesquisa->setInputMask("999.999.999-99");

        QString cpf("cpf LIKE '%");
        cpf.append(textPesquisa);
        cpf.append("%''");
        db.getTableModel()->setFilter(cpf);

        ui->tableViewContabilidade->setModel(db.getTableModel());
        ui->tableViewContabilidade->resizeColumnsToContents();

    } else if (textTipoPesquisa.contains("Mensalidade") ) {

        ui->tableViewContabilidade->setModel(db.getTableModel());
        ui->tableViewContabilidade->resizeColumnsToContents();

    } else if (textTipoPesquisa.contains("Item") ) {
        //QSqlRelationalTableModel *relationalModel = new QSqlRelationalTableModel;
        //relationalModel->setTable("Itens");
        //relationalModel->setRelation(2, QSqlRelation("Item", "id", "nome"));
        //relationalModel->setRelation(3, QSqlRelation("Item", "id", "descricao"));
        //relationalModel->setRelation(4, QSqlRelation("Item", "id", "valor"));
        //relationalModel->select();
        QSqlTableModel *table = new QSqlTableModel;
        table->setTable("Item");
        ui->tableViewContabilidade->setModel(table/*relationalModel*/);
        ui->tableViewContabilidade->resizeColumnsToContents();

	} else {
        // TODO: Codigo da pesquisa por Doaçoes
    }
}

void Contabilidade::deleteRow() {
    QMessageBox confirmDeleteDialog;

    QMessageBox msgBox;
    msgBox.setText(tr("O aluno vai ser eliminado"));
    msgBox.setInformativeText("Tem certeza que quer eliminar o aluno?");
    msgBox.setStandardButtons(QMessageBox::Apply | QMessageBox::Cancel);
    msgBox.setDefaultButton(QMessageBox::Apply);
    msgBox.setIcon(QMessageBox::Warning);

    int ret = msgBox.exec();
    switch(ret) {
        case QMessageBox::Apply:
            int selectedRowIndex = ui->tableViewContabilidade->currentIndex().row();
            db.getTableModel()->removeRow(selectedRowIndex);
            db.getTableModel()->submitAll();

            db.setTableName("Alunos");
            ui->tableViewContabilidade->setModel(db.getTableModel());
            ui->tableViewContabilidade->resizeColumnsToContents();

            //QFile(imagename).remove();
            break;
    }
}

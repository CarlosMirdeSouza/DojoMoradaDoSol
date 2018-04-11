#include "contabilidade.h"

#include <QMenu>
#include <QContextMenuEvent>
#include <QMessageBox>
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
    if(ui->tableViewContabilidade->underMouse()) {
        QAction *deleteRowAct = new QAction(tr("Apagar aluno"), this);
        deleteRowAct->setStatusTip(tr("Apaga o aluno e todas as informações dele."));
        //connect(deleteRowAct, &QAction::triggered, this, &Contabilidade::deleteRow);
        menu.addAction(deleteRowAct);

    }// else if (ui->labelImagem->underMouse()) {
        //QAction *modifyImageAct = new QAction(tr("Modificar imagem do aluno"), this);
        //modifyImageAct->setStatusTip(tr("Modifica a imagem do aluno eliminando a  imagem anterior."));
        //connect(modifyImageAct, &QAction::triggered, this, &Contabilidade::modifyImagem);
        //menu.addAction(modifyImageAct);



    menu.exec(event->globalPos());
}
#endif // QT_NO_CONTEXTMENU


void Contabilidade::on_pushButtonPesquisa_clicked()
{
    QString textPesquisa = ui->lineEditPesquisa->text();
    QString textTipoPesquisa = ui->comboBoxTipoPesquisa->currentText();

	if (textPesquisa.compare("") == 0) {
        if (textTipoPesquisa.compare("Pessoa") == 0) {
            db.setTableName("Alunos");
        } else if (textTipoPesquisa.compare("Mensalidade") == 0) {
            db.setTableName("Mensalidades");
        } else if (textTipoPesquisa.compare("Item") == 0) {
            db.setTableName("Itens");
        }

        ui->tableViewContabilidade->setModel(db.getTableModel());
        ui->tableViewContabilidade->resizeColumnsToContents();

    } else if (textTipoPesquisa.compare("Pessoa") == 0) {
        if (textPesquisa.isNull()) {
            QString cpf("cpf LIKE '%");
            cpf.append(textPesquisa);
            cpf.append("%''");
            db.getTableModel()->setFilter(cpf);

        } else {
            QString nome("nome LIKE '%");
            nome.append(textPesquisa);
            nome.append("%'");
            db.getTableModel()->setFilter(nome);
        }

        ui->tableViewContabilidade->setModel(db.getTableModel());
        ui->tableViewContabilidade->resizeColumnsToContents();

    } else if (textTipoPesquisa.compare("Mensalidade") == 0) {

        ui->tableViewContabilidade->setModel(db.getTableModel());
        ui->tableViewContabilidade->resizeColumnsToContents();

    } else if (textTipoPesquisa.compare("Item") == 0) {
        //db.getTableModel()->setFilter(modalidade);
        ui->tableViewContabilidade->setModel(db.getTableModel());
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

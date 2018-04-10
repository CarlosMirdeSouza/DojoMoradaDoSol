#include "contabilidade.h"

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
        //connect(deleteRowAct, &QAction::triggered, this, &Pesquisa::deleteRow);
        menu.addAction(deleteRowAct);

    } else if (ui->labelImagem->underMouse()) {
        QAction *modifyImageAct = new QAction(tr("Modificar imagem do aluno"), this);
        modifyImageAct->setStatusTip(tr("Modifica a imagem do aluno eliminando a  imagem anterior."));
        //connect(modifyImageAct, &QAction::triggered, this, &Pesquisa::modifyImagem);
        menu.addAction(modifyImageAct);

    }

    menu.exec(event->globalPos());
}
#endif // QT_NO_CONTEXTMENU


void Pesquisa::on_pushButtonPesquisa_clicked()
{
    QString textPesquisa = ui->lineEditPesquisa->text();
    QString textTipoPesquisa = ui->comboBoxTipoPesquisa->currentText();

	if (textPesquisa.compare("") == 0) {
        if (textTipoPesquisa.compare("Pessoas")) {
            /* code */
        }
        db.setTableName("Alunos");
		ui->tableViewPesquisa->setModel(db.getTableModel());
        ui->tableViewPesquisa->resizeColumnsToContents();

    } else if (textTipoPesquisa.compare("Nome") == 0) {
        QString nome("nome LIKE '%");
        nome.append(textLineEdit);
        nome.append("%'");

        db.getTableModel()->setFilter(nome);
        ui->tableViewPesquisa->setModel(db.getTableModel());
        ui->tableViewPesquisa->resizeColumnsToContents();

    } else if (textTipoPesquisa.compare("CPF") == 0) {
        QString cpf("cpf LIKE '%");
        cpf.append(textLineEdit);
        cpf.append("%'");

        db.getTableModel()->setFilter(cpf);
        ui->tableViewPesquisa->setModel(db.getTableModel());
        ui->tableViewPesquisa->resizeColumnsToContents();

    } else if (textTipoPesquisa.compare("Modalidade") == 0) {
        QString modalidade("modalidade LIKE '%");
        modalidade.append(textLineEdit);
        modalidade.append("%'");

        db.getTableModel()->setFilter(modalidade);
        ui->tableViewPesquisa->setModel(db.getTableModel());
        ui->tableViewPesquisa->resizeColumnsToContents();
	}
}

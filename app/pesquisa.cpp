#include "pesquisa.h"
#include "bancodados/bancodados.h"

#include <QSqlRecord>

#include <QImageReader>
#include <QImage>
#include <QMenu>

extern BancoDados db;

Pesquisa::Pesquisa(QWidget *parent) :
    QWidget(parent), ui(new Ui::Pesquisa)
{
    ui->setupUi(this);
    
	db.setTableName("Alunos");
    ui->tableViewPesquisa->setModel(db.getTableModel());
    ui->tableViewPesquisa->resizeColumnsToContents();
}

void Pesquisa::on_pushButtonPesquisa_clicked()
{
	if (ui->lineEditPesquisa->text().compare("") == 0) {
		db.setTableName("Alunos");
		ui->tableViewPesquisa->setModel(db.getTableModel());
        ui->tableViewPesquisa->resizeColumnsToContents();

    } else if (ui->comboBoxTipoPesquisa->currentText().compare("Nome") == 0) {
        QString textLineEdit = ui->lineEditPesquisa->text();

        QString nome("nome LIKE '%");
        nome.append(textLineEdit);
        nome.append("%'");

        db.getTableModel()->setFilter(nome);
        ui->tableViewPesquisa->setModel(db.getTableModel());
        ui->tableViewPesquisa->resizeColumnsToContents();

    } else if (ui->comboBoxTipoPesquisa->currentText().compare("CPF") == 0) {
        QString textLineEdit = ui->lineEditPesquisa->text();

        QString cpf("cpf LIKE '%");
        cpf.append(textLineEdit);
        cpf.append("%'");

        db.getTableModel()->setFilter(cpf);
        ui->tableViewPesquisa->setModel(db.getTableModel());
        ui->tableViewPesquisa->resizeColumnsToContents();

    } else if (ui->comboBoxTipoPesquisa->currentText().compare("Modalidade") == 0) {
        QString textLineEdit = ui->lineEditPesquisa->text();

        QString modalidade("modalidade LIKE '%");
        modalidade.append(textLineEdit);
        modalidade.append("%'");

        db.getTableModel()->setFilter(modalidade);
        ui->tableViewPesquisa->setModel(db.getTableModel());
        ui->tableViewPesquisa->resizeColumnsToContents();
	}
}

void Pesquisa::on_pushButtonDelete_clicked()
{
    int selectedRowIndex = ui->tableViewPesquisa->currentIndex().row();
    db.getTableModel()->removeRow(selectedRowIndex);
    db.getTableModel()->submitAll();
}

void Pesquisa::on_checkBoxDadosPessoais_stateChanged(int arg1)
{
    if (ui->checkBoxDadosPessoais->isChecked()) {
        for (int i = 5; i <= 13; i++) {
            ui->tableViewPesquisa->hideColumn(i);
        }
    } else {
        for (int i = 5; i <= 13; i++) {
            ui->tableViewPesquisa->showColumn(i);
        }
    }
}

void Pesquisa::on_checkBoxDadosContato_stateChanged(int arg1)
{
    if (ui->checkBoxDadosContato->isChecked()) {
        for (int i = 0; i <= 14; i++) {
            if(i > 1 || i < 4 || i > 9) {
                ui->tableViewPesquisa->hideColumn(i);
            }

        }
    } else {
        for (int i = 0; i <= 14; i++) {
            if (i > 1 || (i < 4 && i > 9)) {
                ui->tableViewPesquisa->showColumn(i);
            }
        }
    }
}

void Pesquisa::on_checkBoxDadosMoradia_stateChanged(int arg1)
{
    if (ui->checkBoxDadosMoradia->isChecked()) {
        for (int i = 5; i <= 13; i++) {
            ui->tableViewPesquisa->hideColumn(i);
        }
    } else {
        for (int i = 5; i <= 13; i++) {
            ui->tableViewPesquisa->showColumn(i);
        }
    }
}

void Pesquisa::on_tableViewPesquisa_clicked(const QModelIndex &index)
{
    QString cpf = db.getTableModel()->record(index.row()).value("cpf").toString();
    QString filename("./images/");
    filename.append(cpf);
    filename.append(".jpg");
    qInfo() << filename;
    QImageReader imageReader(filename);
    QImage image = imageReader.read();
    QImage scaled = image.scaled(200, 441, Qt::KeepAspectRatio, Qt::SmoothTransformation);
    ui->labelImagem->setPixmap(QPixmap::fromImage(scaled));
}


#ifndef QT_NO_CONTEXTMENU
void Pesquisa::contextMenuEvent(QContextMenuEvent *event)
{
    QAction cutAct = new QAction(tr("Cu&t"), this);
    cutAct.setShortcuts(QKeySequence::Cut);
    cutAct.setStatusTip(tr("Cut the current selection's contents to the "
                            "clipboard"));
    connect(cutAct, &QAction::triggered, this, &MainWindow::cut);

    QAction copyAct = new QAction(tr("&Copy"), this);
    copyAct.setShortcuts(QKeySequence::Copy);
    copyAct.setStatusTip(tr("Copy the current selection's contents to the "
                             "clipboard"));
    connect(copyAct, &QAction::triggered, this, &MainWindow::copy);

    QAction pasteAct = new QAction(tr("&Paste"), this);
    pasteAct.setShortcuts(QKeySequence::Paste);
    pasteAct.setStatusTip(tr("Paste the clipboard's contents into the current "
                              "selection"));
    connect(pasteAct, &QAction::triggered, this, &MainWindow::paste);

    QMenu menu(this);
    menu.addAction(cutAct);
    menu.addAction(copyAct);
    menu.addAction(pasteAct);
    menu.exec(event->globalPos());
}
#endif // QT_NO_CONTEXTMENU

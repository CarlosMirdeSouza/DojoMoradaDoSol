#include "pesquisa.h"
#include "bancodados/bancodados.h"

#include <QSqlRecord>

#include <QImageReader>
#include <QImage>
#include <QMenu>
#include <QAction>
#include <QContextMenuEvent>
#include <QMessageBox>
#include <QFileDialog>

extern BancoDados db;

QString imagename("");

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
    QString textPesquisa = ui->lineEditPesquisa->text();
    QString textTipoPesquisa = ui->comboBoxTipoPesquisa->currentText();

	if (textPesquisa.compare("") == 0) {
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

void Pesquisa::on_checkBoxDadosPessoais_stateChanged(int state)
{
    if (state >= 1) {
        for (int i = 5; i <= 13; i++) {
            ui->tableViewPesquisa->hideColumn(i);
        }
    } else {
        for (int i = 0; i <= 14; i++) {
            ui->tableViewPesquisa->showColumn(i);
        }
    }
}

void Pesquisa::on_checkBoxDadosContato_stateChanged(int state)
{
    if (state >= 1) {
        for (int i = 0; i <= 14; i++) {
            ui->tableViewPesquisa->hideColumn(i);
        }

        ui->tableViewPesquisa->showColumn(0);
        ui->tableViewPesquisa->showColumn(1);
        ui->tableViewPesquisa->showColumn(5);
        ui->tableViewPesquisa->showColumn(6);
        ui->tableViewPesquisa->showColumn(7);

    } else {
        for (int i = 0; i <= 14; i++) {
                ui->tableViewPesquisa->showColumn(i);
        }
    }
}

void Pesquisa::on_checkBoxDadosMoradia_stateChanged(int state)
{
    if (state >= 1) {
        for (int i = 2; i <= 14; i++) {
            if (i == 8) {
                i = 13;
            }
            ui->tableViewPesquisa->hideColumn(i);
        }
    } else {
        for (int i = 0; i <= 14; i++) {
            ui->tableViewPesquisa->showColumn(i);
        }
    }
}

void Pesquisa::on_tableViewPesquisa_clicked(const QModelIndex &index)
{
    QString cpf = db.getTableModel()->record(index.row()).value("cpf").toString();

    imagename.clear();
    imagename.append("images/");
    imagename.append(cpf);
    imagename.append(".jpg");

    qInfo() << imagename;

    QImageReader imageReader(imagename);
    QImage image = imageReader.read();
    QImage scaled = image.scaled(200, 441, Qt::KeepAspectRatio, Qt::SmoothTransformation);

    ui->labelImagem->setPixmap(QPixmap::fromImage(scaled));
    if (image.isNull()){
        ui->labelImagem->setText("Sem imagem");
    }
}


#ifndef QT_NO_CONTEXTMENU
void Pesquisa::contextMenuEvent(QContextMenuEvent *event)
{
    QMenu menu(this);
    if(ui->tableViewPesquisa->underMouse()) {
        QAction *deleteRowAct = new QAction(tr("Apagar aluno"), this);
        deleteRowAct->setStatusTip(tr("Apaga o aluno e todas as informações dele."));
        connect(deleteRowAct, &QAction::triggered, this, &Pesquisa::deleteRow);
        menu.addAction(deleteRowAct);

    } else if (ui->labelImagem->underMouse()) {
        QAction *modifyImageAct = new QAction(tr("Modificar imagem do aluno"), this);
        modifyImageAct->setStatusTip(tr("Modifica a imagem do aluno eliminando a  imagem anterior."));
        connect(modifyImageAct, &QAction::triggered, this, &Pesquisa::modifyImagem);
        menu.addAction(modifyImageAct);

    }

    menu.exec(event->globalPos());
}
#endif // QT_NO_CONTEXTMENU

void Pesquisa::deleteRow() {
    QMessageBox confirmDeleteDialog;
    confirmDeleteDialog.setText(tr("O aluno vai ser eliminado"));
    confirmDeleteDialog.setInformativeText("Tem certeza que quer eliminar o aluno?");
    confirmDeleteDialog.setStandardButtons(QMessageBox::Apply | QMessageBox::Cancel);
    confirmDeleteDialog.setDefaultButton(QMessageBox::Apply);
    confirmDeleteDialog.setIcon(QMessageBox::Warning);

    int resposta = confirmDeleteDialog.exec();
    switch(resposta) {
        case QMessageBox::Apply:
            int selectedRowIndex = ui->tableViewPesquisa->currentIndex().row();
            db.getTableModel()->removeRow(selectedRowIndex);
            db.getTableModel()->submitAll();

            db.setTableName("Alunos");
            ui->tableViewPesquisa->setModel(db.getTableModel());
            ui->tableViewPesquisa->resizeColumnsToContents();

            QFile(imagename).remove();
            break;
    }
}

void Pesquisa::modifyImagem() {

    QMessageBox imagemPadraoWarning;
    imagemPadraoWarning.setText(tr("Ao modificar a imagem a anterior sera deletada"));
    imagemPadraoWarning.setInformativeText("Tem certeza que quer continuar modificando a imagem?");

    imagemPadraoWarning.setStandardButtons(QMessageBox::Apply | QMessageBox::Cancel);
    imagemPadraoWarning.setDefaultButton(QMessageBox::Apply);
    imagemPadraoWarning.setIcon(QMessageBox::Warning);

    int respostaWarning = imagemPadraoWarning.exec();
    switch(respostaWarning){
        case QMessageBox::Apply:
            QFile(imagename).remove();
            qInfo() << "Imagename in ModifyImage: " << imagename;
            QFileDialog imageDialog(this);
            imageDialog.setFileMode(QFileDialog::ExistingFile);

            QStringList mimeTypeFilters;
            mimeTypeFilters << "image/jpeg" << "image/png";

            imageDialog.setMimeTypeFilters(mimeTypeFilters);
            if(imageDialog.exec()) {
                QString newImage = imageDialog.selectedFiles().first();
                QImageReader imageReader(newImage);
                QImage image = imageReader.read();
                QImage scaled = image.scaled(200, 441, Qt::KeepAspectRatio, Qt::SmoothTransformation);
                qInfo() << "Save new image: " << scaled.save(imagename);
            }
        break;
    }
}

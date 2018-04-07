#include "cadastro.h"
#include "bancodados/bancodados.h"

#include <QtGlobal>
#include <QtDebug>

#include <QDateTime>

#include <QLabel>
#include <QImage>
#include <QImageReader>
#include <QFileDialog>
#include <QStringList>

extern BancoDados db;

QImage image;
QString filename;

Cadastro::Cadastro(QWidget *parent) :
    QWidget(parent), ui(new Ui::Cadastro)
{
    ui->setupUi(this);

    QImageReader imageReader(":/images/AdicionarImagem.png");
    QImage adicionarImagem = imageReader.read();
    ui->labelImagem->setPixmap(QPixmap::fromImage(adicionarImagem));
}

void Cadastro::on_pushButtonCadastro_clicked()
{
    QSqlQuery *query = new QSqlQuery;
    query->prepare("INSERT INTO Alunos (cpf, nome, rg, dataNascimento, modalidade, email, telefoneCelular, "
                  "telefoneFixo, endereco, cidade, bairro, cep, uf, profissao, categoria) "
                          "VALUES (:cpf, :nome, :rg, :dataNascimento, :modalidade, :email, :telefoneCelular, "
                          ":telefoneFixo, :endereco, :cidade, :bairro, :cep, :uf, :profissao, :categoria)");
    query->bindValue(":cpf", ui->lineEditCpf->text());
    query->bindValue(":nome", ui->lineEditNome->text());
    query->bindValue(":rg", ui->lineEditRg->text());
    query->bindValue(":dataNascimento", ui->lineEditDataNascimento->text());
    query->bindValue(":modalidade", ui->comboBoxModalidade->currentText());
    query->bindValue(":email", ui->lineEditEmail->text());
    query->bindValue(":telefonCelular", ui->lineEditTelefoneCelular->text());
    query->bindValue(":telefoneFixo", ui->lineEditTelefoneFixo->text());
    query->bindValue(":endereco", ui->lineEditEndereco->text());
    query->bindValue(":cidade", ui->lineEditCidade->text());
    query->bindValue(":bairro", ui->lineEditBairro->text());
    query->bindValue(":cep", ui->lineEditCep->text());
    query->bindValue(":uf", ui->lineEditUf->text());
    query->bindValue(":profissao", ui->lineEditProfissao->text());
    query->bindValue(":categoria", ui->lineEditCategoria->text());
    qInfo() << "exec: " << query->exec();
    
    if (!image.isNull()){
        filename = "./images/";
        filename.append(ui->lineEditCpf->text());
        filename.append(".jpg");
        image.save(filename);
    }
}

void Cadastro::on_pushButtonAdicionarFoto_clicked()
{
    QFileDialog imageDialog(this);
    imageDialog.setFileMode(QFileDialog::ExistingFile);

    QStringList mimeTypeFilters;
    mimeTypeFilters << "image/jpeg" << "image/png";

    imageDialog.setMimeTypeFilters(mimeTypeFilters);
    if(imageDialog.exec()) {
        QString filename = imageDialog.selectedFiles().first();
        QImageReader imageReader(filename);
        image = imageReader.read();
        QImage scaled = image.scaled(354, 472, Qt::KeepAspectRatio, Qt::SmoothTransformation);
        ui->labelImagem->setPixmap(QPixmap::fromImage(scaled));
    }
}

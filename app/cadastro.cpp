#include "cadastro.h"


// TODO: Refatorar includes
// TODO: Colocar inputMask nos telefones
// TODO: Colocar inputMask em RG para limitar o numero

extern BancoDados db;


Cadastro::Cadastro(QWidget *parent) :
    QWidget(parent), ui(new Ui::Cadastro)
{
    ui->setupUi(this);
    ui->lineEditOutros->hide();
    ui->lineEditCpf->setInputMask("999.999.999-99");
    ui->lineEditDataNascimento->setInputMask("99/99/9999");
    ui->lineEditCep->setInputMask("99999-999");
    ui->lineEditUf->setInputMask(">AA");

    db.openDatabase();

    filename = ":/images/AdicionarImagem.png";
    QImageReader imageReader(filename);
    QImage adicionarImagem = imageReader.read();
    ui->labelImagem->setPixmap(QPixmap::fromImage(adicionarImagem));
}

void Cadastro::on_pushButtonCadastro_clicked()
{
    // TODO: Refatorar query
    QSqlQuery *query = new QSqlQuery;
    query->prepare("INSERT INTO Alunos (cpf, nome, rg, dataNascimento, modalidade, email, telefoneCelular, "
                  "telefoneFixo, endereco, cidade, bairro, cep, uf, profissao, categoria) "
                          "VALUES (:cpf, :nome, :rg, :dataNascimento, :modalidade, :email, :telefoneCelular, "
                          ":telefoneFixo, :endereco, :cidade, :bairro, :cep, :uf, :profissao, :categoria)");
    query->bindValue(":cpf", ui->lineEditCpf->text());
    query->bindValue(":nome", ui->lineEditNome->text());
    query->bindValue(":rg", ui->lineEditRg->text());
    query->bindValue(":dataNascimento", ui->lineEditDataNascimento->text());
    if (ui->lineEditOutros->isHidden()) {
        query->bindValue(":modalidade", ui->comboBoxModalidade->currentText());
    } else {
        query->bindValue(":modalidade", ui->lineEditOutros->text());
    }
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

    qInfo() << filename;
    if (filename.contains(":/images/AdicionarImagem.png")) {
        // TODO: Refatorar criação de messagebox
        QMessageBox imagemPadraoWarning;
        imagemPadraoWarning.setText(tr("Nao foi adicionada nenhuma imagem"));
        imagemPadraoWarning.setInformativeText("Tem certeza que quer continuar com o cadastro?");

        imagemPadraoWarning.setStandardButtons(QMessageBox::Apply | QMessageBox::Cancel);
        imagemPadraoWarning.setDefaultButton(QMessageBox::Apply);
        imagemPadraoWarning.setIcon(QMessageBox::Warning);
        // TODO: Refatorar resposta messagebox
        int respostaWarning = imagemPadraoWarning.exec();
        switch(respostaWarning){
            case QMessageBox::Apply:
                if (query->exec() == true) {
                    QMessageBox cadastroSucedido;

                    cadastroSucedido.setText(tr("O cadastro foi efeituado com sucesso"));

                    cadastroSucedido.setStandardButtons(QMessageBox::Ok);
                    cadastroSucedido.setDefaultButton(QMessageBox::Ok);
                    cadastroSucedido.setIcon(QMessageBox::Information);

                    cadastroSucedido.exec();
                }
                break;
        }


    } else if (!image.isNull()){
		if (!QDir("images").exists()) {
            QDir().mkdir("images");
		}
		
        filename = "images/";
        filename.append(ui->lineEditCpf->text());
        filename.append(".jpg");
        image.save(filename);
        if (query->exec() == true) {
            QMessageBox cadastroSucedido;

            cadastroSucedido.setText(tr("O cadastro foi efeituado com sucesso"));

            cadastroSucedido.setStandardButtons(QMessageBox::Ok);
            cadastroSucedido.setDefaultButton(QMessageBox::Ok);
            cadastroSucedido.setIcon(QMessageBox::Information);

            cadastroSucedido.exec();
        }
    }
}

void Cadastro::on_pushButtonAdicionarFoto_clicked()
{
    // TODO: Criar funçao para FileDialog
    QFileDialog imageDialog(this);
    imageDialog.setFileMode(QFileDialog::ExistingFile);

    QStringList mimeTypeFilters;
    mimeTypeFilters << "image/jpeg" << "image/png";

    imageDialog.setMimeTypeFilters(mimeTypeFilters);
    if(imageDialog.exec()) {
        filename = imageDialog.selectedFiles().first();
        QImageReader imageReader(filename);
        image = imageReader.read();
        QImage scaled = image.scaled(354, 472, Qt::KeepAspectRatio, Qt::SmoothTransformation);
        ui->labelImagem->setPixmap(QPixmap::fromImage(scaled));
    }
}

void Cadastro::on_checkBoxOutros_stateChanged(int state)
{
    if (state >= 1) {
        ui->lineEditOutros->show();
        ui->comboBoxModalidade->hide();
    } else {
        ui->lineEditOutros->hide();
        ui->comboBoxModalidade->show();
    }
}

void Cadastro::on_pushButtonLimpar_clicked()
{
    // TODO: How to iterate in widgets
    // findChildren("lineEdit") e percorrer a lista em loop
    ui->lineEditNome->clear();
    ui->lineEditCpf->clear();
    ui->lineEditRg->clear();
    ui->lineEditDataNascimento->clear();
    ui->lineEditOutros->clear();

    ui->lineEditEmail->clear();
    ui->lineEditTelefoneCelular->clear();
    ui->lineEditTelefoneFixo->clear();

    ui->lineEditEndereco->clear();
    ui->lineEditCidade->clear();
    ui->lineEditBairro->clear();
    ui->lineEditCep->clear();
    ui->lineEditUf->clear();

    ui->lineEditProfissao->clear();
    ui->lineEditPeso->clear();
    ui->lineEditCategoria->clear();

    filename = ":/images/AdicionarImagem.png";
    QImageReader imageReader(filename);
    QImage adicionarImagem = imageReader.read();
    ui->labelImagem->setPixmap(QPixmap::fromImage(adicionarImagem));
}

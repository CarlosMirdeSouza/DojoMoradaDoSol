#include "mainwindow.h"
//#include "bancodados/bancodados.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent), ui(new Ui::MainWindow),
    cadastro(new Cadastro), pesquisa(new Pesquisa),
    contabilidade(new Contabilidade), eventos(new Eventos)
{
    ui->setupUi(this);
    this->setCentralWidget(ui->mdiAreaMain);

    ui->mdiAreaMain->addSubWindow(pesquisa);
    ui->mdiAreaMain->addSubWindow(contabilidade);
    ui->mdiAreaMain->addSubWindow(eventos);
    ui->mdiAreaMain->addSubWindow(cadastro);

}

MainWindow::~MainWindow() {
    delete ui;
}

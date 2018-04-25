#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "ui_MainWindow.h"

#include "cadastro.h"
#include "pesquisa.h"
#include "contabilidade.h"
#include "eventos.h"

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow
{
public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:

private:
    Ui::MainWindow *ui;
    Cadastro *cadastro;
    Pesquisa *pesquisa;
    Contabilidade *contabilidade;
    Eventos *eventos;
};

#endif // MAINWINDOW_H

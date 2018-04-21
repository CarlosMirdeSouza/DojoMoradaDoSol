#ifndef CADASTRO_H
#define CADASTRO_H

#include <QWidget>
#include "ui_Cadastro.h"
#include "bancodados/bancodados.h"

#include <QtGlobal>
#include <QtDebug>

#include <QDateTime>

#include <QLabel>
#include <QImage>
#include <QImageReader>
#include <QFileDialog>
#include <QStringList>
#include <QMessageBox>

namespace Ui {
    class Cadastro;
}

class Cadastro : public QWidget
{
    Q_OBJECT
public:
    explicit Cadastro(QWidget *parent = nullptr);

signals:

public slots:

private slots:
    void on_pushButtonCadastro_clicked();

    void on_pushButtonAdicionarFoto_clicked();

    void on_checkBoxOutros_stateChanged(int arg1);

    void on_pushButtonLimpar_clicked();

private:
    Ui::Cadastro *ui;
    QImage image;
    QString filename;
};

#endif // CADASTRO_H

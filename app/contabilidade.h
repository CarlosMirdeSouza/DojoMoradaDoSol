#ifndef CONTABILIDADE_H
#define CONTABILIDADE_H

#include "ui_Contabilidade.h"

#include <QMenu>
#include <QContextMenuEvent>
#include <QMessageBox>

#include "dialogs/dialogadditem.h"
#include <bancodados/bancodados.h>

namespace Ui {
    class Contabilidade;
}

class Contabilidade : public QWidget
{
    Q_OBJECT
public:
    explicit Contabilidade(QWidget *parent = 0);
    ~Contabilidade();

signals:

private slots:
    void on_pushButtonPesquisa_clicked();

    void deleteRow();
    void addItem();
    void addMensalidade();
    void addDoacoes();
    void addTipoItem();
    void modifyTipoItem();
    void deleteTipoItem();

protected:

#ifndef QT_NO_CONTEXTMENU
    void contextMenuEvent(QContextMenuEvent *event) override;
#endif // QT_NO_CONTEXTMENU

private:
    Ui::Contabilidade *ui;

    QImage image;
    QString filename;
    BancoDados db;
};

#endif // CONTABILIDADE_H

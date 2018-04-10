#ifndef CONTABILIDADE_H
#define CONTABILIDADE_H

#include "ui_Contabilidade.h"

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

protected:

#ifndef QT_NO_CONTEXTMENU
    void contextMenuEvent(QContextMenuEvent *event) override;
#endif // QT_NO_CONTEXTMENU

private:
    Ui::Contabilidade *ui;
};

#endif // CONTABILIDADE_H

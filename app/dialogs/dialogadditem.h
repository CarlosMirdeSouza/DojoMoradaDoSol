#ifndef DIALOGADDITEM_H
#define DIALOGADDITEM_H

#include "ui_DialogAddItem.h"
#include "bancodados/bancodados.h"

namespace Ui {
    class DialogAddItem;
} /* Ui */

class DialogAddItem : public QDialog {
    Q_OBJECT

public:
    DialogAddItem(QWidget *parent = nullptr, int isAddTipoItem = 0);
    virtual ~DialogAddItem();

public slots:

private slots:
    void on_comboBoxTransacao_currentIndexChanged(const QString &text);

private:
    Ui::DialogAddItem *ui;
    BancoDados db;
};

#endif // DIALOGADDITEM_H

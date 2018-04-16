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
    DialogAddItem (QWidget *parent = nullptr);
    virtual ~DialogAddItem ();

private:
    Ui::DialogAddItem *ui;
};

#endif // DIALOGADDITEM_H

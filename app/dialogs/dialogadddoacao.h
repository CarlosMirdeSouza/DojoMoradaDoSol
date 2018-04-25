#ifndef DIALOGADDDOACAO_H
#define DIALOGADDDOACAO_H

#include "ui_DialogAddDoacao.h"
#include <QDialog>
#include "bancodados/bancodados.h"

namespace Ui {
    class DialogAddDoacao;
}

class DialogAddDoacao : public QDialog {
    Q_OBJECT

public:
    DialogAddDoacao(QWidget *parent = nullptr);
    ~DialogAddDoacao();

private:
    Ui::DialogAddDoacao *ui;

};

#endif // DIALOGADDDOACAO_H

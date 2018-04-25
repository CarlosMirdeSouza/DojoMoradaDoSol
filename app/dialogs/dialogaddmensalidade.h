#ifndef DIALOGADDMENSALIDADE_H
#define DIALOGADDMENSALIDADE_H

//#include "ui_DialogAddMensalidade"
#include <QObject>
#include <QDialog>
#include <QWidget>

namespace Ui {
    class DialogAddMensalidade;
}

class DialogAddMensalidade : public QDialog  {
    Q_OBJECT

public:
    DialogAddMensalidade (QWidget *parent = nullptr);
    ~DialogAddMensalidade();

private:
    //Ui::DialogAddMensalidade *ui;
};

#endif // DIALOGADDMENSALIDADE_H

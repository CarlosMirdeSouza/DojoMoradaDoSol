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

public slots:

private:
    Ui::Contabilidade *ui;
};

#endif // CONTABILIDADE_H

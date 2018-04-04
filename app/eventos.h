#ifndef EVENTOS_H
#define EVENTOS_H

#include "ui_Eventos.h"
#include <QWidget>
#include "bancodados/bancodados.h"

namespace Ui {
    class Eventos;
}

class Eventos : public QWidget {
    Q_OBJECT

public:
    explicit Eventos(QWidget *parent = nullptr);
    ~Eventos();

signals:
public slots:

private:
    Ui::Eventos *ui;

};

#endif // EVENTOS_H

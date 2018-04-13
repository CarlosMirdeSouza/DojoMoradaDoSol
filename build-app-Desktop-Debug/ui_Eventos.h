/********************************************************************************
** Form generated from reading UI file 'Eventos.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EVENTOS_H
#define UI_EVENTOS_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Eventos
{
public:
    QCalendarWidget *calendarWidgetEventos;
    QTableView *tableViewEventos;
    QTableView *tableViewParticipantes;

    void setupUi(QWidget *Eventos)
    {
        if (Eventos->objectName().isEmpty())
            Eventos->setObjectName(QStringLiteral("Eventos"));
        Eventos->resize(960, 640);
        Eventos->setLocale(QLocale(QLocale::Portuguese, QLocale::Brazil));
        calendarWidgetEventos = new QCalendarWidget(Eventos);
        calendarWidgetEventos->setObjectName(QStringLiteral("calendarWidgetEventos"));
        calendarWidgetEventos->setGeometry(QRect(10, 10, 341, 271));
        calendarWidgetEventos->setHorizontalHeaderFormat(QCalendarWidget::ShortDayNames);
        tableViewEventos = new QTableView(Eventos);
        tableViewEventos->setObjectName(QStringLiteral("tableViewEventos"));
        tableViewEventos->setGeometry(QRect(10, 300, 941, 321));
        tableViewParticipantes = new QTableView(Eventos);
        tableViewParticipantes->setObjectName(QStringLiteral("tableViewParticipantes"));
        tableViewParticipantes->setGeometry(QRect(370, 10, 581, 271));

        retranslateUi(Eventos);

        QMetaObject::connectSlotsByName(Eventos);
    } // setupUi

    void retranslateUi(QWidget *Eventos)
    {
        Eventos->setWindowTitle(QApplication::translate("Eventos", "Eventos", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Eventos: public Ui_Eventos {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EVENTOS_H

/********************************************************************************
** Form generated from reading UI file 'MainWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMdiArea>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionDoa_es;
    QAction *actionParticipantes;
    QAction *actionAdicionar_item;
    QAction *actionEliminar_item;
    QAction *actionModificar_item;
    QAction *actionModificar_valor_da_mensalidade;
    QAction *actionAdicionar_doa_ao;
    QAction *actionModificar_doa_ao;
    QAction *actionEliminar_doa_ao;
    QAction *actionAdicionar_evento;
    QAction *actionModificar_evento;
    QAction *actionEliminar_evento;
    QWidget *centralwidget;
    QMdiArea *mdiAreaMain;
    QMenuBar *menubar;
    QMenu *menuContabilidade;
    QMenu *menuItens;
    QMenu *menuMensalidades;
    QMenu *menuDoa_es;
    QMenu *menuEventos;
    QMenu *menuEventos_2;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1024, 720);
        actionDoa_es = new QAction(MainWindow);
        actionDoa_es->setObjectName(QStringLiteral("actionDoa_es"));
        actionParticipantes = new QAction(MainWindow);
        actionParticipantes->setObjectName(QStringLiteral("actionParticipantes"));
        actionAdicionar_item = new QAction(MainWindow);
        actionAdicionar_item->setObjectName(QStringLiteral("actionAdicionar_item"));
        actionEliminar_item = new QAction(MainWindow);
        actionEliminar_item->setObjectName(QStringLiteral("actionEliminar_item"));
        actionModificar_item = new QAction(MainWindow);
        actionModificar_item->setObjectName(QStringLiteral("actionModificar_item"));
        actionModificar_valor_da_mensalidade = new QAction(MainWindow);
        actionModificar_valor_da_mensalidade->setObjectName(QStringLiteral("actionModificar_valor_da_mensalidade"));
        actionAdicionar_doa_ao = new QAction(MainWindow);
        actionAdicionar_doa_ao->setObjectName(QStringLiteral("actionAdicionar_doa_ao"));
        actionModificar_doa_ao = new QAction(MainWindow);
        actionModificar_doa_ao->setObjectName(QStringLiteral("actionModificar_doa_ao"));
        actionEliminar_doa_ao = new QAction(MainWindow);
        actionEliminar_doa_ao->setObjectName(QStringLiteral("actionEliminar_doa_ao"));
        actionAdicionar_evento = new QAction(MainWindow);
        actionAdicionar_evento->setObjectName(QStringLiteral("actionAdicionar_evento"));
        actionModificar_evento = new QAction(MainWindow);
        actionModificar_evento->setObjectName(QStringLiteral("actionModificar_evento"));
        actionEliminar_evento = new QAction(MainWindow);
        actionEliminar_evento->setObjectName(QStringLiteral("actionEliminar_evento"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        mdiAreaMain = new QMdiArea(centralwidget);
        mdiAreaMain->setObjectName(QStringLiteral("mdiAreaMain"));
        mdiAreaMain->setGeometry(QRect(0, 0, 960, 640));
        mdiAreaMain->setActivationOrder(QMdiArea::CreationOrder);
        mdiAreaMain->setViewMode(QMdiArea::TabbedView);
        mdiAreaMain->setDocumentMode(false);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1024, 22));
        menuContabilidade = new QMenu(menubar);
        menuContabilidade->setObjectName(QStringLiteral("menuContabilidade"));
        menuItens = new QMenu(menuContabilidade);
        menuItens->setObjectName(QStringLiteral("menuItens"));
        menuMensalidades = new QMenu(menuContabilidade);
        menuMensalidades->setObjectName(QStringLiteral("menuMensalidades"));
        menuDoa_es = new QMenu(menuContabilidade);
        menuDoa_es->setObjectName(QStringLiteral("menuDoa_es"));
        menuEventos = new QMenu(menubar);
        menuEventos->setObjectName(QStringLiteral("menuEventos"));
        menuEventos_2 = new QMenu(menuEventos);
        menuEventos_2->setObjectName(QStringLiteral("menuEventos_2"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuContabilidade->menuAction());
        menubar->addAction(menuEventos->menuAction());
        menuContabilidade->addAction(menuItens->menuAction());
        menuContabilidade->addAction(menuMensalidades->menuAction());
        menuContabilidade->addAction(menuDoa_es->menuAction());
        menuItens->addAction(actionAdicionar_item);
        menuItens->addAction(actionEliminar_item);
        menuItens->addAction(actionModificar_item);
        menuMensalidades->addAction(actionModificar_valor_da_mensalidade);
        menuDoa_es->addAction(actionAdicionar_doa_ao);
        menuDoa_es->addAction(actionModificar_doa_ao);
        menuDoa_es->addAction(actionEliminar_doa_ao);
        menuEventos->addAction(menuEventos_2->menuAction());
        menuEventos->addAction(actionParticipantes);
        menuEventos_2->addAction(actionAdicionar_evento);
        menuEventos_2->addAction(actionModificar_evento);
        menuEventos_2->addAction(actionEliminar_evento);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Dojo Morada Do Sol", nullptr));
        actionDoa_es->setText(QApplication::translate("MainWindow", "Doa\303\247\303\265es", nullptr));
        actionParticipantes->setText(QApplication::translate("MainWindow", "Participantes", nullptr));
        actionAdicionar_item->setText(QApplication::translate("MainWindow", "Adicionar item", nullptr));
        actionEliminar_item->setText(QApplication::translate("MainWindow", "Eliminar item", nullptr));
        actionModificar_item->setText(QApplication::translate("MainWindow", "Modificar item", nullptr));
        actionModificar_valor_da_mensalidade->setText(QApplication::translate("MainWindow", "Modificar valor da mensalidade", nullptr));
        actionAdicionar_doa_ao->setText(QApplication::translate("MainWindow", "Adicionar doa\303\247ao", nullptr));
        actionModificar_doa_ao->setText(QApplication::translate("MainWindow", "Modificar doa\303\247ao", nullptr));
        actionEliminar_doa_ao->setText(QApplication::translate("MainWindow", "Eliminar doa\303\247ao", nullptr));
        actionAdicionar_evento->setText(QApplication::translate("MainWindow", "Adicionar evento", nullptr));
        actionModificar_evento->setText(QApplication::translate("MainWindow", "Modificar evento", nullptr));
        actionEliminar_evento->setText(QApplication::translate("MainWindow", "Eliminar evento", nullptr));
        menuContabilidade->setTitle(QApplication::translate("MainWindow", "Contabilidade", nullptr));
        menuItens->setTitle(QApplication::translate("MainWindow", "Itens", nullptr));
        menuMensalidades->setTitle(QApplication::translate("MainWindow", "Mensalidades", nullptr));
        menuDoa_es->setTitle(QApplication::translate("MainWindow", "Doa\303\247\303\265es", nullptr));
        menuEventos->setTitle(QApplication::translate("MainWindow", "Eventos", nullptr));
        menuEventos_2->setTitle(QApplication::translate("MainWindow", "Eventos", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

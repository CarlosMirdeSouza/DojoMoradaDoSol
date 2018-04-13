/********************************************************************************
** Form generated from reading UI file 'Contabilidade.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONTABILIDADE_H
#define UI_CONTABILIDADE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Contabilidade
{
public:
    QLabel *labelPesquisa;
    QLabel *labelTipoPesquisa;
    QComboBox *comboBoxTipoPesquisa;
    QLineEdit *lineEditPesquisa;
    QPushButton *pushButtonPesquisa;
    QTableView *tableViewContabilidade;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayoutAcoes;
    QPushButton *pushButtonCalcular;
    QPushButton *pushButtonGerarGrafico;

    void setupUi(QWidget *Contabilidade)
    {
        if (Contabilidade->objectName().isEmpty())
            Contabilidade->setObjectName(QStringLiteral("Contabilidade"));
        Contabilidade->resize(960, 640);
        labelPesquisa = new QLabel(Contabilidade);
        labelPesquisa->setObjectName(QStringLiteral("labelPesquisa"));
        labelPesquisa->setGeometry(QRect(231, 11, 81, 17));
        QFont font;
        font.setPointSize(12);
        labelPesquisa->setFont(font);
        labelTipoPesquisa = new QLabel(Contabilidade);
        labelTipoPesquisa->setObjectName(QStringLiteral("labelTipoPesquisa"));
        labelTipoPesquisa->setGeometry(QRect(11, 11, 141, 17));
        labelTipoPesquisa->setFont(font);
        comboBoxTipoPesquisa = new QComboBox(Contabilidade);
        comboBoxTipoPesquisa->addItem(QString());
        comboBoxTipoPesquisa->addItem(QString());
        comboBoxTipoPesquisa->addItem(QString());
        comboBoxTipoPesquisa->addItem(QString());
        comboBoxTipoPesquisa->addItem(QString());
        comboBoxTipoPesquisa->setObjectName(QStringLiteral("comboBoxTipoPesquisa"));
        comboBoxTipoPesquisa->setGeometry(QRect(11, 39, 181, 31));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(comboBoxTipoPesquisa->sizePolicy().hasHeightForWidth());
        comboBoxTipoPesquisa->setSizePolicy(sizePolicy);
        comboBoxTipoPesquisa->setFont(font);
        lineEditPesquisa = new QLineEdit(Contabilidade);
        lineEditPesquisa->setObjectName(QStringLiteral("lineEditPesquisa"));
        lineEditPesquisa->setGeometry(QRect(231, 39, 441, 31));
        QFont font1;
        font1.setPointSize(13);
        lineEditPesquisa->setFont(font1);
        pushButtonPesquisa = new QPushButton(Contabilidade);
        pushButtonPesquisa->setObjectName(QStringLiteral("pushButtonPesquisa"));
        pushButtonPesquisa->setGeometry(QRect(700, 40, 241, 31));
        pushButtonPesquisa->setFont(font1);
        tableViewContabilidade = new QTableView(Contabilidade);
        tableViewContabilidade->setObjectName(QStringLiteral("tableViewContabilidade"));
        tableViewContabilidade->setGeometry(QRect(15, 80, 931, 491));
        layoutWidget = new QWidget(Contabilidade);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(11, 591, 931, 41));
        horizontalLayoutAcoes = new QHBoxLayout(layoutWidget);
        horizontalLayoutAcoes->setObjectName(QStringLiteral("horizontalLayoutAcoes"));
        horizontalLayoutAcoes->setContentsMargins(0, 0, 0, 0);
        pushButtonCalcular = new QPushButton(layoutWidget);
        pushButtonCalcular->setObjectName(QStringLiteral("pushButtonCalcular"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButtonCalcular->sizePolicy().hasHeightForWidth());
        pushButtonCalcular->setSizePolicy(sizePolicy1);
        QFont font2;
        font2.setPointSize(14);
        pushButtonCalcular->setFont(font2);

        horizontalLayoutAcoes->addWidget(pushButtonCalcular);

        pushButtonGerarGrafico = new QPushButton(layoutWidget);
        pushButtonGerarGrafico->setObjectName(QStringLiteral("pushButtonGerarGrafico"));
        sizePolicy1.setHeightForWidth(pushButtonGerarGrafico->sizePolicy().hasHeightForWidth());
        pushButtonGerarGrafico->setSizePolicy(sizePolicy1);
        pushButtonGerarGrafico->setFont(font2);

        horizontalLayoutAcoes->addWidget(pushButtonGerarGrafico);


        retranslateUi(Contabilidade);

        QMetaObject::connectSlotsByName(Contabilidade);
    } // setupUi

    void retranslateUi(QWidget *Contabilidade)
    {
        Contabilidade->setWindowTitle(QApplication::translate("Contabilidade", "Contabilidade", nullptr));
        labelPesquisa->setText(QApplication::translate("Contabilidade", "Pesquisa:", nullptr));
        labelTipoPesquisa->setText(QApplication::translate("Contabilidade", "Tipo de Pesquisa:", nullptr));
        comboBoxTipoPesquisa->setItemText(0, QApplication::translate("Contabilidade", "Nome", nullptr));
        comboBoxTipoPesquisa->setItemText(1, QApplication::translate("Contabilidade", "CPF", nullptr));
        comboBoxTipoPesquisa->setItemText(2, QApplication::translate("Contabilidade", "Mensalidade", nullptr));
        comboBoxTipoPesquisa->setItemText(3, QApplication::translate("Contabilidade", "Item", nullptr));
        comboBoxTipoPesquisa->setItemText(4, QApplication::translate("Contabilidade", "Doa\303\247\303\243o", nullptr));

        pushButtonPesquisa->setText(QApplication::translate("Contabilidade", "Pesquisar", nullptr));
        pushButtonCalcular->setText(QApplication::translate("Contabilidade", "Calcular total", nullptr));
        pushButtonGerarGrafico->setText(QApplication::translate("Contabilidade", "Gerar grafico", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Contabilidade: public Ui_Contabilidade {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONTABILIDADE_H

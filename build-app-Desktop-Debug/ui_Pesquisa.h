/********************************************************************************
** Form generated from reading UI file 'Pesquisa.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PESQUISA_H
#define UI_PESQUISA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Pesquisa
{
public:
    QComboBox *comboBoxTipoPesquisa;
    QLabel *labelTipoPesquisa;
    QPushButton *pushButtonPesquisa;
    QLabel *labelPesquisa;
    QTableView *tableViewPesquisa;
    QLineEdit *lineEditPesquisa;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QCheckBox *checkBoxDadosPessoais;
    QCheckBox *checkBoxDadosContato;
    QCheckBox *checkBoxDadosMoradia;
    QLabel *labelImagem;

    void setupUi(QWidget *Pesquisa)
    {
        if (Pesquisa->objectName().isEmpty())
            Pesquisa->setObjectName(QStringLiteral("Pesquisa"));
        Pesquisa->resize(960, 640);
        Pesquisa->setCursor(QCursor(Qt::ArrowCursor));
        QIcon icon;
        icon.addFile(QStringLiteral("icons/iconmonstr-magnifier-1-240.ico"), QSize(), QIcon::Normal, QIcon::Off);
        Pesquisa->setWindowIcon(icon);
        comboBoxTipoPesquisa = new QComboBox(Pesquisa);
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
        QFont font;
        font.setPointSize(12);
        comboBoxTipoPesquisa->setFont(font);
        labelTipoPesquisa = new QLabel(Pesquisa);
        labelTipoPesquisa->setObjectName(QStringLiteral("labelTipoPesquisa"));
        labelTipoPesquisa->setGeometry(QRect(11, 11, 141, 17));
        labelTipoPesquisa->setFont(font);
        pushButtonPesquisa = new QPushButton(Pesquisa);
        pushButtonPesquisa->setObjectName(QStringLiteral("pushButtonPesquisa"));
        pushButtonPesquisa->setGeometry(QRect(740, 40, 250, 31));
        pushButtonPesquisa->setFont(font);
        labelPesquisa = new QLabel(Pesquisa);
        labelPesquisa->setObjectName(QStringLiteral("labelPesquisa"));
        labelPesquisa->setGeometry(QRect(231, 11, 81, 17));
        labelPesquisa->setFont(font);
        tableViewPesquisa = new QTableView(Pesquisa);
        tableViewPesquisa->setObjectName(QStringLiteral("tableViewPesquisa"));
        tableViewPesquisa->setGeometry(QRect(5, 121, 811, 511));
        tableViewPesquisa->viewport()->setProperty("cursor", QVariant(QCursor(Qt::ArrowCursor)));
        tableViewPesquisa->setAutoFillBackground(true);
        tableViewPesquisa->horizontalHeader()->setCascadingSectionResizes(true);
        tableViewPesquisa->horizontalHeader()->setProperty("showSortIndicator", QVariant(true));
        tableViewPesquisa->horizontalHeader()->setStretchLastSection(true);
        tableViewPesquisa->verticalHeader()->setCascadingSectionResizes(true);
        lineEditPesquisa = new QLineEdit(Pesquisa);
        lineEditPesquisa->setObjectName(QStringLiteral("lineEditPesquisa"));
        lineEditPesquisa->setGeometry(QRect(230, 40, 501, 31));
        layoutWidget = new QWidget(Pesquisa);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(230, 80, 453, 27));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        checkBoxDadosPessoais = new QCheckBox(layoutWidget);
        checkBoxDadosPessoais->setObjectName(QStringLiteral("checkBoxDadosPessoais"));
        checkBoxDadosPessoais->setFont(font);

        horizontalLayout->addWidget(checkBoxDadosPessoais);

        checkBoxDadosContato = new QCheckBox(layoutWidget);
        checkBoxDadosContato->setObjectName(QStringLiteral("checkBoxDadosContato"));
        checkBoxDadosContato->setFont(font);

        horizontalLayout->addWidget(checkBoxDadosContato);

        checkBoxDadosMoradia = new QCheckBox(layoutWidget);
        checkBoxDadosMoradia->setObjectName(QStringLiteral("checkBoxDadosMoradia"));
        checkBoxDadosMoradia->setFont(font);

        horizontalLayout->addWidget(checkBoxDadosMoradia);

        labelImagem = new QLabel(Pesquisa);
        labelImagem->setObjectName(QStringLiteral("labelImagem"));
        labelImagem->setGeometry(QRect(830, 120, 177, 236));

        retranslateUi(Pesquisa);

        QMetaObject::connectSlotsByName(Pesquisa);
    } // setupUi

    void retranslateUi(QWidget *Pesquisa)
    {
        Pesquisa->setWindowTitle(QApplication::translate("Pesquisa", "Pesquisa", nullptr));
        comboBoxTipoPesquisa->setItemText(0, QApplication::translate("Pesquisa", "Nome", nullptr));
        comboBoxTipoPesquisa->setItemText(1, QApplication::translate("Pesquisa", "CPF", nullptr));
        comboBoxTipoPesquisa->setItemText(2, QApplication::translate("Pesquisa", "RG", nullptr));

        labelTipoPesquisa->setText(QApplication::translate("Pesquisa", "Tipo de Pesquisa:", nullptr));
        pushButtonPesquisa->setText(QApplication::translate("Pesquisa", "Pesquisar", nullptr));
        labelPesquisa->setText(QApplication::translate("Pesquisa", "Pesquisa:", nullptr));
        checkBoxDadosPessoais->setText(QApplication::translate("Pesquisa", "Dados Pessoais", nullptr));
        checkBoxDadosContato->setText(QApplication::translate("Pesquisa", "Dados Contato", nullptr));
        checkBoxDadosMoradia->setText(QApplication::translate("Pesquisa", "Dados Moradia", nullptr));
        labelImagem->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Pesquisa: public Ui_Pesquisa {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PESQUISA_H

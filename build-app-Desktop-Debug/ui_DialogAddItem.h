/********************************************************************************
** Form generated from reading UI file 'DialogAddItem.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGADDITEM_H
#define UI_DIALOGADDITEM_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DialogAddItem
{
public:
    QDialogButtonBox *buttonBox;
    QGroupBox *groupBox;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *labelTipoItem;
    QComboBox *comboBoxTipoItem;
    QLabel *labelDescricaoItem;
    QLineEdit *lineEditDescricaoItem;
    QLabel *labelValor;
    QLineEdit *lineEditValor;
    QLabel *labelTransacao;
    QComboBox *comboBoxTransacao;
    QLabel *labelNomeItem;
    QLineEdit *lineEditNomeItem;
    QLabel *labelData;
    QLineEdit *lineEditData;

    void setupUi(QDialog *DialogAddItem)
    {
        if (DialogAddItem->objectName().isEmpty())
            DialogAddItem->setObjectName(QStringLiteral("DialogAddItem"));
        DialogAddItem->resize(640, 480);
        QFont font;
        font.setPointSize(12);
        DialogAddItem->setFont(font);
        DialogAddItem->setModal(true);
        buttonBox = new QDialogButtonBox(DialogAddItem);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(0, 440, 631, 32));
        QSizePolicy sizePolicy(QSizePolicy::Ignored, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(buttonBox->sizePolicy().hasHeightForWidth());
        buttonBox->setSizePolicy(sizePolicy);
        buttonBox->setLocale(QLocale(QLocale::Portuguese, QLocale::Brazil));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        buttonBox->setCenterButtons(true);
        groupBox = new QGroupBox(DialogAddItem);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 0, 621, 431));
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 33, 601, 381));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        labelTipoItem = new QLabel(layoutWidget);
        labelTipoItem->setObjectName(QStringLiteral("labelTipoItem"));

        verticalLayout->addWidget(labelTipoItem);

        comboBoxTipoItem = new QComboBox(layoutWidget);
        comboBoxTipoItem->setObjectName(QStringLiteral("comboBoxTipoItem"));

        verticalLayout->addWidget(comboBoxTipoItem);

        labelDescricaoItem = new QLabel(layoutWidget);
        labelDescricaoItem->setObjectName(QStringLiteral("labelDescricaoItem"));

        verticalLayout->addWidget(labelDescricaoItem);

        lineEditDescricaoItem = new QLineEdit(layoutWidget);
        lineEditDescricaoItem->setObjectName(QStringLiteral("lineEditDescricaoItem"));

        verticalLayout->addWidget(lineEditDescricaoItem);

        labelValor = new QLabel(layoutWidget);
        labelValor->setObjectName(QStringLiteral("labelValor"));

        verticalLayout->addWidget(labelValor);

        lineEditValor = new QLineEdit(layoutWidget);
        lineEditValor->setObjectName(QStringLiteral("lineEditValor"));

        verticalLayout->addWidget(lineEditValor);

        labelTransacao = new QLabel(layoutWidget);
        labelTransacao->setObjectName(QStringLiteral("labelTransacao"));

        verticalLayout->addWidget(labelTransacao);

        comboBoxTransacao = new QComboBox(layoutWidget);
        comboBoxTransacao->setObjectName(QStringLiteral("comboBoxTransacao"));

        verticalLayout->addWidget(comboBoxTransacao);

        labelNomeItem = new QLabel(layoutWidget);
        labelNomeItem->setObjectName(QStringLiteral("labelNomeItem"));

        verticalLayout->addWidget(labelNomeItem);

        lineEditNomeItem = new QLineEdit(layoutWidget);
        lineEditNomeItem->setObjectName(QStringLiteral("lineEditNomeItem"));

        verticalLayout->addWidget(lineEditNomeItem);

        labelData = new QLabel(layoutWidget);
        labelData->setObjectName(QStringLiteral("labelData"));

        verticalLayout->addWidget(labelData);

        lineEditData = new QLineEdit(layoutWidget);
        lineEditData->setObjectName(QStringLiteral("lineEditData"));

        verticalLayout->addWidget(lineEditData);

        labelDescricaoItem->raise();
        lineEditDescricaoItem->raise();
        labelValor->raise();
        lineEditValor->raise();
        labelData->raise();
        lineEditData->raise();
        comboBoxTipoItem->raise();
        labelTransacao->raise();
        labelNomeItem->raise();
        comboBoxTransacao->raise();
        lineEditNomeItem->raise();
        labelTipoItem->raise();

        retranslateUi(DialogAddItem);
        QObject::connect(buttonBox, SIGNAL(accepted()), DialogAddItem, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), DialogAddItem, SLOT(reject()));

        QMetaObject::connectSlotsByName(DialogAddItem);
    } // setupUi

    void retranslateUi(QDialog *DialogAddItem)
    {
        DialogAddItem->setWindowTitle(QApplication::translate("DialogAddItem", "Dialog", nullptr));
        groupBox->setTitle(QString());
        labelTipoItem->setText(QApplication::translate("DialogAddItem", "Tipo de Item:", nullptr));
        labelDescricaoItem->setText(QApplication::translate("DialogAddItem", "Descri\303\247\303\243o do Item:", nullptr));
        labelValor->setText(QApplication::translate("DialogAddItem", "Valor:", nullptr));
        labelTransacao->setText(QApplication::translate("DialogAddItem", "Transa\303\247\303\243o:", nullptr));
        labelNomeItem->setText(QApplication::translate("DialogAddItem", "Nome do Item:", nullptr));
        labelData->setText(QApplication::translate("DialogAddItem", "Data:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogAddItem: public Ui_DialogAddItem {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGADDITEM_H

/********************************************************************************
** Form generated from reading UI file 'Cadastro.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CADASTRO_H
#define UI_CADASTRO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Cadastro
{
public:
    QGroupBox *groupBoxDadosPessoias;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayoutDadoPessoais;
    QLabel *labelNome;
    QLineEdit *lineEditNome;
    QLabel *labelCpf;
    QLineEdit *lineEditCpf;
    QLabel *labelRg;
    QLineEdit *lineEditRg;
    QLabel *labelDataNascimento;
    QLineEdit *lineEditDataNascimento;
    QLabel *labelModalidade;
    QComboBox *comboBoxModalidade;
    QLineEdit *lineEditOutros;
    QCheckBox *checkBoxOutros;
    QGroupBox *groupBoxDadosContato;
    QLabel *labelEmail;
    QLineEdit *lineEditEmail;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayoutTelefone;
    QLabel *labelTelefoneCelular;
    QLineEdit *lineEditTelefoneFixo;
    QLabel *labelTelefoneFixo;
    QLineEdit *lineEditTelefoneCelular;
    QGroupBox *groupBoxEndereco;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayoutCepUf;
    QLabel *labelCep;
    QLineEdit *lineEditCep;
    QLabel *labelUf;
    QLineEdit *lineEditUf;
    QWidget *layoutWidget3;
    QVBoxLayout *verticalLayoutEndereco;
    QLabel *labelEndereco;
    QLineEdit *lineEditEndereco;
    QLabel *labelCidade;
    QLineEdit *lineEditCidade;
    QLabel *labelBairro;
    QLineEdit *lineEditBairro;
    QGroupBox *groupBoxExtra;
    QWidget *layoutWidget4;
    QVBoxLayout *verticalLayoutExtra;
    QLabel *labelProfissao;
    QLineEdit *lineEditProfissao;
    QLabel *labelPeso;
    QLineEdit *lineEditPeso;
    QLabel *labelCategoria;
    QLineEdit *lineEditCategoria;
    QWidget *layoutWidget5;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButtonCadastro;
    QPushButton *pushButtonLimpar;
    QPushButton *pushButtonAdicionarFoto;
    QLabel *labelImagem;

    void setupUi(QWidget *Cadastro)
    {
        if (Cadastro->objectName().isEmpty())
            Cadastro->setObjectName(QStringLiteral("Cadastro"));
        Cadastro->resize(960, 640);
        QFont font;
        font.setPointSize(12);
        Cadastro->setFont(font);
        groupBoxDadosPessoias = new QGroupBox(Cadastro);
        groupBoxDadosPessoias->setObjectName(QStringLiteral("groupBoxDadosPessoias"));
        groupBoxDadosPessoias->setGeometry(QRect(0, 4, 331, 451));
        groupBoxDadosPessoias->setFont(font);
        layoutWidget = new QWidget(groupBoxDadosPessoias);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 40, 311, 401));
        verticalLayoutDadoPessoais = new QVBoxLayout(layoutWidget);
        verticalLayoutDadoPessoais->setObjectName(QStringLiteral("verticalLayoutDadoPessoais"));
        verticalLayoutDadoPessoais->setContentsMargins(0, 0, 0, 0);
        labelNome = new QLabel(layoutWidget);
        labelNome->setObjectName(QStringLiteral("labelNome"));

        verticalLayoutDadoPessoais->addWidget(labelNome);

        lineEditNome = new QLineEdit(layoutWidget);
        lineEditNome->setObjectName(QStringLiteral("lineEditNome"));

        verticalLayoutDadoPessoais->addWidget(lineEditNome);

        labelCpf = new QLabel(layoutWidget);
        labelCpf->setObjectName(QStringLiteral("labelCpf"));

        verticalLayoutDadoPessoais->addWidget(labelCpf);

        lineEditCpf = new QLineEdit(layoutWidget);
        lineEditCpf->setObjectName(QStringLiteral("lineEditCpf"));
        lineEditCpf->setInputMethodHints(Qt::ImhFormattedNumbersOnly);
        lineEditCpf->setClearButtonEnabled(false);

        verticalLayoutDadoPessoais->addWidget(lineEditCpf);

        labelRg = new QLabel(layoutWidget);
        labelRg->setObjectName(QStringLiteral("labelRg"));

        verticalLayoutDadoPessoais->addWidget(labelRg);

        lineEditRg = new QLineEdit(layoutWidget);
        lineEditRg->setObjectName(QStringLiteral("lineEditRg"));

        verticalLayoutDadoPessoais->addWidget(lineEditRg);

        labelDataNascimento = new QLabel(layoutWidget);
        labelDataNascimento->setObjectName(QStringLiteral("labelDataNascimento"));

        verticalLayoutDadoPessoais->addWidget(labelDataNascimento);

        lineEditDataNascimento = new QLineEdit(layoutWidget);
        lineEditDataNascimento->setObjectName(QStringLiteral("lineEditDataNascimento"));
        lineEditDataNascimento->setInputMethodHints(Qt::ImhDate);

        verticalLayoutDadoPessoais->addWidget(lineEditDataNascimento);

        labelModalidade = new QLabel(layoutWidget);
        labelModalidade->setObjectName(QStringLiteral("labelModalidade"));

        verticalLayoutDadoPessoais->addWidget(labelModalidade);

        comboBoxModalidade = new QComboBox(layoutWidget);
        comboBoxModalidade->addItem(QString());
        comboBoxModalidade->addItem(QString());
        comboBoxModalidade->setObjectName(QStringLiteral("comboBoxModalidade"));
        comboBoxModalidade->setEnabled(true);
        comboBoxModalidade->setFrame(true);

        verticalLayoutDadoPessoais->addWidget(comboBoxModalidade);

        lineEditOutros = new QLineEdit(layoutWidget);
        lineEditOutros->setObjectName(QStringLiteral("lineEditOutros"));
        lineEditOutros->setEnabled(true);
        lineEditOutros->setFrame(true);

        verticalLayoutDadoPessoais->addWidget(lineEditOutros);

        checkBoxOutros = new QCheckBox(layoutWidget);
        checkBoxOutros->setObjectName(QStringLiteral("checkBoxOutros"));

        verticalLayoutDadoPessoais->addWidget(checkBoxOutros);

        groupBoxDadosContato = new QGroupBox(Cadastro);
        groupBoxDadosContato->setObjectName(QStringLiteral("groupBoxDadosContato"));
        groupBoxDadosContato->setGeometry(QRect(0, 464, 651, 111));
        groupBoxDadosContato->setFont(font);
        labelEmail = new QLabel(groupBoxDadosContato);
        labelEmail->setObjectName(QStringLiteral("labelEmail"));
        labelEmail->setGeometry(QRect(11, 25, 61, 17));
        lineEditEmail = new QLineEdit(groupBoxDadosContato);
        lineEditEmail->setObjectName(QStringLiteral("lineEditEmail"));
        lineEditEmail->setGeometry(QRect(11, 48, 621, 25));
        lineEditEmail->setInputMethodHints(Qt::ImhEmailCharactersOnly);
        layoutWidget1 = new QWidget(groupBoxDadosContato);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(11, 79, 621, 29));
        horizontalLayoutTelefone = new QHBoxLayout(layoutWidget1);
        horizontalLayoutTelefone->setSpacing(14);
        horizontalLayoutTelefone->setObjectName(QStringLiteral("horizontalLayoutTelefone"));
        horizontalLayoutTelefone->setContentsMargins(0, 0, 0, 0);
        labelTelefoneCelular = new QLabel(layoutWidget1);
        labelTelefoneCelular->setObjectName(QStringLiteral("labelTelefoneCelular"));

        horizontalLayoutTelefone->addWidget(labelTelefoneCelular);

        lineEditTelefoneFixo = new QLineEdit(layoutWidget1);
        lineEditTelefoneFixo->setObjectName(QStringLiteral("lineEditTelefoneFixo"));
        lineEditTelefoneFixo->setInputMethodHints(Qt::ImhFormattedNumbersOnly);

        horizontalLayoutTelefone->addWidget(lineEditTelefoneFixo);

        labelTelefoneFixo = new QLabel(layoutWidget1);
        labelTelefoneFixo->setObjectName(QStringLiteral("labelTelefoneFixo"));

        horizontalLayoutTelefone->addWidget(labelTelefoneFixo);

        lineEditTelefoneCelular = new QLineEdit(layoutWidget1);
        lineEditTelefoneCelular->setObjectName(QStringLiteral("lineEditTelefoneCelular"));
        lineEditTelefoneCelular->setInputMethodHints(Qt::ImhFormattedNumbersOnly);

        horizontalLayoutTelefone->addWidget(lineEditTelefoneCelular);

        groupBoxEndereco = new QGroupBox(Cadastro);
        groupBoxEndereco->setObjectName(QStringLiteral("groupBoxEndereco"));
        groupBoxEndereco->setGeometry(QRect(340, 4, 311, 251));
        groupBoxEndereco->setFont(font);
        layoutWidget2 = new QWidget(groupBoxEndereco);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(10, 210, 291, 29));
        horizontalLayoutCepUf = new QHBoxLayout(layoutWidget2);
        horizontalLayoutCepUf->setObjectName(QStringLiteral("horizontalLayoutCepUf"));
        horizontalLayoutCepUf->setContentsMargins(0, 0, 0, 0);
        labelCep = new QLabel(layoutWidget2);
        labelCep->setObjectName(QStringLiteral("labelCep"));

        horizontalLayoutCepUf->addWidget(labelCep);

        lineEditCep = new QLineEdit(layoutWidget2);
        lineEditCep->setObjectName(QStringLiteral("lineEditCep"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lineEditCep->sizePolicy().hasHeightForWidth());
        lineEditCep->setSizePolicy(sizePolicy);
        lineEditCep->setInputMethodHints(Qt::ImhFormattedNumbersOnly);

        horizontalLayoutCepUf->addWidget(lineEditCep);

        labelUf = new QLabel(layoutWidget2);
        labelUf->setObjectName(QStringLiteral("labelUf"));

        horizontalLayoutCepUf->addWidget(labelUf);

        lineEditUf = new QLineEdit(layoutWidget2);
        lineEditUf->setObjectName(QStringLiteral("lineEditUf"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lineEditUf->sizePolicy().hasHeightForWidth());
        lineEditUf->setSizePolicy(sizePolicy1);

        horizontalLayoutCepUf->addWidget(lineEditUf);

        layoutWidget3 = new QWidget(groupBoxEndereco);
        layoutWidget3->setObjectName(QStringLiteral("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(11, 30, 291, 170));
        verticalLayoutEndereco = new QVBoxLayout(layoutWidget3);
        verticalLayoutEndereco->setObjectName(QStringLiteral("verticalLayoutEndereco"));
        verticalLayoutEndereco->setContentsMargins(0, 0, 0, 0);
        labelEndereco = new QLabel(layoutWidget3);
        labelEndereco->setObjectName(QStringLiteral("labelEndereco"));

        verticalLayoutEndereco->addWidget(labelEndereco);

        lineEditEndereco = new QLineEdit(layoutWidget3);
        lineEditEndereco->setObjectName(QStringLiteral("lineEditEndereco"));

        verticalLayoutEndereco->addWidget(lineEditEndereco);

        labelCidade = new QLabel(layoutWidget3);
        labelCidade->setObjectName(QStringLiteral("labelCidade"));

        verticalLayoutEndereco->addWidget(labelCidade);

        lineEditCidade = new QLineEdit(layoutWidget3);
        lineEditCidade->setObjectName(QStringLiteral("lineEditCidade"));

        verticalLayoutEndereco->addWidget(lineEditCidade);

        labelBairro = new QLabel(layoutWidget3);
        labelBairro->setObjectName(QStringLiteral("labelBairro"));

        verticalLayoutEndereco->addWidget(labelBairro);

        lineEditBairro = new QLineEdit(layoutWidget3);
        lineEditBairro->setObjectName(QStringLiteral("lineEditBairro"));

        verticalLayoutEndereco->addWidget(lineEditBairro);

        groupBoxExtra = new QGroupBox(Cadastro);
        groupBoxExtra->setObjectName(QStringLiteral("groupBoxExtra"));
        groupBoxExtra->setGeometry(QRect(340, 244, 311, 211));
        groupBoxExtra->setFont(font);
        layoutWidget4 = new QWidget(groupBoxExtra);
        layoutWidget4->setObjectName(QStringLiteral("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(10, 30, 291, 170));
        verticalLayoutExtra = new QVBoxLayout(layoutWidget4);
        verticalLayoutExtra->setObjectName(QStringLiteral("verticalLayoutExtra"));
        verticalLayoutExtra->setContentsMargins(0, 0, 0, 0);
        labelProfissao = new QLabel(layoutWidget4);
        labelProfissao->setObjectName(QStringLiteral("labelProfissao"));

        verticalLayoutExtra->addWidget(labelProfissao);

        lineEditProfissao = new QLineEdit(layoutWidget4);
        lineEditProfissao->setObjectName(QStringLiteral("lineEditProfissao"));

        verticalLayoutExtra->addWidget(lineEditProfissao);

        labelPeso = new QLabel(layoutWidget4);
        labelPeso->setObjectName(QStringLiteral("labelPeso"));

        verticalLayoutExtra->addWidget(labelPeso);

        lineEditPeso = new QLineEdit(layoutWidget4);
        lineEditPeso->setObjectName(QStringLiteral("lineEditPeso"));

        verticalLayoutExtra->addWidget(lineEditPeso);

        labelCategoria = new QLabel(layoutWidget4);
        labelCategoria->setObjectName(QStringLiteral("labelCategoria"));

        verticalLayoutExtra->addWidget(labelCategoria);

        lineEditCategoria = new QLineEdit(layoutWidget4);
        lineEditCategoria->setObjectName(QStringLiteral("lineEditCategoria"));
        lineEditCategoria->setInputMethodHints(Qt::ImhNone);

        verticalLayoutExtra->addWidget(lineEditCategoria);

        layoutWidget5 = new QWidget(Cadastro);
        layoutWidget5->setObjectName(QStringLiteral("layoutWidget5"));
        layoutWidget5->setGeometry(QRect(20, 590, 981, 41));
        horizontalLayout = new QHBoxLayout(layoutWidget5);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButtonCadastro = new QPushButton(layoutWidget5);
        pushButtonCadastro->setObjectName(QStringLiteral("pushButtonCadastro"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(pushButtonCadastro->sizePolicy().hasHeightForWidth());
        pushButtonCadastro->setSizePolicy(sizePolicy2);
        QFont font1;
        font1.setPointSize(14);
        pushButtonCadastro->setFont(font1);

        horizontalLayout->addWidget(pushButtonCadastro);

        pushButtonLimpar = new QPushButton(layoutWidget5);
        pushButtonLimpar->setObjectName(QStringLiteral("pushButtonLimpar"));
        sizePolicy2.setHeightForWidth(pushButtonLimpar->sizePolicy().hasHeightForWidth());
        pushButtonLimpar->setSizePolicy(sizePolicy2);
        pushButtonLimpar->setFont(font1);

        horizontalLayout->addWidget(pushButtonLimpar);

        pushButtonAdicionarFoto = new QPushButton(Cadastro);
        pushButtonAdicionarFoto->setObjectName(QStringLiteral("pushButtonAdicionarFoto"));
        pushButtonAdicionarFoto->setGeometry(QRect(660, 530, 354, 41));
        pushButtonAdicionarFoto->setFont(font1);
        labelImagem = new QLabel(Cadastro);
        labelImagem->setObjectName(QStringLiteral("labelImagem"));
        labelImagem->setGeometry(QRect(660, 26, 354, 472));
        QWidget::setTabOrder(lineEditNome, lineEditCpf);
        QWidget::setTabOrder(lineEditCpf, lineEditRg);
        QWidget::setTabOrder(lineEditRg, lineEditDataNascimento);
        QWidget::setTabOrder(lineEditDataNascimento, comboBoxModalidade);
        QWidget::setTabOrder(comboBoxModalidade, lineEditOutros);
        QWidget::setTabOrder(lineEditOutros, checkBoxOutros);
        QWidget::setTabOrder(checkBoxOutros, lineEditEndereco);
        QWidget::setTabOrder(lineEditEndereco, lineEditCidade);
        QWidget::setTabOrder(lineEditCidade, lineEditBairro);
        QWidget::setTabOrder(lineEditBairro, lineEditCep);
        QWidget::setTabOrder(lineEditCep, lineEditUf);
        QWidget::setTabOrder(lineEditUf, lineEditProfissao);
        QWidget::setTabOrder(lineEditProfissao, lineEditPeso);
        QWidget::setTabOrder(lineEditPeso, lineEditCategoria);
        QWidget::setTabOrder(lineEditCategoria, lineEditEmail);
        QWidget::setTabOrder(lineEditEmail, lineEditTelefoneFixo);
        QWidget::setTabOrder(lineEditTelefoneFixo, lineEditTelefoneCelular);

        retranslateUi(Cadastro);

        QMetaObject::connectSlotsByName(Cadastro);
    } // setupUi

    void retranslateUi(QWidget *Cadastro)
    {
        Cadastro->setWindowTitle(QApplication::translate("Cadastro", "Cadastro", nullptr));
        groupBoxDadosPessoias->setTitle(QApplication::translate("Cadastro", "Dados Pessoais", nullptr));
        labelNome->setText(QApplication::translate("Cadastro", "Nome:", nullptr));
        labelCpf->setText(QApplication::translate("Cadastro", "CPF:", nullptr));
        labelRg->setText(QApplication::translate("Cadastro", "RG:", nullptr));
        labelDataNascimento->setText(QApplication::translate("Cadastro", "Data Nascimento:", nullptr));
        labelModalidade->setText(QApplication::translate("Cadastro", "Modalidade:", nullptr));
        comboBoxModalidade->setItemText(0, QApplication::translate("Cadastro", "Karate", nullptr));
        comboBoxModalidade->setItemText(1, QApplication::translate("Cadastro", "Judo", nullptr));

        checkBoxOutros->setText(QApplication::translate("Cadastro", "Outros", nullptr));
        groupBoxDadosContato->setTitle(QApplication::translate("Cadastro", "Dados de Contato", nullptr));
        labelEmail->setText(QApplication::translate("Cadastro", "Email:", nullptr));
        labelTelefoneCelular->setText(QApplication::translate("Cadastro", "Telefone Celular:", nullptr));
        labelTelefoneFixo->setText(QApplication::translate("Cadastro", "Telefone Fixo:", nullptr));
        groupBoxEndereco->setTitle(QApplication::translate("Cadastro", "Moradia", nullptr));
        labelCep->setText(QApplication::translate("Cadastro", "CEP:", nullptr));
        labelUf->setText(QApplication::translate("Cadastro", "UF:", nullptr));
        labelEndereco->setText(QApplication::translate("Cadastro", "Endere\303\247o:", nullptr));
        labelCidade->setText(QApplication::translate("Cadastro", "Cidade:", nullptr));
        labelBairro->setText(QApplication::translate("Cadastro", "Bairro:", nullptr));
        groupBoxExtra->setTitle(QString());
        labelProfissao->setText(QApplication::translate("Cadastro", "Profiss\303\243o:", nullptr));
        labelPeso->setText(QApplication::translate("Cadastro", "Peso:", nullptr));
        labelCategoria->setText(QApplication::translate("Cadastro", "Categoria:", nullptr));
        pushButtonCadastro->setText(QApplication::translate("Cadastro", "Cadastro", nullptr));
        pushButtonLimpar->setText(QApplication::translate("Cadastro", "Limpar dados", nullptr));
        pushButtonAdicionarFoto->setText(QApplication::translate("Cadastro", "Adicionar foto", nullptr));
        labelImagem->setText(QApplication::translate("Cadastro", "Carregando imagem...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Cadastro: public Ui_Cadastro {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CADASTRO_H

QT += gui core sql

greaterThan(QT_MAJOR_VERSION, 4) : QT += widgets

TARGET = DojoMoradaDoSol
TEMPLATE = app

HEADERS += \
    mainwindow.h \
    cadastro.h \
    pesquisa.h \
    contabilidade.h \
    eventos.h \
    dialogs/dialogadditem.h \
    dialogs/dialogadddoacao.h \
    dialogs/dialogaddmensalidade.h \
    bancodados/bancodados.h

SOURCES += \
    main.cpp \
    mainwindow.cpp \
    cadastro.cpp \
    pesquisa.cpp \
    contabilidade.cpp \
    eventos.cpp \
    dialogs/dialogadditem.cpp \
    dialogs/dialogadddoacao.cpp \
    dialogs/dialogaddmensalidade.cpp \
    bancodados/bancodados.cpp


FORMS += \
    MainWindow.ui \
    Cadastro.ui \
    Pesquisa.ui \
    Contabilidade.ui \
    Eventos.ui \
    dialogs/DialogAddItem.ui \
    dialogs/DialogAddDoacao.ui \
    #dialogs/DialogAddMensalidade.ui

RESOURCES += \
    resources.qrc

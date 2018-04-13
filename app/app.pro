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
    dialogadditem.h \
    bancodados/bancodados.h

SOURCES += \
    main.cpp \
    mainwindow.cpp \
    cadastro.cpp \
    pesquisa.cpp \
    contabilidade.cpp \
    eventos.cpp \
    dialogadditem.cpp \
    bancodados/bancodados.cpp


FORMS += \
    MainWindow.ui \
    Cadastro.ui \
    Pesquisa.ui \
    Contabilidade.ui \
    Eventos.ui \
    DialogAddItem.ui

RESOURCES += \
    resources.qrc

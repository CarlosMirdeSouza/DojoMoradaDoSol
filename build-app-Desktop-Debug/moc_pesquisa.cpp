/****************************************************************************
** Meta object code from reading C++ file 'pesquisa.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../app/pesquisa.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pesquisa.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Pesquisa_t {
    QByteArrayData data[11];
    char stringdata0[215];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Pesquisa_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Pesquisa_t qt_meta_stringdata_Pesquisa = {
    {
QT_MOC_LITERAL(0, 0, 8), // "Pesquisa"
QT_MOC_LITERAL(1, 9, 29), // "on_pushButtonPesquisa_clicked"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 37), // "on_checkBoxDadosPessoais_stat..."
QT_MOC_LITERAL(4, 78, 4), // "arg1"
QT_MOC_LITERAL(5, 83, 36), // "on_checkBoxDadosContato_state..."
QT_MOC_LITERAL(6, 120, 36), // "on_checkBoxDadosMoradia_state..."
QT_MOC_LITERAL(7, 157, 28), // "on_tableViewPesquisa_clicked"
QT_MOC_LITERAL(8, 186, 5), // "index"
QT_MOC_LITERAL(9, 192, 9), // "deleteRow"
QT_MOC_LITERAL(10, 202, 12) // "modifyImagem"

    },
    "Pesquisa\0on_pushButtonPesquisa_clicked\0"
    "\0on_checkBoxDadosPessoais_stateChanged\0"
    "arg1\0on_checkBoxDadosContato_stateChanged\0"
    "on_checkBoxDadosMoradia_stateChanged\0"
    "on_tableViewPesquisa_clicked\0index\0"
    "deleteRow\0modifyImagem"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Pesquisa[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x08 /* Private */,
       3,    1,   50,    2, 0x08 /* Private */,
       5,    1,   53,    2, 0x08 /* Private */,
       6,    1,   56,    2, 0x08 /* Private */,
       7,    1,   59,    2, 0x08 /* Private */,
       9,    0,   62,    2, 0x08 /* Private */,
      10,    0,   63,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::QModelIndex,    8,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Pesquisa::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Pesquisa *_t = static_cast<Pesquisa *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_pushButtonPesquisa_clicked(); break;
        case 1: _t->on_checkBoxDadosPessoais_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->on_checkBoxDadosContato_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->on_checkBoxDadosMoradia_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->on_tableViewPesquisa_clicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 5: _t->deleteRow(); break;
        case 6: _t->modifyImagem(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Pesquisa::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Pesquisa.data,
      qt_meta_data_Pesquisa,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Pesquisa::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Pesquisa::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Pesquisa.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Pesquisa::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

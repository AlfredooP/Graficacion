/****************************************************************************
** Meta object code from reading C++ file 'dialog.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../dialog.h"
#include <QtGui/qtextcursor.h>
#include <QtGui/qscreen.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSDialogENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSDialogENDCLASS = QtMocHelpers::stringData(
    "Dialog",
    "on_btnArriba_clicked",
    "",
    "on_btnIzquierda_clicked",
    "on_btnDerecha_clicked",
    "on_btnAbajo_clicked",
    "on_cbTeclado_clicked",
    "checked",
    "on_btnReset_clicked",
    "on_btnEscalar_clicked",
    "on_btnEscalarPF_clicked",
    "on_btnRotar_clicked",
    "on_btnRotarPP_clicked",
    "on_btnAnimacion1_clicked",
    "on_btnAnimacion2_clicked",
    "rotarAnimacion1",
    "rotarAnimacion2"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSDialogENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   98,    2, 0x08,    1 /* Private */,
       3,    0,   99,    2, 0x08,    2 /* Private */,
       4,    0,  100,    2, 0x08,    3 /* Private */,
       5,    0,  101,    2, 0x08,    4 /* Private */,
       6,    1,  102,    2, 0x08,    5 /* Private */,
       8,    0,  105,    2, 0x08,    7 /* Private */,
       9,    0,  106,    2, 0x08,    8 /* Private */,
      10,    0,  107,    2, 0x08,    9 /* Private */,
      11,    0,  108,    2, 0x08,   10 /* Private */,
      12,    0,  109,    2, 0x08,   11 /* Private */,
      13,    0,  110,    2, 0x08,   12 /* Private */,
      14,    0,  111,    2, 0x08,   13 /* Private */,
      15,    0,  112,    2, 0x08,   14 /* Private */,
      16,    0,  113,    2, 0x08,   15 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject Dialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_CLASSDialogENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSDialogENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSDialogENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Dialog, std::true_type>,
        // method 'on_btnArriba_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_btnIzquierda_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_btnDerecha_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_btnAbajo_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_cbTeclado_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'on_btnReset_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_btnEscalar_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_btnEscalarPF_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_btnRotar_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_btnRotarPP_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_btnAnimacion1_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_btnAnimacion2_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'rotarAnimacion1'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'rotarAnimacion2'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void Dialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Dialog *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_btnArriba_clicked(); break;
        case 1: _t->on_btnIzquierda_clicked(); break;
        case 2: _t->on_btnDerecha_clicked(); break;
        case 3: _t->on_btnAbajo_clicked(); break;
        case 4: _t->on_cbTeclado_clicked((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 5: _t->on_btnReset_clicked(); break;
        case 6: _t->on_btnEscalar_clicked(); break;
        case 7: _t->on_btnEscalarPF_clicked(); break;
        case 8: _t->on_btnRotar_clicked(); break;
        case 9: _t->on_btnRotarPP_clicked(); break;
        case 10: _t->on_btnAnimacion1_clicked(); break;
        case 11: _t->on_btnAnimacion2_clicked(); break;
        case 12: _t->rotarAnimacion1(); break;
        case 13: _t->rotarAnimacion2(); break;
        default: ;
        }
    }
}

const QMetaObject *Dialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Dialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSDialogENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int Dialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 14;
    }
    return _id;
}
QT_WARNING_POP

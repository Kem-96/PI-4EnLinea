/****************************************************************************
** Meta object code from reading C++ file 'VentanaJuego.hpp'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../4EnLinea/src/VentanaJuego.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'VentanaJuego.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_VentanaJuego_t {
    const uint offsetsAndSize[10];
    char stringdata0[67];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_VentanaJuego_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_VentanaJuego_t qt_meta_stringdata_VentanaJuego = {
    {
QT_MOC_LITERAL(0, 12), // "VentanaJuego"
QT_MOC_LITERAL(13, 12), // "empezarJuego"
QT_MOC_LITERAL(26, 0), // ""
QT_MOC_LITERAL(27, 18), // "mostrarIntegrantes"
QT_MOC_LITERAL(46, 20) // "mostrarInstrucciones"

    },
    "VentanaJuego\0empezarJuego\0\0"
    "mostrarIntegrantes\0mostrarInstrucciones"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_VentanaJuego[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   32,    2, 0x09,    1 /* Protected */,
       3,    0,   33,    2, 0x09,    2 /* Protected */,
       4,    0,   34,    2, 0x09,    3 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void VentanaJuego::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<VentanaJuego *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->empezarJuego(); break;
        case 1: _t->mostrarIntegrantes(); break;
        case 2: _t->mostrarInstrucciones(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject VentanaJuego::staticMetaObject = { {
    QMetaObject::SuperData::link<QGraphicsView::staticMetaObject>(),
    qt_meta_stringdata_VentanaJuego.offsetsAndSize,
    qt_meta_data_VentanaJuego,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_VentanaJuego_t
, QtPrivate::TypeAndForceComplete<VentanaJuego, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *VentanaJuego::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VentanaJuego::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_VentanaJuego.stringdata0))
        return static_cast<void*>(this);
    return QGraphicsView::qt_metacast(_clname);
}

int VentanaJuego::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

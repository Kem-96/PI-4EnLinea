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
    const uint offsetsAndSize[26];
    char stringdata0[120];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_VentanaJuego_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_VentanaJuego_t qt_meta_stringdata_VentanaJuego = {
    {
QT_MOC_LITERAL(0, 12), // "VentanaJuego"
QT_MOC_LITERAL(13, 12), // "empezarJuego"
QT_MOC_LITERAL(26, 0), // ""
QT_MOC_LITERAL(27, 18), // "mostrarIntegrantes"
QT_MOC_LITERAL(46, 20), // "mostrarInstrucciones"
QT_MOC_LITERAL(67, 10), // "volverMenu"
QT_MOC_LITERAL(78, 5), // "fila1"
QT_MOC_LITERAL(84, 5), // "fila2"
QT_MOC_LITERAL(90, 5), // "fila3"
QT_MOC_LITERAL(96, 5), // "fila4"
QT_MOC_LITERAL(102, 5), // "fila5"
QT_MOC_LITERAL(108, 5), // "fila6"
QT_MOC_LITERAL(114, 5) // "fila7"

    },
    "VentanaJuego\0empezarJuego\0\0"
    "mostrarIntegrantes\0mostrarInstrucciones\0"
    "volverMenu\0fila1\0fila2\0fila3\0fila4\0"
    "fila5\0fila6\0fila7"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_VentanaJuego[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   80,    2, 0x09,    1 /* Protected */,
       3,    0,   81,    2, 0x09,    2 /* Protected */,
       4,    0,   82,    2, 0x09,    3 /* Protected */,
       5,    0,   83,    2, 0x09,    4 /* Protected */,
       6,    0,   84,    2, 0x09,    5 /* Protected */,
       7,    0,   85,    2, 0x09,    6 /* Protected */,
       8,    0,   86,    2, 0x09,    7 /* Protected */,
       9,    0,   87,    2, 0x09,    8 /* Protected */,
      10,    0,   88,    2, 0x09,    9 /* Protected */,
      11,    0,   89,    2, 0x09,   10 /* Protected */,
      12,    0,   90,    2, 0x09,   11 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Int,
    QMetaType::Int,
    QMetaType::Int,
    QMetaType::Int,
    QMetaType::Int,
    QMetaType::Int,
    QMetaType::Int,

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
        case 3: _t->volverMenu(); break;
        case 4: { int _r = _t->fila1();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 5: { int _r = _t->fila2();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 6: { int _r = _t->fila3();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 7: { int _r = _t->fila4();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 8: { int _r = _t->fila5();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 9: { int _r = _t->fila6();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 10: { int _r = _t->fila7();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

const QMetaObject VentanaJuego::staticMetaObject = { {
    QMetaObject::SuperData::link<QGraphicsView::staticMetaObject>(),
    qt_meta_stringdata_VentanaJuego.offsetsAndSize,
    qt_meta_data_VentanaJuego,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_VentanaJuego_t
, QtPrivate::TypeAndForceComplete<VentanaJuego, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>


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
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 11;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

/****************************************************************************
** Meta object code from reading C++ file 'Menu.hpp'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../4EnLinea/src/Menu.hpp"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Menu.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
namespace {
struct qt_meta_stringdata_Menu_t {
    uint offsetsAndSizes[10];
    char stringdata0[5];
    char stringdata1[22];
    char stringdata2[1];
    char stringdata3[27];
    char stringdata4[29];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_Menu_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_Menu_t qt_meta_stringdata_Menu = {
    {
        QT_MOC_LITERAL(0, 4),  // "Menu"
        QT_MOC_LITERAL(5, 21),  // "botonDePlayPresionado"
        QT_MOC_LITERAL(27, 0),  // ""
        QT_MOC_LITERAL(28, 26),  // "botonIntegrantesPresionado"
        QT_MOC_LITERAL(55, 28)   // "botonInstruccionesPresionado"
    },
    "Menu",
    "botonDePlayPresionado",
    "",
    "botonIntegrantesPresionado",
    "botonInstruccionesPresionado"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_Menu[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   32,    2, 0x06,    1 /* Public */,
       3,    0,   33,    2, 0x06,    2 /* Public */,
       4,    0,   34,    2, 0x06,    3 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject Menu::staticMetaObject = { {
    QMetaObject::SuperData::link<EscenaJuego::staticMetaObject>(),
    qt_meta_stringdata_Menu.offsetsAndSizes,
    qt_meta_data_Menu,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_Menu_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Menu, std::true_type>,
        // method 'botonDePlayPresionado'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'botonIntegrantesPresionado'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'botonInstruccionesPresionado'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void Menu::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Menu *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->botonDePlayPresionado(); break;
        case 1: _t->botonIntegrantesPresionado(); break;
        case 2: _t->botonInstruccionesPresionado(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Menu::*)();
            if (_t _q_method = &Menu::botonDePlayPresionado; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Menu::*)();
            if (_t _q_method = &Menu::botonIntegrantesPresionado; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Menu::*)();
            if (_t _q_method = &Menu::botonInstruccionesPresionado; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
    }
    (void)_a;
}

const QMetaObject *Menu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Menu::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Menu.stringdata0))
        return static_cast<void*>(this);
    return EscenaJuego::qt_metacast(_clname);
}

int Menu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = EscenaJuego::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void Menu::botonDePlayPresionado()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Menu::botonIntegrantesPresionado()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void Menu::botonInstruccionesPresionado()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
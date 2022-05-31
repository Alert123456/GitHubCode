/****************************************************************************
** Meta object code from reading C++ file 'chooselevelscene.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../CoinFlip/chooselevelscene.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'chooselevelscene.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_chooselevelscene_t {
    QByteArrayData data[8];
    char stringdata0[79];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_chooselevelscene_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_chooselevelscene_t qt_meta_stringdata_chooselevelscene = {
    {
QT_MOC_LITERAL(0, 0, 16), // "chooselevelscene"
QT_MOC_LITERAL(1, 17, 15), // "chooseSceneBack"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 8), // "explain5"
QT_MOC_LITERAL(4, 43, 8), // "explain3"
QT_MOC_LITERAL(5, 52, 8), // "explain4"
QT_MOC_LITERAL(6, 61, 8), // "explain6"
QT_MOC_LITERAL(7, 70, 8) // "explain9"

    },
    "chooselevelscene\0chooseSceneBack\0\0"
    "explain5\0explain3\0explain4\0explain6\0"
    "explain9"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_chooselevelscene[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06 /* Public */,
       3,    1,   45,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   48,    2, 0x0a /* Public */,
       5,    0,   49,    2, 0x0a /* Public */,
       6,    0,   50,    2, 0x0a /* Public */,
       7,    0,   51,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void chooselevelscene::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        chooselevelscene *_t = static_cast<chooselevelscene *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->chooseSceneBack(); break;
        case 1: _t->explain5((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->explain3(); break;
        case 3: _t->explain4(); break;
        case 4: _t->explain6(); break;
        case 5: _t->explain9(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (chooselevelscene::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&chooselevelscene::chooseSceneBack)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (chooselevelscene::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&chooselevelscene::explain5)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject chooselevelscene::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_chooselevelscene.data,
    qt_meta_data_chooselevelscene,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *chooselevelscene::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *chooselevelscene::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_chooselevelscene.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int chooselevelscene::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void chooselevelscene::chooseSceneBack()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void chooselevelscene::explain5(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

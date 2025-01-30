/****************************************************************************
** Meta object code from reading C++ file 'ObjectVariableTable.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../ObjectVariableTable.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ObjectVariableTable.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ObjectVariableTable_t {
    QByteArrayData data[10];
    char stringdata0[106];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ObjectVariableTable_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ObjectVariableTable_t qt_meta_stringdata_ObjectVariableTable = {
    {
QT_MOC_LITERAL(0, 0, 19), // "ObjectVariableTable"
QT_MOC_LITERAL(1, 20, 18), // "TakeObjectPosition"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 1), // "x"
QT_MOC_LITERAL(4, 42, 1), // "y"
QT_MOC_LITERAL(5, 44, 5), // "angle"
QT_MOC_LITERAL(6, 50, 13), // "DisplayDialog"
QT_MOC_LITERAL(7, 64, 11), // "UpdateTable"
QT_MOC_LITERAL(8, 76, 13), // "QList<Object>"
QT_MOC_LITERAL(9, 90, 15) // "ObjectContainer"

    },
    "ObjectVariableTable\0TakeObjectPosition\0"
    "\0x\0y\0angle\0DisplayDialog\0UpdateTable\0"
    "QList<Object>\0ObjectContainer"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ObjectVariableTable[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   36,    2, 0x0a /* Public */,
       7,    1,   37,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Float, QMetaType::Float, QMetaType::Float,    3,    4,    5,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,    9,

       0        // eod
};

void ObjectVariableTable::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ObjectVariableTable *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->TakeObjectPosition((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3]))); break;
        case 1: _t->DisplayDialog(); break;
        case 2: _t->UpdateTable((*reinterpret_cast< QList<Object>(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ObjectVariableTable::*)(float , float , float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ObjectVariableTable::TakeObjectPosition)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ObjectVariableTable::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_ObjectVariableTable.data,
    qt_meta_data_ObjectVariableTable,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ObjectVariableTable::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ObjectVariableTable::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ObjectVariableTable.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ObjectVariableTable::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void ObjectVariableTable::TakeObjectPosition(float _t1, float _t2, float _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

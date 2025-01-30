/****************************************************************************
** Meta object code from reading C++ file 'encoder.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../device/encoder.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'encoder.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Encoder_t {
    QByteArrayData data[7];
    char stringdata0[55];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Encoder_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Encoder_t qt_meta_stringdata_Encoder = {
    {
QT_MOC_LITERAL(0, 0, 7), // "Encoder"
QT_MOC_LITERAL(1, 8, 11), // "GotPosition"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 2), // "id"
QT_MOC_LITERAL(4, 24, 5), // "value"
QT_MOC_LITERAL(5, 30, 15), // "ProcessResponse"
QT_MOC_LITERAL(6, 46, 8) // "response"

    },
    "Encoder\0GotPosition\0\0id\0value\0"
    "ProcessResponse\0response"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Encoder[] = {

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
       1,    2,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    2,   34,    2, 0x0a /* Public */,
       5,    1,   39,    2, 0x2a /* Public | MethodCloned */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Float,    3,    4,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    3,    6,
    QMetaType::Void, QMetaType::QString,    3,

       0        // eod
};

void Encoder::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Encoder *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->GotPosition((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 1: _t->ProcessResponse((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 2: _t->ProcessResponse((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Encoder::*)(int , float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Encoder::GotPosition)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Encoder::staticMetaObject = { {
    QMetaObject::SuperData::link<Device::staticMetaObject>(),
    qt_meta_stringdata_Encoder.data,
    qt_meta_data_Encoder,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Encoder::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Encoder::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Encoder.stringdata0))
        return static_cast<void*>(this);
    return Device::qt_metacast(_clname);
}

int Encoder::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Device::qt_metacall(_c, _id, _a);
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
void Encoder::GotPosition(int _t1, float _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

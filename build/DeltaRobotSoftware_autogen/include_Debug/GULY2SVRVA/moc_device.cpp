/****************************************************************************
** Meta object code from reading C++ file 'device.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../device/device.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'device.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Device_t {
    QByteArrayData data[17];
    char stringdata0[133];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Device_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Device_t qt_meta_stringdata_Device = {
    {
QT_MOC_LITERAL(0, 0, 6), // "Device"
QT_MOC_LITERAL(1, 7, 11), // "receivedMsg"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 6), // "idName"
QT_MOC_LITERAL(4, 27, 9), // "infoReady"
QT_MOC_LITERAL(5, 37, 8), // "infoJson"
QT_MOC_LITERAL(6, 46, 3), // "Run"
QT_MOC_LITERAL(7, 50, 7), // "Connect"
QT_MOC_LITERAL(8, 58, 10), // "Disconnect"
QT_MOC_LITERAL(9, 69, 5), // "Delay"
QT_MOC_LITERAL(10, 75, 4), // "msec"
QT_MOC_LITERAL(11, 80, 11), // "GetResponse"
QT_MOC_LITERAL(12, 92, 7), // "timeout"
QT_MOC_LITERAL(13, 100, 9), // "WriteData"
QT_MOC_LITERAL(14, 110, 4), // "data"
QT_MOC_LITERAL(15, 115, 8), // "ReadData"
QT_MOC_LITERAL(16, 124, 8) // "ReadLine"

    },
    "Device\0receivedMsg\0\0idName\0infoReady\0"
    "infoJson\0Run\0Connect\0Disconnect\0Delay\0"
    "msec\0GetResponse\0timeout\0WriteData\0"
    "data\0ReadData\0ReadLine"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Device[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   69,    2, 0x06 /* Public */,
       4,    1,   74,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   77,    2, 0x0a /* Public */,
       7,    0,   78,    2, 0x0a /* Public */,
       8,    0,   79,    2, 0x0a /* Public */,
       9,    1,   80,    2, 0x0a /* Public */,
      11,    1,   83,    2, 0x0a /* Public */,
      11,    0,   86,    2, 0x2a /* Public | MethodCloned */,
      13,    1,   87,    2, 0x0a /* Public */,
      15,    0,   90,    2, 0x0a /* Public */,
      16,    0,   91,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    3,    2,
    QMetaType::Void, QMetaType::QString,    5,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::QString, QMetaType::Int,   12,
    QMetaType::QString,
    QMetaType::Void, QMetaType::QString,   14,
    QMetaType::Void,
    QMetaType::QString,

       0        // eod
};

void Device::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Device *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->receivedMsg((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 1: _t->infoReady((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->Run(); break;
        case 3: _t->Connect(); break;
        case 4: _t->Disconnect(); break;
        case 5: _t->Delay((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: { QString _r = _t->GetResponse((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 7: { QString _r = _t->GetResponse();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 8: _t->WriteData((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 9: _t->ReadData(); break;
        case 10: { QString _r = _t->ReadLine();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Device::*)(QString , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Device::receivedMsg)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Device::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Device::infoReady)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Device::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_Device.data,
    qt_meta_data_Device,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Device::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Device::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Device.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Device::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void Device::receivedMsg(QString _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Device::infoReady(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

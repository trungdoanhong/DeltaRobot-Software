/****************************************************************************
** Meta object code from reading C++ file 'DeviceManager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../device/DeviceManager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DeviceManager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DeviceManager_t {
    QByteArrayData data[29];
    char stringdata0[297];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DeviceManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DeviceManager_t qt_meta_stringdata_DeviceManager = {
    {
QT_MOC_LITERAL(0, 0, 13), // "DeviceManager"
QT_MOC_LITERAL(1, 14, 18), // "GotEncoderPosition"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 2), // "id"
QT_MOC_LITERAL(4, 37, 8), // "position"
QT_MOC_LITERAL(5, 46, 18), // "DeviceNotAvailable"
QT_MOC_LITERAL(6, 65, 6), // "device"
QT_MOC_LITERAL(7, 72, 15), // "DeviceResponded"
QT_MOC_LITERAL(8, 88, 8), // "response"
QT_MOC_LITERAL(9, 97, 13), // "GotDeviceInfo"
QT_MOC_LITERAL(10, 111, 14), // "jsonDeviceInfo"
QT_MOC_LITERAL(11, 126, 3), // "Log"
QT_MOC_LITERAL(12, 130, 3), // "msg"
QT_MOC_LITERAL(13, 134, 9), // "direction"
QT_MOC_LITERAL(14, 144, 8), // "AddRobot"
QT_MOC_LITERAL(15, 153, 7), // "address"
QT_MOC_LITERAL(16, 161, 11), // "AddConveyor"
QT_MOC_LITERAL(17, 173, 10), // "AddEncoder"
QT_MOC_LITERAL(18, 184, 9), // "AddSlider"
QT_MOC_LITERAL(19, 194, 9), // "AddDevice"
QT_MOC_LITERAL(20, 204, 14), // "SetDeviceState"
QT_MOC_LITERAL(21, 219, 10), // "deviceName"
QT_MOC_LITERAL(22, 230, 6), // "isOpen"
QT_MOC_LITERAL(23, 237, 17), // "RequestDeviceInfo"
QT_MOC_LITERAL(24, 255, 10), // "deviceType"
QT_MOC_LITERAL(25, 266, 9), // "SendGcode"
QT_MOC_LITERAL(26, 276, 5), // "gcode"
QT_MOC_LITERAL(27, 282, 10), // "GetCommand"
QT_MOC_LITERAL(28, 293, 3) // "cmd"

    },
    "DeviceManager\0GotEncoderPosition\0\0id\0"
    "position\0DeviceNotAvailable\0device\0"
    "DeviceResponded\0response\0GotDeviceInfo\0"
    "jsonDeviceInfo\0Log\0msg\0direction\0"
    "AddRobot\0address\0AddConveyor\0AddEncoder\0"
    "AddSlider\0AddDevice\0SetDeviceState\0"
    "deviceName\0isOpen\0RequestDeviceInfo\0"
    "deviceType\0SendGcode\0gcode\0GetCommand\0"
    "cmd"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DeviceManager[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   89,    2, 0x06 /* Public */,
       5,    1,   94,    2, 0x06 /* Public */,
       7,    2,   97,    2, 0x06 /* Public */,
       9,    1,  102,    2, 0x06 /* Public */,
      11,    3,  105,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      14,    1,  112,    2, 0x0a /* Public */,
      16,    1,  115,    2, 0x0a /* Public */,
      17,    1,  118,    2, 0x0a /* Public */,
      18,    1,  121,    2, 0x0a /* Public */,
      19,    1,  124,    2, 0x0a /* Public */,
      20,    3,  127,    2, 0x0a /* Public */,
      23,    1,  134,    2, 0x0a /* Public */,
      25,    2,  137,    2, 0x0a /* Public */,
      25,    2,  142,    2, 0x0a /* Public */,
      27,    1,  147,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Float,    3,    4,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    3,    8,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::Int,    6,   12,   13,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,   15,
    QMetaType::Void, QMetaType::QString,   15,
    QMetaType::Void, QMetaType::QString,   15,
    QMetaType::Void, QMetaType::QString,   15,
    QMetaType::Void, QMetaType::QString,   15,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool, QMetaType::QString,   21,   22,   15,
    QMetaType::Void, QMetaType::Int,   24,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,   24,   26,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   21,   26,
    QMetaType::Void, QMetaType::QString,   28,

       0        // eod
};

void DeviceManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DeviceManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->GotEncoderPosition((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 1: _t->DeviceNotAvailable((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->DeviceResponded((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 3: _t->GotDeviceInfo((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->Log((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 5: _t->AddRobot((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->AddConveyor((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: _t->AddEncoder((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 8: _t->AddSlider((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 9: _t->AddDevice((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 10: _t->SetDeviceState((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 11: _t->RequestDeviceInfo((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->SendGcode((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 13: _t->SendGcode((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 14: _t->GetCommand((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DeviceManager::*)(int , float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeviceManager::GotEncoderPosition)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (DeviceManager::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeviceManager::DeviceNotAvailable)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (DeviceManager::*)(QString , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeviceManager::DeviceResponded)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (DeviceManager::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeviceManager::GotDeviceInfo)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (DeviceManager::*)(QString , QString , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeviceManager::Log)) {
                *result = 4;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject DeviceManager::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_DeviceManager.data,
    qt_meta_data_DeviceManager,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DeviceManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DeviceManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DeviceManager.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int DeviceManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
    return _id;
}

// SIGNAL 0
void DeviceManager::GotEncoderPosition(int _t1, float _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void DeviceManager::DeviceNotAvailable(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void DeviceManager::DeviceResponded(QString _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void DeviceManager::GotDeviceInfo(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void DeviceManager::Log(QString _t1, QString _t2, int _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

/****************************************************************************
** Meta object code from reading C++ file 'robot.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../device/robot.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'robot.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Robot_t {
    QByteArrayData data[33];
    char stringdata0[180];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Robot_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Robot_t qt_meta_stringdata_Robot = {
    {
QT_MOC_LITERAL(0, 0, 5), // "Robot"
QT_MOC_LITERAL(1, 6, 3), // "Log"
QT_MOC_LITERAL(2, 10, 0), // ""
QT_MOC_LITERAL(3, 11, 6), // "device"
QT_MOC_LITERAL(4, 18, 3), // "msg"
QT_MOC_LITERAL(5, 22, 9), // "direction"
QT_MOC_LITERAL(6, 32, 9), // "SendGcode"
QT_MOC_LITERAL(7, 42, 5), // "gcode"
QT_MOC_LITERAL(8, 48, 7), // "is_wait"
QT_MOC_LITERAL(9, 56, 8), // "time_out"
QT_MOC_LITERAL(10, 65, 15), // "ProcessResponse"
QT_MOC_LITERAL(11, 81, 2), // "id"
QT_MOC_LITERAL(12, 84, 8), // "response"
QT_MOC_LITERAL(13, 93, 5), // "Sleep"
QT_MOC_LITERAL(14, 99, 7), // "time_ms"
QT_MOC_LITERAL(15, 107, 4), // "sync"
QT_MOC_LITERAL(16, 112, 6), // "GoHome"
QT_MOC_LITERAL(17, 119, 4), // "Move"
QT_MOC_LITERAL(18, 124, 1), // "x"
QT_MOC_LITERAL(19, 126, 1), // "y"
QT_MOC_LITERAL(20, 128, 1), // "z"
QT_MOC_LITERAL(21, 130, 1), // "w"
QT_MOC_LITERAL(22, 132, 1), // "u"
QT_MOC_LITERAL(23, 134, 1), // "v"
QT_MOC_LITERAL(24, 136, 1), // "f"
QT_MOC_LITERAL(25, 138, 1), // "a"
QT_MOC_LITERAL(26, 140, 1), // "s"
QT_MOC_LITERAL(27, 142, 1), // "e"
QT_MOC_LITERAL(28, 144, 1), // "j"
QT_MOC_LITERAL(29, 146, 11), // "time_offset"
QT_MOC_LITERAL(30, 158, 8), // "MoveStep"
QT_MOC_LITERAL(31, 167, 4), // "step"
QT_MOC_LITERAL(32, 172, 7) // "GetInfo"

    },
    "Robot\0Log\0\0device\0msg\0direction\0"
    "SendGcode\0gcode\0is_wait\0time_out\0"
    "ProcessResponse\0id\0response\0Sleep\0"
    "time_ms\0sync\0GoHome\0Move\0x\0y\0z\0w\0u\0v\0"
    "f\0a\0s\0e\0j\0time_offset\0MoveStep\0step\0"
    "GetInfo"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Robot[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      25,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,  139,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    3,  146,    2, 0x0a /* Public */,
       6,    2,  153,    2, 0x2a /* Public | MethodCloned */,
       6,    1,  158,    2, 0x2a /* Public | MethodCloned */,
       6,    0,  161,    2, 0x2a /* Public | MethodCloned */,
      10,    2,  162,    2, 0x0a /* Public */,
      10,    1,  167,    2, 0x2a /* Public | MethodCloned */,
      13,    2,  170,    2, 0x0a /* Public */,
      16,    0,  175,    2, 0x0a /* Public */,
      17,   13,  176,    2, 0x0a /* Public */,
      17,   12,  203,    2, 0x2a /* Public | MethodCloned */,
      17,   11,  228,    2, 0x2a /* Public | MethodCloned */,
      17,   10,  251,    2, 0x2a /* Public | MethodCloned */,
      17,    9,  272,    2, 0x2a /* Public | MethodCloned */,
      17,    8,  291,    2, 0x2a /* Public | MethodCloned */,
      17,    7,  308,    2, 0x2a /* Public | MethodCloned */,
      17,    6,  323,    2, 0x2a /* Public | MethodCloned */,
      17,    5,  336,    2, 0x2a /* Public | MethodCloned */,
      17,    4,  347,    2, 0x2a /* Public | MethodCloned */,
      17,    3,  356,    2, 0x2a /* Public | MethodCloned */,
      17,    2,  363,    2, 0x2a /* Public | MethodCloned */,
      17,    1,  368,    2, 0x2a /* Public | MethodCloned */,
      17,    0,  371,    2, 0x2a /* Public | MethodCloned */,
      30,    2,  372,    2, 0x0a /* Public */,
      32,    0,  377,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::Int,    3,    4,    5,

 // slots: parameters
    QMetaType::QString, QMetaType::QString, QMetaType::Bool, QMetaType::Int,    7,    8,    9,
    QMetaType::QString, QMetaType::QString, QMetaType::Bool,    7,    8,
    QMetaType::QString, QMetaType::QString,    7,
    QMetaType::QString,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   11,   12,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void, QMetaType::Int, QMetaType::Bool,   14,   15,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Bool, QMetaType::Float,   18,   19,   20,   21,   22,   23,   24,   25,   26,   27,   28,   15,   29,
    QMetaType::Void, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Bool,   18,   19,   20,   21,   22,   23,   24,   25,   26,   27,   28,   15,
    QMetaType::Void, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float,   18,   19,   20,   21,   22,   23,   24,   25,   26,   27,   28,
    QMetaType::Void, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float,   18,   19,   20,   21,   22,   23,   24,   25,   26,   27,
    QMetaType::Void, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float,   18,   19,   20,   21,   22,   23,   24,   25,   26,
    QMetaType::Void, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float,   18,   19,   20,   21,   22,   23,   24,   25,
    QMetaType::Void, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float,   18,   19,   20,   21,   22,   23,   24,
    QMetaType::Void, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float,   18,   19,   20,   21,   22,   23,
    QMetaType::Void, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float,   18,   19,   20,   21,   22,
    QMetaType::Void, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float,   18,   19,   20,   21,
    QMetaType::Void, QMetaType::Float, QMetaType::Float, QMetaType::Float,   18,   19,   20,
    QMetaType::Void, QMetaType::Float, QMetaType::Float,   18,   19,
    QMetaType::Void, QMetaType::Float,   18,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::Float,    5,   31,
    QMetaType::QString,

       0        // eod
};

void Robot::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Robot *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->Log((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 1: { QString _r = _t->SendGcode((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 2: { QString _r = _t->SendGcode((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 3: { QString _r = _t->SendGcode((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 4: { QString _r = _t->SendGcode();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 5: _t->ProcessResponse((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 6: _t->ProcessResponse((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: _t->Sleep((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 8: _t->GoHome(); break;
        case 9: _t->Move((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4])),(*reinterpret_cast< float(*)>(_a[5])),(*reinterpret_cast< float(*)>(_a[6])),(*reinterpret_cast< float(*)>(_a[7])),(*reinterpret_cast< float(*)>(_a[8])),(*reinterpret_cast< float(*)>(_a[9])),(*reinterpret_cast< float(*)>(_a[10])),(*reinterpret_cast< float(*)>(_a[11])),(*reinterpret_cast< bool(*)>(_a[12])),(*reinterpret_cast< float(*)>(_a[13]))); break;
        case 10: _t->Move((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4])),(*reinterpret_cast< float(*)>(_a[5])),(*reinterpret_cast< float(*)>(_a[6])),(*reinterpret_cast< float(*)>(_a[7])),(*reinterpret_cast< float(*)>(_a[8])),(*reinterpret_cast< float(*)>(_a[9])),(*reinterpret_cast< float(*)>(_a[10])),(*reinterpret_cast< float(*)>(_a[11])),(*reinterpret_cast< bool(*)>(_a[12]))); break;
        case 11: _t->Move((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4])),(*reinterpret_cast< float(*)>(_a[5])),(*reinterpret_cast< float(*)>(_a[6])),(*reinterpret_cast< float(*)>(_a[7])),(*reinterpret_cast< float(*)>(_a[8])),(*reinterpret_cast< float(*)>(_a[9])),(*reinterpret_cast< float(*)>(_a[10])),(*reinterpret_cast< float(*)>(_a[11]))); break;
        case 12: _t->Move((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4])),(*reinterpret_cast< float(*)>(_a[5])),(*reinterpret_cast< float(*)>(_a[6])),(*reinterpret_cast< float(*)>(_a[7])),(*reinterpret_cast< float(*)>(_a[8])),(*reinterpret_cast< float(*)>(_a[9])),(*reinterpret_cast< float(*)>(_a[10]))); break;
        case 13: _t->Move((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4])),(*reinterpret_cast< float(*)>(_a[5])),(*reinterpret_cast< float(*)>(_a[6])),(*reinterpret_cast< float(*)>(_a[7])),(*reinterpret_cast< float(*)>(_a[8])),(*reinterpret_cast< float(*)>(_a[9]))); break;
        case 14: _t->Move((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4])),(*reinterpret_cast< float(*)>(_a[5])),(*reinterpret_cast< float(*)>(_a[6])),(*reinterpret_cast< float(*)>(_a[7])),(*reinterpret_cast< float(*)>(_a[8]))); break;
        case 15: _t->Move((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4])),(*reinterpret_cast< float(*)>(_a[5])),(*reinterpret_cast< float(*)>(_a[6])),(*reinterpret_cast< float(*)>(_a[7]))); break;
        case 16: _t->Move((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4])),(*reinterpret_cast< float(*)>(_a[5])),(*reinterpret_cast< float(*)>(_a[6]))); break;
        case 17: _t->Move((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4])),(*reinterpret_cast< float(*)>(_a[5]))); break;
        case 18: _t->Move((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4]))); break;
        case 19: _t->Move((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3]))); break;
        case 20: _t->Move((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 21: _t->Move((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 22: _t->Move(); break;
        case 23: _t->MoveStep((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 24: { QString _r = _t->GetInfo();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Robot::*)(QString , QString , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Robot::Log)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Robot::staticMetaObject = { {
    QMetaObject::SuperData::link<Device::staticMetaObject>(),
    qt_meta_stringdata_Robot.data,
    qt_meta_data_Robot,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Robot::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Robot::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Robot.stringdata0))
        return static_cast<void*>(this);
    return Device::qt_metacast(_clname);
}

int Robot::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Device::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 25)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 25;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 25)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 25;
    }
    return _id;
}

// SIGNAL 0
void Robot::Log(QString _t1, QString _t2, int _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

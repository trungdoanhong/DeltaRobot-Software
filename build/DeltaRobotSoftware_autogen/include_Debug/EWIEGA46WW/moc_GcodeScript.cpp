/****************************************************************************
** Meta object code from reading C++ file 'GcodeScript.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../GcodeScript.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'GcodeScript.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_GcodeScript_t {
    QByteArrayData data[59];
    char stringdata0[570];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GcodeScript_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GcodeScript_t qt_meta_stringdata_GcodeScript = {
    {
QT_MOC_LITERAL(0, 0, 11), // "GcodeScript"
QT_MOC_LITERAL(1, 12, 8), // "Finished"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 5), // "Moved"
QT_MOC_LITERAL(4, 28, 9), // "cursorPos"
QT_MOC_LITERAL(5, 38, 10), // "RobotMoved"
QT_MOC_LITERAL(6, 49, 1), // "x"
QT_MOC_LITERAL(7, 51, 1), // "y"
QT_MOC_LITERAL(8, 53, 1), // "z"
QT_MOC_LITERAL(9, 55, 1), // "w"
QT_MOC_LITERAL(10, 57, 1), // "u"
QT_MOC_LITERAL(11, 59, 1), // "v"
QT_MOC_LITERAL(12, 61, 1), // "f"
QT_MOC_LITERAL(13, 63, 1), // "a"
QT_MOC_LITERAL(14, 65, 1), // "s"
QT_MOC_LITERAL(15, 67, 1), // "e"
QT_MOC_LITERAL(16, 69, 5), // "gcode"
QT_MOC_LITERAL(17, 75, 16), // "DeleteAllObjects"
QT_MOC_LITERAL(18, 92, 8), // "listName"
QT_MOC_LITERAL(19, 101, 12), // "DeleteObject"
QT_MOC_LITERAL(20, 114, 2), // "id"
QT_MOC_LITERAL(21, 117, 11), // "PauseCamera"
QT_MOC_LITERAL(22, 129, 13), // "CaptureCamera"
QT_MOC_LITERAL(23, 143, 12), // "ResumeCamera"
QT_MOC_LITERAL(24, 156, 21), // "UpdateTrackingRequest"
QT_MOC_LITERAL(25, 178, 17), // "GetObjectsRequest"
QT_MOC_LITERAL(26, 196, 10), // "trackingID"
QT_MOC_LITERAL(27, 207, 14), // "inAreaListName"
QT_MOC_LITERAL(28, 222, 3), // "min"
QT_MOC_LITERAL(29, 226, 3), // "max"
QT_MOC_LITERAL(30, 230, 12), // "isXDirection"
QT_MOC_LITERAL(31, 243, 23), // "CaptureAndDetectRequest"
QT_MOC_LITERAL(32, 267, 17), // "SendGcodeToDevice"
QT_MOC_LITERAL(33, 285, 10), // "deviceName"
QT_MOC_LITERAL(34, 296, 12), // "SendToDevice"
QT_MOC_LITERAL(35, 309, 13), // "CatchVariable"
QT_MOC_LITERAL(36, 323, 3), // "key"
QT_MOC_LITERAL(37, 327, 5), // "value"
QT_MOC_LITERAL(38, 333, 14), // "CatchVariable2"
QT_MOC_LITERAL(39, 348, 22), // "ChangeExternalVariable"
QT_MOC_LITERAL(40, 371, 3), // "cmd"
QT_MOC_LITERAL(41, 375, 9), // "AddObject"
QT_MOC_LITERAL(42, 385, 18), // "QList<QStringList>"
QT_MOC_LITERAL(43, 404, 4), // "list"
QT_MOC_LITERAL(44, 409, 12), // "ExecuteGcode"
QT_MOC_LITERAL(45, 422, 6), // "gcodes"
QT_MOC_LITERAL(46, 429, 8), // "position"
QT_MOC_LITERAL(47, 438, 9), // "functions"
QT_MOC_LITERAL(48, 448, 11), // "GetResponse"
QT_MOC_LITERAL(49, 460, 8), // "deviceId"
QT_MOC_LITERAL(50, 469, 8), // "response"
QT_MOC_LITERAL(51, 478, 15), // "SendMsgToDevice"
QT_MOC_LITERAL(52, 494, 3), // "msg"
QT_MOC_LITERAL(53, 498, 17), // "TransmitNextGcode"
QT_MOC_LITERAL(54, 516, 15), // "ExecuteFunction"
QT_MOC_LITERAL(55, 532, 12), // "functionName"
QT_MOC_LITERAL(56, 545, 5), // "paras"
QT_MOC_LITERAL(57, 551, 4), // "Stop"
QT_MOC_LITERAL(58, 556, 13) // "ReceivedGcode"

    },
    "GcodeScript\0Finished\0\0Moved\0cursorPos\0"
    "RobotMoved\0x\0y\0z\0w\0u\0v\0f\0a\0s\0e\0gcode\0"
    "DeleteAllObjects\0listName\0DeleteObject\0"
    "id\0PauseCamera\0CaptureCamera\0ResumeCamera\0"
    "UpdateTrackingRequest\0GetObjectsRequest\0"
    "trackingID\0inAreaListName\0min\0max\0"
    "isXDirection\0CaptureAndDetectRequest\0"
    "SendGcodeToDevice\0deviceName\0SendToDevice\0"
    "CatchVariable\0key\0value\0CatchVariable2\0"
    "ChangeExternalVariable\0cmd\0AddObject\0"
    "QList<QStringList>\0list\0ExecuteGcode\0"
    "gcodes\0position\0functions\0GetResponse\0"
    "deviceId\0response\0SendMsgToDevice\0msg\0"
    "TransmitNextGcode\0ExecuteFunction\0"
    "functionName\0paras\0Stop\0ReceivedGcode"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GcodeScript[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      27,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      19,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  149,    2, 0x06 /* Public */,
       3,    1,  150,    2, 0x06 /* Public */,
       5,   10,  153,    2, 0x06 /* Public */,
       5,    1,  174,    2, 0x06 /* Public */,
      17,    0,  177,    2, 0x06 /* Public */,
      17,    1,  178,    2, 0x06 /* Public */,
      19,    1,  181,    2, 0x06 /* Public */,
      21,    0,  184,    2, 0x06 /* Public */,
      22,    0,  185,    2, 0x06 /* Public */,
      23,    0,  186,    2, 0x06 /* Public */,
      24,    1,  187,    2, 0x06 /* Public */,
      25,    5,  190,    2, 0x06 /* Public */,
      31,    0,  201,    2, 0x06 /* Public */,
      32,    2,  202,    2, 0x06 /* Public */,
      34,    2,  207,    2, 0x06 /* Public */,
      35,    2,  212,    2, 0x06 /* Public */,
      38,    2,  217,    2, 0x06 /* Public */,
      39,    1,  222,    2, 0x06 /* Public */,
      41,    2,  225,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      44,    3,  230,    2, 0x0a /* Public */,
      44,    2,  237,    2, 0x2a /* Public | MethodCloned */,
      48,    2,  242,    2, 0x0a /* Public */,
      51,    2,  247,    2, 0x0a /* Public */,
      53,    0,  252,    2, 0x0a /* Public */,
      54,    2,  253,    2, 0x0a /* Public */,
      57,    0,  258,    2, 0x0a /* Public */,
      58,    1,  259,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float,    6,    7,    8,    9,   10,   11,   12,   13,   14,   15,
    QMetaType::Void, QMetaType::QString,   16,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   18,
    QMetaType::Void, QMetaType::Int,   20,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   20,
    QMetaType::Void, QMetaType::Int, QMetaType::QString, QMetaType::Float, QMetaType::Float, QMetaType::Bool,   26,   27,   28,   29,   30,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   33,   16,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   33,   16,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   36,   37,
    QMetaType::Void, QMetaType::QString, QMetaType::QVariant,   36,   37,
    QMetaType::Void, QMetaType::QString,   40,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 42,   18,   43,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::Int, QMetaType::QString,   45,   46,   47,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,   45,   46,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   49,   50,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   49,   52,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QStringList,   55,   56,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   16,

       0        // eod
};

void GcodeScript::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GcodeScript *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->Finished(); break;
        case 1: _t->Moved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->RobotMoved((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4])),(*reinterpret_cast< float(*)>(_a[5])),(*reinterpret_cast< float(*)>(_a[6])),(*reinterpret_cast< float(*)>(_a[7])),(*reinterpret_cast< float(*)>(_a[8])),(*reinterpret_cast< float(*)>(_a[9])),(*reinterpret_cast< float(*)>(_a[10]))); break;
        case 3: _t->RobotMoved((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->DeleteAllObjects(); break;
        case 5: _t->DeleteAllObjects((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->DeleteObject((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->PauseCamera(); break;
        case 8: _t->CaptureCamera(); break;
        case 9: _t->ResumeCamera(); break;
        case 10: _t->UpdateTrackingRequest((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->GetObjectsRequest((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4])),(*reinterpret_cast< bool(*)>(_a[5]))); break;
        case 12: _t->CaptureAndDetectRequest(); break;
        case 13: _t->SendGcodeToDevice((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 14: _t->SendToDevice((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 15: _t->CatchVariable((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 16: _t->CatchVariable2((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QVariant(*)>(_a[2]))); break;
        case 17: _t->ChangeExternalVariable((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 18: _t->AddObject((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QList<QStringList>(*)>(_a[2]))); break;
        case 19: _t->ExecuteGcode((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 20: _t->ExecuteGcode((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 21: _t->GetResponse((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 22: _t->SendMsgToDevice((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 23: _t->TransmitNextGcode(); break;
        case 24: _t->ExecuteFunction((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QStringList(*)>(_a[2]))); break;
        case 25: _t->Stop(); break;
        case 26: _t->ReceivedGcode((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 18:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QStringList> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (GcodeScript::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GcodeScript::Finished)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (GcodeScript::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GcodeScript::Moved)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (GcodeScript::*)(float , float , float , float , float , float , float , float , float , float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GcodeScript::RobotMoved)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (GcodeScript::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GcodeScript::RobotMoved)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (GcodeScript::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GcodeScript::DeleteAllObjects)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (GcodeScript::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GcodeScript::DeleteAllObjects)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (GcodeScript::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GcodeScript::DeleteObject)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (GcodeScript::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GcodeScript::PauseCamera)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (GcodeScript::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GcodeScript::CaptureCamera)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (GcodeScript::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GcodeScript::ResumeCamera)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (GcodeScript::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GcodeScript::UpdateTrackingRequest)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (GcodeScript::*)(int , QString , float , float , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GcodeScript::GetObjectsRequest)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (GcodeScript::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GcodeScript::CaptureAndDetectRequest)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (GcodeScript::*)(QString , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GcodeScript::SendGcodeToDevice)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (GcodeScript::*)(QString , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GcodeScript::SendToDevice)) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (GcodeScript::*)(QString , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GcodeScript::CatchVariable)) {
                *result = 15;
                return;
            }
        }
        {
            using _t = void (GcodeScript::*)(QString , QVariant );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GcodeScript::CatchVariable2)) {
                *result = 16;
                return;
            }
        }
        {
            using _t = void (GcodeScript::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GcodeScript::ChangeExternalVariable)) {
                *result = 17;
                return;
            }
        }
        {
            using _t = void (GcodeScript::*)(QString , QList<QStringList> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GcodeScript::AddObject)) {
                *result = 18;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject GcodeScript::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_GcodeScript.data,
    qt_meta_data_GcodeScript,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *GcodeScript::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GcodeScript::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GcodeScript.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int GcodeScript::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 27)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 27;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 27)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 27;
    }
    return _id;
}

// SIGNAL 0
void GcodeScript::Finished()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void GcodeScript::Moved(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void GcodeScript::RobotMoved(float _t1, float _t2, float _t3, float _t4, float _t5, float _t6, float _t7, float _t8, float _t9, float _t10)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t5))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t6))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t7))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t8))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t9))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t10))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void GcodeScript::RobotMoved(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void GcodeScript::DeleteAllObjects()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void GcodeScript::DeleteAllObjects(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void GcodeScript::DeleteObject(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void GcodeScript::PauseCamera()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void GcodeScript::CaptureCamera()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void GcodeScript::ResumeCamera()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void GcodeScript::UpdateTrackingRequest(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void GcodeScript::GetObjectsRequest(int _t1, QString _t2, float _t3, float _t4, bool _t5)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t5))) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void GcodeScript::CaptureAndDetectRequest()
{
    QMetaObject::activate(this, &staticMetaObject, 12, nullptr);
}

// SIGNAL 13
void GcodeScript::SendGcodeToDevice(QString _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void GcodeScript::SendToDevice(QString _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void GcodeScript::CatchVariable(QString _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void GcodeScript::CatchVariable2(QString _t1, QVariant _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void GcodeScript::ChangeExternalVariable(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void GcodeScript::AddObject(QString _t1, QList<QStringList> _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

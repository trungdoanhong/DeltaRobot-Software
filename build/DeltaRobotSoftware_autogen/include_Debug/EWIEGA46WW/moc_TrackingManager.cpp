/****************************************************************************
** Meta object code from reading C++ file 'TrackingManager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../TrackingManager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TrackingManager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_VirtualEncoder_t {
    QByteArrayData data[9];
    char stringdata0[85];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_VirtualEncoder_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_VirtualEncoder_t qt_meta_stringdata_VirtualEncoder = {
    {
QT_MOC_LITERAL(0, 0, 14), // "VirtualEncoder"
QT_MOC_LITERAL(1, 15, 15), // "positionUpdated"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 11), // "newPosition"
QT_MOC_LITERAL(4, 44, 4), // "stop"
QT_MOC_LITERAL(5, 49, 5), // "start"
QT_MOC_LITERAL(6, 55, 8), // "interval"
QT_MOC_LITERAL(7, 64, 5), // "reset"
QT_MOC_LITERAL(8, 70, 14) // "updatePosition"

    },
    "VirtualEncoder\0positionUpdated\0\0"
    "newPosition\0stop\0start\0interval\0reset\0"
    "updatePosition"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_VirtualEncoder[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   47,    2, 0x0a /* Public */,
       5,    1,   48,    2, 0x0a /* Public */,
       5,    0,   51,    2, 0x2a /* Public | MethodCloned */,
       7,    0,   52,    2, 0x0a /* Public */,
       8,    0,   53,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Float,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void VirtualEncoder::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<VirtualEncoder *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->positionUpdated((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 1: _t->stop(); break;
        case 2: _t->start((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->start(); break;
        case 4: _t->reset(); break;
        case 5: _t->updatePosition(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (VirtualEncoder::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VirtualEncoder::positionUpdated)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject VirtualEncoder::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_VirtualEncoder.data,
    qt_meta_data_VirtualEncoder,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *VirtualEncoder::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VirtualEncoder::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_VirtualEncoder.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int VirtualEncoder::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void VirtualEncoder::positionUpdated(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_Tracking_t {
    QByteArrayData data[37];
    char stringdata0[515];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Tracking_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Tracking_t qt_meta_stringdata_Tracking = {
    {
QT_MOC_LITERAL(0, 0, 8), // "Tracking"
QT_MOC_LITERAL(1, 9, 13), // "DistanceMoved"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 6), // "offset"
QT_MOC_LITERAL(4, 31, 16), // "TestPointUpdated"
QT_MOC_LITERAL(5, 48, 15), // "testPointOffset"
QT_MOC_LITERAL(6, 64, 16), // "SendGcodeRequest"
QT_MOC_LITERAL(7, 81, 10), // "deviceName"
QT_MOC_LITERAL(8, 92, 5), // "gcode"
QT_MOC_LITERAL(9, 98, 18), // "UpdateTrackingDone"
QT_MOC_LITERAL(10, 117, 9), // "UpdateVar"
QT_MOC_LITERAL(11, 127, 4), // "name"
QT_MOC_LITERAL(12, 132, 5), // "value"
QT_MOC_LITERAL(13, 138, 25), // "OnReceivceEncoderPosition"
QT_MOC_LITERAL(14, 164, 16), // "ChangeObjectInfo"
QT_MOC_LITERAL(15, 181, 3), // "cmd"
QT_MOC_LITERAL(16, 185, 25), // "GetVirtualEncoderPosition"
QT_MOC_LITERAL(17, 211, 11), // "ReadEncoder"
QT_MOC_LITERAL(18, 223, 17), // "SetEncoderReverse"
QT_MOC_LITERAL(19, 241, 9), // "isReverse"
QT_MOC_LITERAL(20, 251, 19), // "SaveCapturePosition"
QT_MOC_LITERAL(21, 271, 18), // "SaveDetectPosition"
QT_MOC_LITERAL(22, 290, 20), // "UpdateTrackedObjects"
QT_MOC_LITERAL(23, 311, 19), // "QVector<ObjectInfo>"
QT_MOC_LITERAL(24, 331, 15), // "detectedObjects"
QT_MOC_LITERAL(25, 347, 14), // "objectListName"
QT_MOC_LITERAL(26, 362, 26), // "UpdateTrackedObjectOffsets"
QT_MOC_LITERAL(27, 389, 16), // "GetObjectsInArea"
QT_MOC_LITERAL(28, 406, 14), // "inAreaListName"
QT_MOC_LITERAL(29, 421, 3), // "min"
QT_MOC_LITERAL(30, 425, 3), // "max"
QT_MOC_LITERAL(31, 429, 12), // "isXDirection"
QT_MOC_LITERAL(32, 442, 15), // "updatePositions"
QT_MOC_LITERAL(33, 458, 12), // "displacement"
QT_MOC_LITERAL(34, 471, 19), // "ClearTrackedObjects"
QT_MOC_LITERAL(35, 491, 20), // "RemoveTrackedObjects"
QT_MOC_LITERAL(36, 512, 2) // "id"

    },
    "Tracking\0DistanceMoved\0\0offset\0"
    "TestPointUpdated\0testPointOffset\0"
    "SendGcodeRequest\0deviceName\0gcode\0"
    "UpdateTrackingDone\0UpdateVar\0name\0"
    "value\0OnReceivceEncoderPosition\0"
    "ChangeObjectInfo\0cmd\0GetVirtualEncoderPosition\0"
    "ReadEncoder\0SetEncoderReverse\0isReverse\0"
    "SaveCapturePosition\0SaveDetectPosition\0"
    "UpdateTrackedObjects\0QVector<ObjectInfo>\0"
    "detectedObjects\0objectListName\0"
    "UpdateTrackedObjectOffsets\0GetObjectsInArea\0"
    "inAreaListName\0min\0max\0isXDirection\0"
    "updatePositions\0displacement\0"
    "ClearTrackedObjects\0RemoveTrackedObjects\0"
    "id"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Tracking[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      19,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  109,    2, 0x06 /* Public */,
       4,    1,  112,    2, 0x06 /* Public */,
       6,    2,  115,    2, 0x06 /* Public */,
       9,    0,  120,    2, 0x06 /* Public */,
      10,    2,  121,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      13,    1,  126,    2, 0x0a /* Public */,
      14,    1,  129,    2, 0x0a /* Public */,
      16,    0,  132,    2, 0x0a /* Public */,
      17,    0,  133,    2, 0x0a /* Public */,
      18,    1,  134,    2, 0x0a /* Public */,
      20,    0,  137,    2, 0x0a /* Public */,
      21,    0,  138,    2, 0x0a /* Public */,
      22,    2,  139,    2, 0x0a /* Public */,
      26,    1,  144,    2, 0x0a /* Public */,
      27,    4,  147,    2, 0x0a /* Public */,
      27,    3,  156,    2, 0x2a /* Public | MethodCloned */,
      32,    1,  163,    2, 0x0a /* Public */,
      34,    0,  166,    2, 0x0a /* Public */,
      35,    1,  167,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QPointF,    3,
    QMetaType::Void, QMetaType::QVector3D,    5,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    7,    8,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QVariant,   11,   12,

 // slots: parameters
    QMetaType::Void, QMetaType::Float,   12,
    QMetaType::Void, QMetaType::QString,   15,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   19,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 23, QMetaType::QString,   24,   25,
    QMetaType::Void, QMetaType::QVector3D,    3,
    QMetaType::Void, QMetaType::QString, QMetaType::Float, QMetaType::Float, QMetaType::Bool,   28,   29,   30,   31,
    QMetaType::Void, QMetaType::QString, QMetaType::Float, QMetaType::Float,   28,   29,   30,
    QMetaType::Void, QMetaType::Double,   33,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   36,

       0        // eod
};

void Tracking::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Tracking *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->DistanceMoved((*reinterpret_cast< QPointF(*)>(_a[1]))); break;
        case 1: _t->TestPointUpdated((*reinterpret_cast< QVector3D(*)>(_a[1]))); break;
        case 2: _t->SendGcodeRequest((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 3: _t->UpdateTrackingDone(); break;
        case 4: _t->UpdateVar((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QVariant(*)>(_a[2]))); break;
        case 5: _t->OnReceivceEncoderPosition((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 6: _t->ChangeObjectInfo((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: _t->GetVirtualEncoderPosition(); break;
        case 8: _t->ReadEncoder(); break;
        case 9: _t->SetEncoderReverse((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->SaveCapturePosition(); break;
        case 11: _t->SaveDetectPosition(); break;
        case 12: _t->UpdateTrackedObjects((*reinterpret_cast< QVector<ObjectInfo>(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 13: _t->UpdateTrackedObjectOffsets((*reinterpret_cast< QVector3D(*)>(_a[1]))); break;
        case 14: _t->GetObjectsInArea((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4]))); break;
        case 15: _t->GetObjectsInArea((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3]))); break;
        case 16: _t->updatePositions((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 17: _t->ClearTrackedObjects(); break;
        case 18: _t->RemoveTrackedObjects((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Tracking::*)(QPointF );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Tracking::DistanceMoved)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Tracking::*)(QVector3D );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Tracking::TestPointUpdated)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Tracking::*)(QString , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Tracking::SendGcodeRequest)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Tracking::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Tracking::UpdateTrackingDone)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (Tracking::*)(QString , QVariant );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Tracking::UpdateVar)) {
                *result = 4;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Tracking::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_Tracking.data,
    qt_meta_data_Tracking,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Tracking::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Tracking::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Tracking.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Tracking::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 19)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 19;
    }
    return _id;
}

// SIGNAL 0
void Tracking::DistanceMoved(QPointF _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Tracking::TestPointUpdated(QVector3D _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Tracking::SendGcodeRequest(QString _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Tracking::UpdateTrackingDone()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void Tracking::UpdateVar(QString _t1, QVariant _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
struct qt_meta_stringdata_TrackingManager_t {
    QByteArrayData data[26];
    char stringdata0[317];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TrackingManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TrackingManager_t qt_meta_stringdata_TrackingManager = {
    {
QT_MOC_LITERAL(0, 0, 15), // "TrackingManager"
QT_MOC_LITERAL(1, 16, 11), // "GotResponse"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 8), // "deviceId"
QT_MOC_LITERAL(4, 38, 8), // "response"
QT_MOC_LITERAL(5, 47, 19), // "SaveCapturePosition"
QT_MOC_LITERAL(6, 67, 2), // "id"
QT_MOC_LITERAL(7, 70, 18), // "SaveDetectPosition"
QT_MOC_LITERAL(8, 89, 14), // "UpdateTracking"
QT_MOC_LITERAL(9, 104, 16), // "GetObjectsInArea"
QT_MOC_LITERAL(10, 121, 10), // "trackingID"
QT_MOC_LITERAL(11, 132, 14), // "inAreaListName"
QT_MOC_LITERAL(12, 147, 3), // "min"
QT_MOC_LITERAL(13, 151, 3), // "max"
QT_MOC_LITERAL(14, 155, 12), // "isXDirection"
QT_MOC_LITERAL(15, 168, 14), // "UpdateVariable"
QT_MOC_LITERAL(16, 183, 3), // "cmd"
QT_MOC_LITERAL(17, 187, 9), // "AddObject"
QT_MOC_LITERAL(18, 197, 8), // "listName"
QT_MOC_LITERAL(19, 206, 18), // "QList<QStringList>"
QT_MOC_LITERAL(20, 225, 4), // "list"
QT_MOC_LITERAL(21, 230, 12), // "ClearObjects"
QT_MOC_LITERAL(22, 243, 18), // "SetEncoderPosition"
QT_MOC_LITERAL(23, 262, 5), // "value"
QT_MOC_LITERAL(24, 268, 27), // "ReadEncoderWhenSensorActive"
QT_MOC_LITERAL(25, 296, 20) // "OnDoneUpdateTracking"

    },
    "TrackingManager\0GotResponse\0\0deviceId\0"
    "response\0SaveCapturePosition\0id\0"
    "SaveDetectPosition\0UpdateTracking\0"
    "GetObjectsInArea\0trackingID\0inAreaListName\0"
    "min\0max\0isXDirection\0UpdateVariable\0"
    "cmd\0AddObject\0listName\0QList<QStringList>\0"
    "list\0ClearObjects\0SetEncoderPosition\0"
    "value\0ReadEncoderWhenSensorActive\0"
    "OnDoneUpdateTracking"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TrackingManager[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   74,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   79,    2, 0x0a /* Public */,
       7,    1,   82,    2, 0x0a /* Public */,
       8,    1,   85,    2, 0x0a /* Public */,
       9,    5,   88,    2, 0x0a /* Public */,
       9,    4,   99,    2, 0x2a /* Public | MethodCloned */,
      15,    1,  108,    2, 0x0a /* Public */,
      17,    2,  111,    2, 0x0a /* Public */,
      21,    1,  116,    2, 0x0a /* Public */,
      22,    2,  119,    2, 0x0a /* Public */,
      24,    1,  124,    2, 0x0a /* Public */,
      25,    0,  127,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    3,    4,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int, QMetaType::QString, QMetaType::Float, QMetaType::Float, QMetaType::Bool,   10,   11,   12,   13,   14,
    QMetaType::Void, QMetaType::Int, QMetaType::QString, QMetaType::Float, QMetaType::Float,   10,   11,   12,   13,
    QMetaType::Void, QMetaType::QString,   16,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 19,   18,   20,
    QMetaType::Void, QMetaType::QString,   18,
    QMetaType::Void, QMetaType::Int, QMetaType::Float,    6,   23,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void,

       0        // eod
};

void TrackingManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TrackingManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->GotResponse((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 1: _t->SaveCapturePosition((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->SaveDetectPosition((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->UpdateTracking((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->GetObjectsInArea((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4])),(*reinterpret_cast< bool(*)>(_a[5]))); break;
        case 5: _t->GetObjectsInArea((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4]))); break;
        case 6: _t->UpdateVariable((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: _t->AddObject((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QList<QStringList>(*)>(_a[2]))); break;
        case 8: _t->ClearObjects((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 9: _t->SetEncoderPosition((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 10: _t->ReadEncoderWhenSensorActive((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->OnDoneUpdateTracking(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 7:
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
            using _t = void (TrackingManager::*)(QString , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TrackingManager::GotResponse)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject TrackingManager::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_TrackingManager.data,
    qt_meta_data_TrackingManager,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TrackingManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TrackingManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TrackingManager.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int TrackingManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void TrackingManager::GotResponse(QString _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

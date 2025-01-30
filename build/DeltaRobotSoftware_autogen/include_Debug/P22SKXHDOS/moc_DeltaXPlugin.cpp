/****************************************************************************
** Meta object code from reading C++ file 'DeltaXPlugin.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../sdk/DeltaXPlugin.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DeltaXPlugin.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DeltaXPlugin_t {
    QByteArrayData data[11];
    char stringdata0[107];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DeltaXPlugin_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DeltaXPlugin_t qt_meta_stringdata_DeltaXPlugin = {
    {
QT_MOC_LITERAL(0, 0, 12), // "DeltaXPlugin"
QT_MOC_LITERAL(1, 13, 13), // "CapturedImage"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 7), // "cv::Mat"
QT_MOC_LITERAL(4, 36, 3), // "mat"
QT_MOC_LITERAL(5, 40, 14), // "StartedCapture"
QT_MOC_LITERAL(6, 55, 14), // "RequestCapture"
QT_MOC_LITERAL(7, 70, 14), // "RequestConnect"
QT_MOC_LITERAL(8, 85, 2), // "id"
QT_MOC_LITERAL(9, 88, 14), // "ProcessCommand"
QT_MOC_LITERAL(10, 103, 3) // "cmd"

    },
    "DeltaXPlugin\0CapturedImage\0\0cv::Mat\0"
    "mat\0StartedCapture\0RequestCapture\0"
    "RequestConnect\0id\0ProcessCommand\0cmd"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DeltaXPlugin[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,
       5,    0,   42,    2, 0x06 /* Public */,
       6,    0,   43,    2, 0x06 /* Public */,
       7,    1,   44,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    1,   47,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    8,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,   10,

       0        // eod
};

void DeltaXPlugin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DeltaXPlugin *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->CapturedImage((*reinterpret_cast< cv::Mat(*)>(_a[1]))); break;
        case 1: _t->StartedCapture(); break;
        case 2: _t->RequestCapture(); break;
        case 3: _t->RequestConnect((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->ProcessCommand((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DeltaXPlugin::*)(cv::Mat );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeltaXPlugin::CapturedImage)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (DeltaXPlugin::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeltaXPlugin::StartedCapture)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (DeltaXPlugin::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeltaXPlugin::RequestCapture)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (DeltaXPlugin::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeltaXPlugin::RequestConnect)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject DeltaXPlugin::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_DeltaXPlugin.data,
    qt_meta_data_DeltaXPlugin,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DeltaXPlugin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DeltaXPlugin::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DeltaXPlugin.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int DeltaXPlugin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

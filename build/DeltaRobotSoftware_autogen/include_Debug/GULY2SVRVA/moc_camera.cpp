/****************************************************************************
** Meta object code from reading C++ file 'camera.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../device/camera.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'camera.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Camera_t {
    QByteArrayData data[18];
    char stringdata0[202];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Camera_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Camera_t qt_meta_stringdata_Camera = {
    {
QT_MOC_LITERAL(0, 0, 6), // "Camera"
QT_MOC_LITERAL(1, 7, 14), // "StartedCapture"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 8), // "tracking"
QT_MOC_LITERAL(4, 32, 8), // "GotImage"
QT_MOC_LITERAL(5, 41, 7), // "cv::Mat"
QT_MOC_LITERAL(6, 49, 14), // "RequestCapture"
QT_MOC_LITERAL(7, 64, 17), // "StopCameraRequest"
QT_MOC_LITERAL(8, 82, 15), // "connectedResult"
QT_MOC_LITERAL(9, 98, 6), // "isOpen"
QT_MOC_LITERAL(10, 105, 10), // "OpenCamera"
QT_MOC_LITERAL(11, 116, 2), // "id"
QT_MOC_LITERAL(12, 119, 20), // "GetImageFromExternal"
QT_MOC_LITERAL(13, 140, 3), // "mat"
QT_MOC_LITERAL(14, 144, 14), // "GeneralCapture"
QT_MOC_LITERAL(15, 159, 13), // "CaptureWebcam"
QT_MOC_LITERAL(16, 173, 16), // "CaptureAndDetect"
QT_MOC_LITERAL(17, 190, 11) // "SetTracking"

    },
    "Camera\0StartedCapture\0\0tracking\0"
    "GotImage\0cv::Mat\0RequestCapture\0"
    "StopCameraRequest\0connectedResult\0"
    "isOpen\0OpenCamera\0id\0GetImageFromExternal\0"
    "mat\0GeneralCapture\0CaptureWebcam\0"
    "CaptureAndDetect\0SetTracking"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Camera[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   69,    2, 0x06 /* Public */,
       4,    1,   72,    2, 0x06 /* Public */,
       6,    0,   75,    2, 0x06 /* Public */,
       7,    0,   76,    2, 0x06 /* Public */,
       8,    1,   77,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    1,   80,    2, 0x0a /* Public */,
      12,    1,   83,    2, 0x0a /* Public */,
      14,    0,   86,    2, 0x0a /* Public */,
      15,    0,   87,    2, 0x0a /* Public */,
      16,    0,   88,    2, 0x0a /* Public */,
      17,    1,   89,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, 0x80000000 | 5,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    9,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, 0x80000000 | 5,   13,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   11,

       0        // eod
};

void Camera::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Camera *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->StartedCapture((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->GotImage((*reinterpret_cast< cv::Mat(*)>(_a[1]))); break;
        case 2: _t->RequestCapture(); break;
        case 3: _t->StopCameraRequest(); break;
        case 4: _t->connectedResult((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->OpenCamera((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->GetImageFromExternal((*reinterpret_cast< cv::Mat(*)>(_a[1]))); break;
        case 7: _t->GeneralCapture(); break;
        case 8: _t->CaptureWebcam(); break;
        case 9: _t->CaptureAndDetect(); break;
        case 10: _t->SetTracking((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Camera::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Camera::StartedCapture)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Camera::*)(cv::Mat );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Camera::GotImage)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Camera::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Camera::RequestCapture)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Camera::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Camera::StopCameraRequest)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (Camera::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Camera::connectedResult)) {
                *result = 4;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Camera::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_Camera.data,
    qt_meta_data_Camera,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Camera::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Camera::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Camera.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Camera::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void Camera::StartedCapture(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Camera::GotImage(cv::Mat _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Camera::RequestCapture()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void Camera::StopCameraRequest()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void Camera::connectedResult(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

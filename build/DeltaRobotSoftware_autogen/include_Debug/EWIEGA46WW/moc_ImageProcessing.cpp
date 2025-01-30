/****************************************************************************
** Meta object code from reading C++ file 'ImageProcessing.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../ImageProcessing.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ImageProcessing.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ImageProcessing_t {
    QByteArrayData data[17];
    char stringdata0[210];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ImageProcessing_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ImageProcessing_t qt_meta_stringdata_ImageProcessing = {
    {
QT_MOC_LITERAL(0, 0, 15), // "ImageProcessing"
QT_MOC_LITERAL(1, 16, 21), // "mappedDetectedObjects"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 19), // "QVector<ObjectInfo>"
QT_MOC_LITERAL(4, 59, 15), // "detectedObjects"
QT_MOC_LITERAL(5, 75, 14), // "objectListName"
QT_MOC_LITERAL(6, 90, 17), // "GotVisibleObjects"
QT_MOC_LITERAL(7, 108, 15), // "QVector<Object>"
QT_MOC_LITERAL(8, 124, 7), // "objects"
QT_MOC_LITERAL(9, 132, 8), // "GotImage"
QT_MOC_LITERAL(10, 141, 7), // "cv::Mat"
QT_MOC_LITERAL(11, 149, 3), // "mat"
QT_MOC_LITERAL(12, 153, 14), // "GotResizeValue"
QT_MOC_LITERAL(13, 168, 8), // "cv::Size"
QT_MOC_LITERAL(14, 177, 4), // "size"
QT_MOC_LITERAL(15, 182, 20), // "GotPerspectiveMatrix"
QT_MOC_LITERAL(16, 203, 6) // "matrix"

    },
    "ImageProcessing\0mappedDetectedObjects\0"
    "\0QVector<ObjectInfo>\0detectedObjects\0"
    "objectListName\0GotVisibleObjects\0"
    "QVector<Object>\0objects\0GotImage\0"
    "cv::Mat\0mat\0GotResizeValue\0cv::Size\0"
    "size\0GotPerspectiveMatrix\0matrix"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ImageProcessing[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   39,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   44,    2, 0x0a /* Public */,
       9,    1,   47,    2, 0x0a /* Public */,
      12,    1,   50,    2, 0x0a /* Public */,
      15,    1,   53,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::QString,    4,    5,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void, 0x80000000 | 10,   16,

       0        // eod
};

void ImageProcessing::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ImageProcessing *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->mappedDetectedObjects((*reinterpret_cast< QVector<ObjectInfo>(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 1: _t->GotVisibleObjects((*reinterpret_cast< QVector<Object>(*)>(_a[1]))); break;
        case 2: _t->GotImage((*reinterpret_cast< cv::Mat(*)>(_a[1]))); break;
        case 3: _t->GotResizeValue((*reinterpret_cast< cv::Size(*)>(_a[1]))); break;
        case 4: _t->GotPerspectiveMatrix((*reinterpret_cast< cv::Mat(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ImageProcessing::*)(QVector<ObjectInfo> , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ImageProcessing::mappedDetectedObjects)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ImageProcessing::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_ImageProcessing.data,
    qt_meta_data_ImageProcessing,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ImageProcessing::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ImageProcessing::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ImageProcessing.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ImageProcessing::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void ImageProcessing::mappedDetectedObjects(QVector<ObjectInfo> _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

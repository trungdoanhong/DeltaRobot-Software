/****************************************************************************
** Meta object code from reading C++ file 'FilterWindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../FilterWindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'FilterWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FilterWork_t {
    QByteArrayData data[10];
    char stringdata0[83];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FilterWork_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FilterWork_t qt_meta_stringdata_FilterWork = {
    {
QT_MOC_LITERAL(0, 0, 10), // "FilterWork"
QT_MOC_LITERAL(1, 11, 14), // "FinishedFilter"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 7), // "cv::Mat"
QT_MOC_LITERAL(4, 35, 8), // "DoFilter"
QT_MOC_LITERAL(5, 44, 3), // "mat"
QT_MOC_LITERAL(6, 48, 10), // "QList<int>"
QT_MOC_LITERAL(7, 59, 5), // "paras"
QT_MOC_LITERAL(8, 65, 8), // "isInvert"
QT_MOC_LITERAL(9, 74, 8) // "blurSize"

    },
    "FilterWork\0FinishedFilter\0\0cv::Mat\0"
    "DoFilter\0mat\0QList<int>\0paras\0isInvert\0"
    "blurSize"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FilterWork[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    4,   27,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 6, QMetaType::Bool, QMetaType::Int,    5,    7,    8,    9,

       0        // eod
};

void FilterWork::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FilterWork *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->FinishedFilter((*reinterpret_cast< cv::Mat(*)>(_a[1]))); break;
        case 1: _t->DoFilter((*reinterpret_cast< cv::Mat(*)>(_a[1])),(*reinterpret_cast< QList<int>(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<int> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (FilterWork::*)(cv::Mat );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FilterWork::FinishedFilter)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject FilterWork::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_FilterWork.data,
    qt_meta_data_FilterWork,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FilterWork::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FilterWork::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FilterWork.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int FilterWork::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void FilterWork::FinishedFilter(cv::Mat _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_FilterWindow_t {
    QByteArrayData data[16];
    char stringdata0[173];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FilterWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FilterWindow_t qt_meta_stringdata_FilterWindow = {
    {
QT_MOC_LITERAL(0, 0, 12), // "FilterWindow"
QT_MOC_LITERAL(1, 13, 12), // "ValueChanged"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 10), // "QList<int>"
QT_MOC_LITERAL(4, 38, 5), // "paras"
QT_MOC_LITERAL(5, 44, 8), // "isInvert"
QT_MOC_LITERAL(6, 53, 8), // "blurSize"
QT_MOC_LITERAL(7, 62, 23), // "ColorFilterValueChanged"
QT_MOC_LITERAL(8, 86, 6), // "values"
QT_MOC_LITERAL(9, 93, 13), // "ColorInverted"
QT_MOC_LITERAL(10, 107, 15), // "BlurSizeChanged"
QT_MOC_LITERAL(11, 123, 4), // "size"
QT_MOC_LITERAL(12, 128, 13), // "requestFilter"
QT_MOC_LITERAL(13, 142, 7), // "cv::Mat"
QT_MOC_LITERAL(14, 150, 3), // "mat"
QT_MOC_LITERAL(15, 154, 18) // "ProcessValueFromUI"

    },
    "FilterWindow\0ValueChanged\0\0QList<int>\0"
    "paras\0isInvert\0blurSize\0ColorFilterValueChanged\0"
    "values\0ColorInverted\0BlurSizeChanged\0"
    "size\0requestFilter\0cv::Mat\0mat\0"
    "ProcessValueFromUI"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FilterWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,   44,    2, 0x06 /* Public */,
       7,    1,   51,    2, 0x06 /* Public */,
       9,    1,   54,    2, 0x06 /* Public */,
      10,    1,   57,    2, 0x06 /* Public */,
      12,    4,   60,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      15,    0,   69,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::Bool, QMetaType::Int,    4,    5,    6,
    QMetaType::Void, 0x80000000 | 3,    8,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, 0x80000000 | 13, 0x80000000 | 3, QMetaType::Bool, QMetaType::Int,   14,    4,    5,    6,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void FilterWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FilterWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->ValueChanged((*reinterpret_cast< QList<int>(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 1: _t->ColorFilterValueChanged((*reinterpret_cast< QList<int>(*)>(_a[1]))); break;
        case 2: _t->ColorInverted((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->BlurSizeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->requestFilter((*reinterpret_cast< cv::Mat(*)>(_a[1])),(*reinterpret_cast< QList<int>(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 5: _t->ProcessValueFromUI(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<int> >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<int> >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<int> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (FilterWindow::*)(QList<int> , bool , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FilterWindow::ValueChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (FilterWindow::*)(QList<int> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FilterWindow::ColorFilterValueChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (FilterWindow::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FilterWindow::ColorInverted)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (FilterWindow::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FilterWindow::BlurSizeChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (FilterWindow::*)(cv::Mat , QList<int> , bool , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FilterWindow::requestFilter)) {
                *result = 4;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject FilterWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_FilterWindow.data,
    qt_meta_data_FilterWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FilterWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FilterWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FilterWindow.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int FilterWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void FilterWindow::ValueChanged(QList<int> _t1, bool _t2, int _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void FilterWindow::ColorFilterValueChanged(QList<int> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void FilterWindow::ColorInverted(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void FilterWindow::BlurSizeChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void FilterWindow::requestFilter(cv::Mat _t1, QList<int> _t2, bool _t3, int _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

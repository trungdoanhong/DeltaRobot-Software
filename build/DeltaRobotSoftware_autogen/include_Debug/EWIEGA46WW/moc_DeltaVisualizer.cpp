/****************************************************************************
** Meta object code from reading C++ file 'DeltaVisualizer.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../DeltaVisualizer.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DeltaVisualizer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DeltaVisualizer_t {
    QByteArrayData data[30];
    char stringdata0[230];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DeltaVisualizer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DeltaVisualizer_t qt_meta_stringdata_DeltaVisualizer = {
    {
QT_MOC_LITERAL(0, 0, 15), // "DeltaVisualizer"
QT_MOC_LITERAL(1, 16, 5), // "Moved"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 1), // "x"
QT_MOC_LITERAL(4, 25, 1), // "y"
QT_MOC_LITERAL(5, 27, 1), // "z"
QT_MOC_LITERAL(6, 29, 1), // "w"
QT_MOC_LITERAL(7, 31, 1), // "u"
QT_MOC_LITERAL(8, 33, 1), // "v"
QT_MOC_LITERAL(9, 35, 11), // "CursorMoved"
QT_MOC_LITERAL(10, 47, 12), // "FinishMoving"
QT_MOC_LITERAL(11, 60, 8), // "up_arrow"
QT_MOC_LITERAL(12, 69, 10), // "down_arrow"
QT_MOC_LITERAL(13, 80, 10), // "left_arrow"
QT_MOC_LITERAL(14, 91, 11), // "right_arrow"
QT_MOC_LITERAL(15, 103, 8), // "ChangeXY"
QT_MOC_LITERAL(16, 112, 6), // "MoveUp"
QT_MOC_LITERAL(17, 119, 8), // "MoveDown"
QT_MOC_LITERAL(18, 128, 11), // "MoveForward"
QT_MOC_LITERAL(19, 140, 12), // "MoveBackward"
QT_MOC_LITERAL(20, 153, 8), // "MoveLeft"
QT_MOC_LITERAL(21, 162, 9), // "MoveRight"
QT_MOC_LITERAL(22, 172, 4), // "SubW"
QT_MOC_LITERAL(23, 177, 4), // "SubU"
QT_MOC_LITERAL(24, 182, 4), // "SubV"
QT_MOC_LITERAL(25, 187, 5), // "PlusW"
QT_MOC_LITERAL(26, 193, 5), // "PlusU"
QT_MOC_LITERAL(27, 199, 5), // "PlusV"
QT_MOC_LITERAL(28, 205, 17), // "ChangeWorkingSize"
QT_MOC_LITERAL(29, 223, 6) // "option"

    },
    "DeltaVisualizer\0Moved\0\0x\0y\0z\0w\0u\0v\0"
    "CursorMoved\0FinishMoving\0up_arrow\0"
    "down_arrow\0left_arrow\0right_arrow\0"
    "ChangeXY\0MoveUp\0MoveDown\0MoveForward\0"
    "MoveBackward\0MoveLeft\0MoveRight\0SubW\0"
    "SubU\0SubV\0PlusW\0PlusU\0PlusV\0"
    "ChangeWorkingSize\0option"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DeltaVisualizer[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      21,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    6,  119,    2, 0x06 /* Public */,
       9,    2,  132,    2, 0x06 /* Public */,
      10,    0,  137,    2, 0x06 /* Public */,
      11,    0,  138,    2, 0x06 /* Public */,
      12,    0,  139,    2, 0x06 /* Public */,
      13,    0,  140,    2, 0x06 /* Public */,
      14,    0,  141,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      15,    2,  142,    2, 0x0a /* Public */,
      16,    0,  147,    2, 0x0a /* Public */,
      17,    0,  148,    2, 0x0a /* Public */,
      18,    0,  149,    2, 0x0a /* Public */,
      19,    0,  150,    2, 0x0a /* Public */,
      20,    0,  151,    2, 0x0a /* Public */,
      21,    0,  152,    2, 0x0a /* Public */,
      22,    0,  153,    2, 0x0a /* Public */,
      23,    0,  154,    2, 0x0a /* Public */,
      24,    0,  155,    2, 0x0a /* Public */,
      25,    0,  156,    2, 0x0a /* Public */,
      26,    0,  157,    2, 0x0a /* Public */,
      27,    0,  158,    2, 0x0a /* Public */,
      28,    1,  159,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float,    3,    4,    5,    6,    7,    8,
    QMetaType::Void, QMetaType::Float, QMetaType::Float,    3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Float, QMetaType::Float,    3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   29,

       0        // eod
};

void DeltaVisualizer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DeltaVisualizer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->Moved((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4])),(*reinterpret_cast< float(*)>(_a[5])),(*reinterpret_cast< float(*)>(_a[6]))); break;
        case 1: _t->CursorMoved((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 2: _t->FinishMoving(); break;
        case 3: _t->up_arrow(); break;
        case 4: _t->down_arrow(); break;
        case 5: _t->left_arrow(); break;
        case 6: _t->right_arrow(); break;
        case 7: _t->ChangeXY((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 8: _t->MoveUp(); break;
        case 9: _t->MoveDown(); break;
        case 10: _t->MoveForward(); break;
        case 11: _t->MoveBackward(); break;
        case 12: _t->MoveLeft(); break;
        case 13: _t->MoveRight(); break;
        case 14: _t->SubW(); break;
        case 15: _t->SubU(); break;
        case 16: _t->SubV(); break;
        case 17: _t->PlusW(); break;
        case 18: _t->PlusU(); break;
        case 19: _t->PlusV(); break;
        case 20: _t->ChangeWorkingSize((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DeltaVisualizer::*)(float , float , float , float , float , float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeltaVisualizer::Moved)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (DeltaVisualizer::*)(float , float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeltaVisualizer::CursorMoved)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (DeltaVisualizer::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeltaVisualizer::FinishMoving)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (DeltaVisualizer::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeltaVisualizer::up_arrow)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (DeltaVisualizer::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeltaVisualizer::down_arrow)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (DeltaVisualizer::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeltaVisualizer::left_arrow)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (DeltaVisualizer::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeltaVisualizer::right_arrow)) {
                *result = 6;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject DeltaVisualizer::staticMetaObject = { {
    QMetaObject::SuperData::link<QLabel::staticMetaObject>(),
    qt_meta_stringdata_DeltaVisualizer.data,
    qt_meta_data_DeltaVisualizer,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DeltaVisualizer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DeltaVisualizer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DeltaVisualizer.stringdata0))
        return static_cast<void*>(this);
    return QLabel::qt_metacast(_clname);
}

int DeltaVisualizer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLabel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 21)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 21;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 21)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 21;
    }
    return _id;
}

// SIGNAL 0
void DeltaVisualizer::Moved(float _t1, float _t2, float _t3, float _t4, float _t5, float _t6)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t5))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t6))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void DeltaVisualizer::CursorMoved(float _t1, float _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void DeltaVisualizer::FinishMoving()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void DeltaVisualizer::up_arrow()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void DeltaVisualizer::down_arrow()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void DeltaVisualizer::left_arrow()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void DeltaVisualizer::right_arrow()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

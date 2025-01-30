/****************************************************************************
** Meta object code from reading C++ file 'SocketConnectionManager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../SocketConnectionManager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SocketConnectionManager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SocketConnectionManager_t {
    QByteArrayData data[25];
    char stringdata0[297];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SocketConnectionManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SocketConnectionManager_t qt_meta_stringdata_SocketConnectionManager = {
    {
QT_MOC_LITERAL(0, 0, 23), // "SocketConnectionManager"
QT_MOC_LITERAL(1, 24, 15), // "variableChanged"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 7), // "varName"
QT_MOC_LITERAL(4, 49, 5), // "value"
QT_MOC_LITERAL(5, 55, 13), // "objectUpdated"
QT_MOC_LITERAL(6, 69, 8), // "listName"
QT_MOC_LITERAL(7, 78, 18), // "QList<QStringList>"
QT_MOC_LITERAL(8, 97, 4), // "list"
QT_MOC_LITERAL(9, 102, 11), // "blobUpdated"
QT_MOC_LITERAL(10, 114, 5), // "blobs"
QT_MOC_LITERAL(11, 120, 13), // "gcodeReceived"
QT_MOC_LITERAL(12, 134, 5), // "gcode"
QT_MOC_LITERAL(13, 140, 13), // "eventReceived"
QT_MOC_LITERAL(14, 154, 4), // "type"
QT_MOC_LITERAL(15, 159, 4), // "name"
QT_MOC_LITERAL(16, 164, 6), // "action"
QT_MOC_LITERAL(17, 171, 18), // "newClientConnected"
QT_MOC_LITERAL(18, 190, 21), // "newWebClientConnected"
QT_MOC_LITERAL(19, 212, 14), // "readFromClient"
QT_MOC_LITERAL(20, 227, 23), // "sendImageToImageClients"
QT_MOC_LITERAL(21, 251, 5), // "image"
QT_MOC_LITERAL(22, 257, 7), // "cv::Mat"
QT_MOC_LITERAL(23, 265, 25), // "sendImageToExternalScript"
QT_MOC_LITERAL(24, 291, 5) // "input"

    },
    "SocketConnectionManager\0variableChanged\0"
    "\0varName\0value\0objectUpdated\0listName\0"
    "QList<QStringList>\0list\0blobUpdated\0"
    "blobs\0gcodeReceived\0gcode\0eventReceived\0"
    "type\0name\0action\0newClientConnected\0"
    "newWebClientConnected\0readFromClient\0"
    "sendImageToImageClients\0image\0cv::Mat\0"
    "sendImageToExternalScript\0input"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SocketConnectionManager[] = {

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
       1,    2,   69,    2, 0x06 /* Public */,
       5,    2,   74,    2, 0x06 /* Public */,
       9,    1,   79,    2, 0x06 /* Public */,
      11,    1,   82,    2, 0x06 /* Public */,
      13,    3,   85,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      17,    0,   92,    2, 0x08 /* Private */,
      18,    0,   93,    2, 0x08 /* Private */,
      19,    0,   94,    2, 0x08 /* Private */,
      20,    1,   95,    2, 0x0a /* Public */,
      20,    1,   98,    2, 0x0a /* Public */,
      23,    1,  101,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QVariant,    3,    4,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 7,    6,    8,
    QMetaType::Void, QMetaType::QStringList,   10,
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,   14,   15,   16,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QImage,   21,
    QMetaType::Void, 0x80000000 | 22,    2,
    QMetaType::Void, 0x80000000 | 22,   24,

       0        // eod
};

void SocketConnectionManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SocketConnectionManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->variableChanged((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2]))); break;
        case 1: _t->objectUpdated((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QList<QStringList>(*)>(_a[2]))); break;
        case 2: _t->blobUpdated((*reinterpret_cast< QStringList(*)>(_a[1]))); break;
        case 3: _t->gcodeReceived((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->eventReceived((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 5: _t->newClientConnected(); break;
        case 6: _t->newWebClientConnected(); break;
        case 7: _t->readFromClient(); break;
        case 8: _t->sendImageToImageClients((*reinterpret_cast< const QImage(*)>(_a[1]))); break;
        case 9: _t->sendImageToImageClients((*reinterpret_cast< cv::Mat(*)>(_a[1]))); break;
        case 10: _t->sendImageToExternalScript((*reinterpret_cast< cv::Mat(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
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
            using _t = void (SocketConnectionManager::*)(const QString & , const QVariant & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SocketConnectionManager::variableChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (SocketConnectionManager::*)(QString , QList<QStringList> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SocketConnectionManager::objectUpdated)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (SocketConnectionManager::*)(QStringList );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SocketConnectionManager::blobUpdated)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (SocketConnectionManager::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SocketConnectionManager::gcodeReceived)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (SocketConnectionManager::*)(QString , QString , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SocketConnectionManager::eventReceived)) {
                *result = 4;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject SocketConnectionManager::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_SocketConnectionManager.data,
    qt_meta_data_SocketConnectionManager,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SocketConnectionManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SocketConnectionManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SocketConnectionManager.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int SocketConnectionManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void SocketConnectionManager::variableChanged(const QString & _t1, const QVariant & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void SocketConnectionManager::objectUpdated(QString _t1, QList<QStringList> _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void SocketConnectionManager::blobUpdated(QStringList _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void SocketConnectionManager::gcodeReceived(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void SocketConnectionManager::eventReceived(QString _t1, QString _t2, QString _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

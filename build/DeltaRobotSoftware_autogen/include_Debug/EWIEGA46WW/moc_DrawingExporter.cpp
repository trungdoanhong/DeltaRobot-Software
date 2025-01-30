/****************************************************************************
** Meta object code from reading C++ file 'DrawingExporter.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../DrawingExporter.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DrawingExporter.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DrawingExporter_t {
    QByteArrayData data[10];
    char stringdata0[131];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DrawingExporter_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DrawingExporter_t qt_meta_stringdata_DrawingExporter = {
    {
QT_MOC_LITERAL(0, 0, 15), // "DrawingExporter"
QT_MOC_LITERAL(1, 16, 9), // "OpenImage"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 20), // "ConvertToDrawingArea"
QT_MOC_LITERAL(4, 48, 16), // "ConvertSVGToArea"
QT_MOC_LITERAL(5, 65, 8), // "fileName"
QT_MOC_LITERAL(6, 74, 12), // "ExportGcodes"
QT_MOC_LITERAL(7, 87, 15), // "ApplyConversion"
QT_MOC_LITERAL(8, 103, 10), // "ChangeSize"
QT_MOC_LITERAL(9, 114, 16) // "ScaleEffectImage"

    },
    "DrawingExporter\0OpenImage\0\0"
    "ConvertToDrawingArea\0ConvertSVGToArea\0"
    "fileName\0ExportGcodes\0ApplyConversion\0"
    "ChangeSize\0ScaleEffectImage"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DrawingExporter[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x0a /* Public */,
       3,    0,   50,    2, 0x0a /* Public */,
       4,    1,   51,    2, 0x0a /* Public */,
       6,    0,   54,    2, 0x0a /* Public */,
       7,    0,   55,    2, 0x0a /* Public */,
       8,    0,   56,    2, 0x0a /* Public */,
       9,    0,   57,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void DrawingExporter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DrawingExporter *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->OpenImage(); break;
        case 1: _t->ConvertToDrawingArea(); break;
        case 2: _t->ConvertSVGToArea((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->ExportGcodes(); break;
        case 4: _t->ApplyConversion(); break;
        case 5: _t->ChangeSize(); break;
        case 6: _t->ScaleEffectImage(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject DrawingExporter::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_DrawingExporter.data,
    qt_meta_data_DrawingExporter,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DrawingExporter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DrawingExporter::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DrawingExporter.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int DrawingExporter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

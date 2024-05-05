/****************************************************************************
** Meta object code from reading C++ file 'GraphOptionsWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../src/dialogs/preferences/GraphOptionsWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'GraphOptionsWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_GraphOptionsWidget_t {
    QByteArrayData data[13];
    char stringdata0[298];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GraphOptionsWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GraphOptionsWidget_t qt_meta_stringdata_GraphOptionsWidget = {
    {
QT_MOC_LITERAL(0, 0, 18), // "GraphOptionsWidget"
QT_MOC_LITERAL(1, 19, 21), // "updateOptionsFromVars"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 30), // "on_maxColsSpinBox_valueChanged"
QT_MOC_LITERAL(4, 73, 5), // "value"
QT_MOC_LITERAL(5, 79, 34), // "on_minFontSizeSpinBox_valueCh..."
QT_MOC_LITERAL(6, 114, 30), // "on_graphOffsetCheckBox_toggled"
QT_MOC_LITERAL(7, 145, 7), // "checked"
QT_MOC_LITERAL(8, 153, 31), // "on_graphPreviewCheckBox_toggled"
QT_MOC_LITERAL(9, 185, 28), // "checkTransparentStateChanged"
QT_MOC_LITERAL(10, 214, 28), // "bitmapGraphScaleValueChanged"
QT_MOC_LITERAL(11, 243, 33), // "checkGraphBlockEntryOffsetCha..."
QT_MOC_LITERAL(12, 277, 20) // "layoutSpacingChanged"

    },
    "GraphOptionsWidget\0updateOptionsFromVars\0"
    "\0on_maxColsSpinBox_valueChanged\0value\0"
    "on_minFontSizeSpinBox_valueChanged\0"
    "on_graphOffsetCheckBox_toggled\0checked\0"
    "on_graphPreviewCheckBox_toggled\0"
    "checkTransparentStateChanged\0"
    "bitmapGraphScaleValueChanged\0"
    "checkGraphBlockEntryOffsetChanged\0"
    "layoutSpacingChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GraphOptionsWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x08 /* Private */,
       3,    1,   60,    2, 0x08 /* Private */,
       5,    1,   63,    2, 0x08 /* Private */,
       6,    1,   66,    2, 0x08 /* Private */,
       8,    1,   69,    2, 0x08 /* Private */,
       9,    1,   72,    2, 0x08 /* Private */,
      10,    1,   75,    2, 0x08 /* Private */,
      11,    1,   78,    2, 0x08 /* Private */,
      12,    0,   81,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Double,    4,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void,

       0        // eod
};

void GraphOptionsWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GraphOptionsWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->updateOptionsFromVars(); break;
        case 1: _t->on_maxColsSpinBox_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->on_minFontSizeSpinBox_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->on_graphOffsetCheckBox_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->on_graphPreviewCheckBox_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->checkTransparentStateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->bitmapGraphScaleValueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 7: _t->checkGraphBlockEntryOffsetChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->layoutSpacingChanged(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject GraphOptionsWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_GraphOptionsWidget.data,
    qt_meta_data_GraphOptionsWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *GraphOptionsWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GraphOptionsWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GraphOptionsWidget.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int GraphOptionsWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

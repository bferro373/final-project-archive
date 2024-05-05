/****************************************************************************
** Meta object code from reading C++ file 'AnalysisOptionsWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../src/dialogs/preferences/AnalysisOptionsWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AnalysisOptionsWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AnalysisOptionsWidget_t {
    QByteArrayData data[13];
    char stringdata0[178];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AnalysisOptionsWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AnalysisOptionsWidget_t qt_meta_stringdata_AnalysisOptionsWidget = {
    {
QT_MOC_LITERAL(0, 0, 21), // "AnalysisOptionsWidget"
QT_MOC_LITERAL(1, 22, 29), // "updateAnalysisOptionsFromVars"
QT_MOC_LITERAL(2, 52, 0), // ""
QT_MOC_LITERAL(3, 53, 15), // "checkboxEnabler"
QT_MOC_LITERAL(4, 69, 10), // "QCheckBox*"
QT_MOC_LITERAL(5, 80, 8), // "checkbox"
QT_MOC_LITERAL(6, 89, 6), // "config"
QT_MOC_LITERAL(7, 96, 16), // "updateAnalysisIn"
QT_MOC_LITERAL(8, 113, 5), // "index"
QT_MOC_LITERAL(9, 119, 22), // "updateAnalysisPtrDepth"
QT_MOC_LITERAL(10, 142, 5), // "value"
QT_MOC_LITERAL(11, 148, 21), // "updateAnalysisPrelude"
QT_MOC_LITERAL(12, 170, 7) // "prelude"

    },
    "AnalysisOptionsWidget\0"
    "updateAnalysisOptionsFromVars\0\0"
    "checkboxEnabler\0QCheckBox*\0checkbox\0"
    "config\0updateAnalysisIn\0index\0"
    "updateAnalysisPtrDepth\0value\0"
    "updateAnalysisPrelude\0prelude"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AnalysisOptionsWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x08 /* Private */,
       3,    2,   40,    2, 0x08 /* Private */,
       7,    1,   45,    2, 0x08 /* Private */,
       9,    1,   48,    2, 0x08 /* Private */,
      11,    1,   51,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4, QMetaType::QString,    5,    6,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::QString,   12,

       0        // eod
};

void AnalysisOptionsWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AnalysisOptionsWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->updateAnalysisOptionsFromVars(); break;
        case 1: _t->checkboxEnabler((*reinterpret_cast< QCheckBox*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 2: _t->updateAnalysisIn((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->updateAnalysisPtrDepth((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->updateAnalysisPrelude((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject AnalysisOptionsWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_AnalysisOptionsWidget.data,
    qt_meta_data_AnalysisOptionsWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AnalysisOptionsWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AnalysisOptionsWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AnalysisOptionsWidget.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int AnalysisOptionsWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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

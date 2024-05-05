/****************************************************************************
** Meta object code from reading C++ file 'OverviewWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../src/widgets/OverviewWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'OverviewWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_OverviewWidget_t {
    QByteArrayData data[16];
    char stringdata0[198];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OverviewWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OverviewWidget_t qt_meta_stringdata_OverviewWidget = {
    {
QT_MOC_LITERAL(0, 0, 14), // "OverviewWidget"
QT_MOC_LITERAL(1, 15, 7), // "resized"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 18), // "isAvailableChanged"
QT_MOC_LITERAL(4, 43, 11), // "isAvailable"
QT_MOC_LITERAL(5, 55, 17), // "userOpenedChanged"
QT_MOC_LITERAL(6, 73, 10), // "userOpened"
QT_MOC_LITERAL(7, 84, 9), // "showEvent"
QT_MOC_LITERAL(8, 94, 11), // "QShowEvent*"
QT_MOC_LITERAL(9, 106, 5), // "event"
QT_MOC_LITERAL(10, 112, 10), // "closeEvent"
QT_MOC_LITERAL(11, 123, 12), // "QCloseEvent*"
QT_MOC_LITERAL(12, 136, 16), // "updateTargetView"
QT_MOC_LITERAL(13, 153, 15), // "updateGraphData"
QT_MOC_LITERAL(14, 169, 15), // "updateRangeRect"
QT_MOC_LITERAL(15, 185, 12) // "targetClosed"

    },
    "OverviewWidget\0resized\0\0isAvailableChanged\0"
    "isAvailable\0userOpenedChanged\0userOpened\0"
    "showEvent\0QShowEvent*\0event\0closeEvent\0"
    "QCloseEvent*\0updateTargetView\0"
    "updateGraphData\0updateRangeRect\0"
    "targetClosed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OverviewWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x06 /* Public */,
       3,    1,   60,    2, 0x06 /* Public */,
       5,    1,   63,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    1,   66,    2, 0x08 /* Private */,
      10,    1,   69,    2, 0x08 /* Private */,
      12,    0,   72,    2, 0x08 /* Private */,
      13,    0,   73,    2, 0x08 /* Private */,
      14,    0,   74,    2, 0x08 /* Private */,
      15,    0,   75,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void, QMetaType::Bool,    6,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, 0x80000000 | 11,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void OverviewWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<OverviewWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->resized(); break;
        case 1: _t->isAvailableChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->userOpenedChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->showEvent((*reinterpret_cast< QShowEvent*(*)>(_a[1]))); break;
        case 4: _t->closeEvent((*reinterpret_cast< QCloseEvent*(*)>(_a[1]))); break;
        case 5: _t->updateTargetView(); break;
        case 6: _t->updateGraphData(); break;
        case 7: _t->updateRangeRect(); break;
        case 8: _t->targetClosed(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (OverviewWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OverviewWidget::resized)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (OverviewWidget::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OverviewWidget::isAvailableChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (OverviewWidget::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OverviewWidget::userOpenedChanged)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject OverviewWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<CutterDockWidget::staticMetaObject>(),
    qt_meta_stringdata_OverviewWidget.data,
    qt_meta_data_OverviewWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OverviewWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OverviewWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OverviewWidget.stringdata0))
        return static_cast<void*>(this);
    return CutterDockWidget::qt_metacast(_clname);
}

int OverviewWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = CutterDockWidget::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void OverviewWidget::resized()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void OverviewWidget::isAvailableChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void OverviewWidget::userOpenedChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

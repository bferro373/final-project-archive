/****************************************************************************
** Meta object code from reading C++ file 'RizinGraphWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../src/widgets/RizinGraphWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'RizinGraphWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_GenericRizinGraphView_t {
    QByteArrayData data[1];
    char stringdata0[22];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GenericRizinGraphView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GenericRizinGraphView_t qt_meta_stringdata_GenericRizinGraphView = {
    {
QT_MOC_LITERAL(0, 0, 21) // "GenericRizinGraphView"

    },
    "GenericRizinGraphView"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GenericRizinGraphView[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void GenericRizinGraphView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject GenericRizinGraphView::staticMetaObject = { {
    QMetaObject::SuperData::link<SimpleTextGraphView::staticMetaObject>(),
    qt_meta_stringdata_GenericRizinGraphView.data,
    qt_meta_data_GenericRizinGraphView,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *GenericRizinGraphView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GenericRizinGraphView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GenericRizinGraphView.stringdata0))
        return static_cast<void*>(this);
    return SimpleTextGraphView::qt_metacast(_clname);
}

int GenericRizinGraphView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SimpleTextGraphView::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_RizinGraphWidget_t {
    QByteArrayData data[1];
    char stringdata0[17];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RizinGraphWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RizinGraphWidget_t qt_meta_stringdata_RizinGraphWidget = {
    {
QT_MOC_LITERAL(0, 0, 16) // "RizinGraphWidget"

    },
    "RizinGraphWidget"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RizinGraphWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void RizinGraphWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject RizinGraphWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<CutterDockWidget::staticMetaObject>(),
    qt_meta_stringdata_RizinGraphWidget.data,
    qt_meta_data_RizinGraphWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *RizinGraphWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RizinGraphWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_RizinGraphWidget.stringdata0))
        return static_cast<void*>(this);
    return CutterDockWidget::qt_metacast(_clname);
}

int RizinGraphWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = CutterDockWidget::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

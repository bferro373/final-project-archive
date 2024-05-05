/****************************************************************************
** Meta object code from reading C++ file 'CommentsWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../src/widgets/CommentsWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CommentsWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CommentsModel_t {
    QByteArrayData data[1];
    char stringdata0[14];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CommentsModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CommentsModel_t qt_meta_stringdata_CommentsModel = {
    {
QT_MOC_LITERAL(0, 0, 13) // "CommentsModel"

    },
    "CommentsModel"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CommentsModel[] = {

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

void CommentsModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject CommentsModel::staticMetaObject = { {
    QMetaObject::SuperData::link<AddressableItemModel<>::staticMetaObject>(),
    qt_meta_stringdata_CommentsModel.data,
    qt_meta_data_CommentsModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *CommentsModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CommentsModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CommentsModel.stringdata0))
        return static_cast<void*>(this);
    return AddressableItemModel<>::qt_metacast(_clname);
}

int CommentsModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AddressableItemModel<>::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_CommentsProxyModel_t {
    QByteArrayData data[1];
    char stringdata0[19];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CommentsProxyModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CommentsProxyModel_t qt_meta_stringdata_CommentsProxyModel = {
    {
QT_MOC_LITERAL(0, 0, 18) // "CommentsProxyModel"

    },
    "CommentsProxyModel"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CommentsProxyModel[] = {

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

void CommentsProxyModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject CommentsProxyModel::staticMetaObject = { {
    QMetaObject::SuperData::link<AddressableFilterProxyModel::staticMetaObject>(),
    qt_meta_stringdata_CommentsProxyModel.data,
    qt_meta_data_CommentsProxyModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *CommentsProxyModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CommentsProxyModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CommentsProxyModel.stringdata0))
        return static_cast<void*>(this);
    return AddressableFilterProxyModel::qt_metacast(_clname);
}

int CommentsProxyModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AddressableFilterProxyModel::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_CommentsWidget_t {
    QByteArrayData data[8];
    char stringdata0[110];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CommentsWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CommentsWidget_t qt_meta_stringdata_CommentsWidget = {
    {
QT_MOC_LITERAL(0, 0, 14), // "CommentsWidget"
QT_MOC_LITERAL(1, 15, 25), // "onActionHorizontalToggled"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 7), // "checked"
QT_MOC_LITERAL(4, 50, 23), // "onActionVerticalToggled"
QT_MOC_LITERAL(5, 74, 20), // "showTitleContextMenu"
QT_MOC_LITERAL(6, 95, 2), // "pt"
QT_MOC_LITERAL(7, 98, 11) // "refreshTree"

    },
    "CommentsWidget\0onActionHorizontalToggled\0"
    "\0checked\0onActionVerticalToggled\0"
    "showTitleContextMenu\0pt\0refreshTree"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CommentsWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x08 /* Private */,
       4,    1,   37,    2, 0x08 /* Private */,
       5,    1,   40,    2, 0x08 /* Private */,
       7,    0,   43,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::QPoint,    6,
    QMetaType::Void,

       0        // eod
};

void CommentsWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CommentsWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onActionHorizontalToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->onActionVerticalToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->showTitleContextMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 3: _t->refreshTree(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject CommentsWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<ListDockWidget::staticMetaObject>(),
    qt_meta_stringdata_CommentsWidget.data,
    qt_meta_data_CommentsWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *CommentsWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CommentsWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CommentsWidget.stringdata0))
        return static_cast<void*>(this);
    return ListDockWidget::qt_metacast(_clname);
}

int CommentsWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ListDockWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

/****************************************************************************
** Meta object code from reading C++ file 'FunctionsWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../src/widgets/FunctionsWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'FunctionsWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FunctionModel_t {
    QByteArrayData data[8];
    char stringdata0[68];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FunctionModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FunctionModel_t qt_meta_stringdata_FunctionModel = {
    {
QT_MOC_LITERAL(0, 0, 13), // "FunctionModel"
QT_MOC_LITERAL(1, 14, 11), // "seekChanged"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 3), // "RVA"
QT_MOC_LITERAL(4, 31, 4), // "addr"
QT_MOC_LITERAL(5, 36, 15), // "functionRenamed"
QT_MOC_LITERAL(6, 52, 6), // "offset"
QT_MOC_LITERAL(7, 59, 8) // "new_name"

    },
    "FunctionModel\0seekChanged\0\0RVA\0addr\0"
    "functionRenamed\0offset\0new_name"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FunctionModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x08 /* Private */,
       5,    2,   27,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3, QMetaType::QString,    6,    7,

       0        // eod
};

void FunctionModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FunctionModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->seekChanged((*reinterpret_cast< RVA(*)>(_a[1]))); break;
        case 1: _t->functionRenamed((*reinterpret_cast< const RVA(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject FunctionModel::staticMetaObject = { {
    QMetaObject::SuperData::link<AddressableItemModel<>::staticMetaObject>(),
    qt_meta_stringdata_FunctionModel.data,
    qt_meta_data_FunctionModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FunctionModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FunctionModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FunctionModel.stringdata0))
        return static_cast<void*>(this);
    return AddressableItemModel<>::qt_metacast(_clname);
}

int FunctionModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AddressableItemModel<>::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
struct qt_meta_stringdata_FunctionSortFilterProxyModel_t {
    QByteArrayData data[1];
    char stringdata0[29];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FunctionSortFilterProxyModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FunctionSortFilterProxyModel_t qt_meta_stringdata_FunctionSortFilterProxyModel = {
    {
QT_MOC_LITERAL(0, 0, 28) // "FunctionSortFilterProxyModel"

    },
    "FunctionSortFilterProxyModel"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FunctionSortFilterProxyModel[] = {

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

void FunctionSortFilterProxyModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject FunctionSortFilterProxyModel::staticMetaObject = { {
    QMetaObject::SuperData::link<AddressableFilterProxyModel::staticMetaObject>(),
    qt_meta_stringdata_FunctionSortFilterProxyModel.data,
    qt_meta_data_FunctionSortFilterProxyModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FunctionSortFilterProxyModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FunctionSortFilterProxyModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FunctionSortFilterProxyModel.stringdata0))
        return static_cast<void*>(this);
    return AddressableFilterProxyModel::qt_metacast(_clname);
}

int FunctionSortFilterProxyModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AddressableFilterProxyModel::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_FunctionsWidget_t {
    QByteArrayData data[11];
    char stringdata0[199];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FunctionsWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FunctionsWidget_t qt_meta_stringdata_FunctionsWidget = {
    {
QT_MOC_LITERAL(0, 0, 15), // "FunctionsWidget"
QT_MOC_LITERAL(1, 16, 32), // "onActionFunctionsRenameTriggered"
QT_MOC_LITERAL(2, 49, 0), // ""
QT_MOC_LITERAL(3, 50, 34), // "onActionFunctionsUndefineTrig..."
QT_MOC_LITERAL(4, 85, 25), // "onActionHorizontalToggled"
QT_MOC_LITERAL(5, 111, 6), // "enable"
QT_MOC_LITERAL(6, 118, 23), // "onActionVerticalToggled"
QT_MOC_LITERAL(7, 142, 20), // "showTitleContextMenu"
QT_MOC_LITERAL(8, 163, 2), // "pt"
QT_MOC_LITERAL(9, 166, 20), // "setTooltipStylesheet"
QT_MOC_LITERAL(10, 187, 11) // "refreshTree"

    },
    "FunctionsWidget\0onActionFunctionsRenameTriggered\0"
    "\0onActionFunctionsUndefineTriggered\0"
    "onActionHorizontalToggled\0enable\0"
    "onActionVerticalToggled\0showTitleContextMenu\0"
    "pt\0setTooltipStylesheet\0refreshTree"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FunctionsWidget[] = {

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
       1,    0,   49,    2, 0x08 /* Private */,
       3,    0,   50,    2, 0x08 /* Private */,
       4,    1,   51,    2, 0x08 /* Private */,
       6,    1,   54,    2, 0x08 /* Private */,
       7,    1,   57,    2, 0x08 /* Private */,
       9,    0,   60,    2, 0x08 /* Private */,
      10,    0,   61,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::QPoint,    8,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void FunctionsWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FunctionsWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onActionFunctionsRenameTriggered(); break;
        case 1: _t->onActionFunctionsUndefineTriggered(); break;
        case 2: _t->onActionHorizontalToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->onActionVerticalToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->showTitleContextMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 5: _t->setTooltipStylesheet(); break;
        case 6: _t->refreshTree(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject FunctionsWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<ListDockWidget::staticMetaObject>(),
    qt_meta_stringdata_FunctionsWidget.data,
    qt_meta_data_FunctionsWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FunctionsWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FunctionsWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FunctionsWidget.stringdata0))
        return static_cast<void*>(this);
    return ListDockWidget::qt_metacast(_clname);
}

int FunctionsWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ListDockWidget::qt_metacall(_c, _id, _a);
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

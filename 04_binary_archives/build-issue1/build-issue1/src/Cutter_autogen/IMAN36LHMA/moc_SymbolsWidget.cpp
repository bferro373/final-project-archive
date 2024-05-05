/****************************************************************************
** Meta object code from reading C++ file 'SymbolsWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../src/widgets/SymbolsWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SymbolsWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SymbolsModel_t {
    QByteArrayData data[1];
    char stringdata0[13];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SymbolsModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SymbolsModel_t qt_meta_stringdata_SymbolsModel = {
    {
QT_MOC_LITERAL(0, 0, 12) // "SymbolsModel"

    },
    "SymbolsModel"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SymbolsModel[] = {

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

void SymbolsModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject SymbolsModel::staticMetaObject = { {
    QMetaObject::SuperData::link<AddressableItemModel<QAbstractListModel>::staticMetaObject>(),
    qt_meta_stringdata_SymbolsModel.data,
    qt_meta_data_SymbolsModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SymbolsModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SymbolsModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SymbolsModel.stringdata0))
        return static_cast<void*>(this);
    return AddressableItemModel<QAbstractListModel>::qt_metacast(_clname);
}

int SymbolsModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AddressableItemModel<QAbstractListModel>::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_SymbolsProxyModel_t {
    QByteArrayData data[1];
    char stringdata0[18];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SymbolsProxyModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SymbolsProxyModel_t qt_meta_stringdata_SymbolsProxyModel = {
    {
QT_MOC_LITERAL(0, 0, 17) // "SymbolsProxyModel"

    },
    "SymbolsProxyModel"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SymbolsProxyModel[] = {

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

void SymbolsProxyModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject SymbolsProxyModel::staticMetaObject = { {
    QMetaObject::SuperData::link<AddressableFilterProxyModel::staticMetaObject>(),
    qt_meta_stringdata_SymbolsProxyModel.data,
    qt_meta_data_SymbolsProxyModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SymbolsProxyModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SymbolsProxyModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SymbolsProxyModel.stringdata0))
        return static_cast<void*>(this);
    return AddressableFilterProxyModel::qt_metacast(_clname);
}

int SymbolsProxyModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AddressableFilterProxyModel::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_SymbolsWidget_t {
    QByteArrayData data[3];
    char stringdata0[30];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SymbolsWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SymbolsWidget_t qt_meta_stringdata_SymbolsWidget = {
    {
QT_MOC_LITERAL(0, 0, 13), // "SymbolsWidget"
QT_MOC_LITERAL(1, 14, 14), // "refreshSymbols"
QT_MOC_LITERAL(2, 29, 0) // ""

    },
    "SymbolsWidget\0refreshSymbols\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SymbolsWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void SymbolsWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SymbolsWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->refreshSymbols(); break;
        default: ;
        }
    }
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject SymbolsWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<ListDockWidget::staticMetaObject>(),
    qt_meta_stringdata_SymbolsWidget.data,
    qt_meta_data_SymbolsWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SymbolsWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SymbolsWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SymbolsWidget.stringdata0))
        return static_cast<void*>(this);
    return ListDockWidget::qt_metacast(_clname);
}

int SymbolsWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ListDockWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

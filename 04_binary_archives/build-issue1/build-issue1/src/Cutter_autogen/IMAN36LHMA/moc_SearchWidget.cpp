/****************************************************************************
** Meta object code from reading C++ file 'SearchWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../src/widgets/SearchWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SearchWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SearchModel_t {
    QByteArrayData data[1];
    char stringdata0[12];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SearchModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SearchModel_t qt_meta_stringdata_SearchModel = {
    {
QT_MOC_LITERAL(0, 0, 11) // "SearchModel"

    },
    "SearchModel"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SearchModel[] = {

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

void SearchModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject SearchModel::staticMetaObject = { {
    QMetaObject::SuperData::link<AddressableItemModel<QAbstractListModel>::staticMetaObject>(),
    qt_meta_stringdata_SearchModel.data,
    qt_meta_data_SearchModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SearchModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SearchModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SearchModel.stringdata0))
        return static_cast<void*>(this);
    return AddressableItemModel<QAbstractListModel>::qt_metacast(_clname);
}

int SearchModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AddressableItemModel<QAbstractListModel>::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_SearchSortFilterProxyModel_t {
    QByteArrayData data[1];
    char stringdata0[27];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SearchSortFilterProxyModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SearchSortFilterProxyModel_t qt_meta_stringdata_SearchSortFilterProxyModel = {
    {
QT_MOC_LITERAL(0, 0, 26) // "SearchSortFilterProxyModel"

    },
    "SearchSortFilterProxyModel"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SearchSortFilterProxyModel[] = {

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

void SearchSortFilterProxyModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject SearchSortFilterProxyModel::staticMetaObject = { {
    QMetaObject::SuperData::link<AddressableFilterProxyModel::staticMetaObject>(),
    qt_meta_stringdata_SearchSortFilterProxyModel.data,
    qt_meta_data_SearchSortFilterProxyModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SearchSortFilterProxyModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SearchSortFilterProxyModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SearchSortFilterProxyModel.stringdata0))
        return static_cast<void*>(this);
    return AddressableFilterProxyModel::qt_metacast(_clname);
}

int SearchSortFilterProxyModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AddressableFilterProxyModel::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_SearchWidget_t {
    QByteArrayData data[5];
    char stringdata0[71];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SearchWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SearchWidget_t qt_meta_stringdata_SearchWidget = {
    {
QT_MOC_LITERAL(0, 0, 12), // "SearchWidget"
QT_MOC_LITERAL(1, 13, 13), // "searchChanged"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 22), // "updateSearchBoundaries"
QT_MOC_LITERAL(4, 51, 19) // "refreshSearchspaces"

    },
    "SearchWidget\0searchChanged\0\0"
    "updateSearchBoundaries\0refreshSearchspaces"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SearchWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x08 /* Private */,
       3,    0,   30,    2, 0x08 /* Private */,
       4,    0,   31,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void SearchWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SearchWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->searchChanged(); break;
        case 1: _t->updateSearchBoundaries(); break;
        case 2: _t->refreshSearchspaces(); break;
        default: ;
        }
    }
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject SearchWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<CutterDockWidget::staticMetaObject>(),
    qt_meta_stringdata_SearchWidget.data,
    qt_meta_data_SearchWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SearchWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SearchWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SearchWidget.stringdata0))
        return static_cast<void*>(this);
    return CutterDockWidget::qt_metacast(_clname);
}

int SearchWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = CutterDockWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

/****************************************************************************
** Meta object code from reading C++ file 'SectionsWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../src/widgets/SectionsWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SectionsWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SectionsModel_t {
    QByteArrayData data[1];
    char stringdata0[14];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SectionsModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SectionsModel_t qt_meta_stringdata_SectionsModel = {
    {
QT_MOC_LITERAL(0, 0, 13) // "SectionsModel"

    },
    "SectionsModel"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SectionsModel[] = {

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

void SectionsModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject SectionsModel::staticMetaObject = { {
    QMetaObject::SuperData::link<AddressableItemModel<QAbstractListModel>::staticMetaObject>(),
    qt_meta_stringdata_SectionsModel.data,
    qt_meta_data_SectionsModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SectionsModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SectionsModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SectionsModel.stringdata0))
        return static_cast<void*>(this);
    return AddressableItemModel<QAbstractListModel>::qt_metacast(_clname);
}

int SectionsModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AddressableItemModel<QAbstractListModel>::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_SectionsProxyModel_t {
    QByteArrayData data[1];
    char stringdata0[19];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SectionsProxyModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SectionsProxyModel_t qt_meta_stringdata_SectionsProxyModel = {
    {
QT_MOC_LITERAL(0, 0, 18) // "SectionsProxyModel"

    },
    "SectionsProxyModel"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SectionsProxyModel[] = {

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

void SectionsProxyModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject SectionsProxyModel::staticMetaObject = { {
    QMetaObject::SuperData::link<AddressableFilterProxyModel::staticMetaObject>(),
    qt_meta_stringdata_SectionsProxyModel.data,
    qt_meta_data_SectionsProxyModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SectionsProxyModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SectionsProxyModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SectionsProxyModel.stringdata0))
        return static_cast<void*>(this);
    return AddressableFilterProxyModel::qt_metacast(_clname);
}

int SectionsProxyModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AddressableFilterProxyModel::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_SectionsWidget_t {
    QByteArrayData data[4];
    char stringdata0[45];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SectionsWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SectionsWidget_t qt_meta_stringdata_SectionsWidget = {
    {
QT_MOC_LITERAL(0, 0, 14), // "SectionsWidget"
QT_MOC_LITERAL(1, 15, 15), // "refreshSections"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 12) // "refreshDocks"

    },
    "SectionsWidget\0refreshSections\0\0"
    "refreshDocks"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SectionsWidget[] = {

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
       1,    0,   24,    2, 0x08 /* Private */,
       3,    0,   25,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void SectionsWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SectionsWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->refreshSections(); break;
        case 1: _t->refreshDocks(); break;
        default: ;
        }
    }
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject SectionsWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<ListDockWidget::staticMetaObject>(),
    qt_meta_stringdata_SectionsWidget.data,
    qt_meta_data_SectionsWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SectionsWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SectionsWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SectionsWidget.stringdata0))
        return static_cast<void*>(this);
    return ListDockWidget::qt_metacast(_clname);
}

int SectionsWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ListDockWidget::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_AbstractAddrDock_t {
    QByteArrayData data[1];
    char stringdata0[17];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AbstractAddrDock_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AbstractAddrDock_t qt_meta_stringdata_AbstractAddrDock = {
    {
QT_MOC_LITERAL(0, 0, 16) // "AbstractAddrDock"

    },
    "AbstractAddrDock"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AbstractAddrDock[] = {

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

void AbstractAddrDock::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject AbstractAddrDock::staticMetaObject = { {
    QMetaObject::SuperData::link<QDockWidget::staticMetaObject>(),
    qt_meta_stringdata_AbstractAddrDock.data,
    qt_meta_data_AbstractAddrDock,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AbstractAddrDock::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AbstractAddrDock::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AbstractAddrDock.stringdata0))
        return static_cast<void*>(this);
    return QDockWidget::qt_metacast(_clname);
}

int AbstractAddrDock::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDockWidget::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_AddrDockScene_t {
    QByteArrayData data[1];
    char stringdata0[14];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AddrDockScene_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AddrDockScene_t qt_meta_stringdata_AddrDockScene = {
    {
QT_MOC_LITERAL(0, 0, 13) // "AddrDockScene"

    },
    "AddrDockScene"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AddrDockScene[] = {

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

void AddrDockScene::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject AddrDockScene::staticMetaObject = { {
    QMetaObject::SuperData::link<QGraphicsScene::staticMetaObject>(),
    qt_meta_stringdata_AddrDockScene.data,
    qt_meta_data_AddrDockScene,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AddrDockScene::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AddrDockScene::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AddrDockScene.stringdata0))
        return static_cast<void*>(this);
    return QGraphicsScene::qt_metacast(_clname);
}

int AddrDockScene::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsScene::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_RawAddrDock_t {
    QByteArrayData data[1];
    char stringdata0[12];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RawAddrDock_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RawAddrDock_t qt_meta_stringdata_RawAddrDock = {
    {
QT_MOC_LITERAL(0, 0, 11) // "RawAddrDock"

    },
    "RawAddrDock"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RawAddrDock[] = {

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

void RawAddrDock::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject RawAddrDock::staticMetaObject = { {
    QMetaObject::SuperData::link<AbstractAddrDock::staticMetaObject>(),
    qt_meta_stringdata_RawAddrDock.data,
    qt_meta_data_RawAddrDock,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *RawAddrDock::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RawAddrDock::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_RawAddrDock.stringdata0))
        return static_cast<void*>(this);
    return AbstractAddrDock::qt_metacast(_clname);
}

int RawAddrDock::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractAddrDock::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_VirtualAddrDock_t {
    QByteArrayData data[1];
    char stringdata0[16];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_VirtualAddrDock_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_VirtualAddrDock_t qt_meta_stringdata_VirtualAddrDock = {
    {
QT_MOC_LITERAL(0, 0, 15) // "VirtualAddrDock"

    },
    "VirtualAddrDock"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_VirtualAddrDock[] = {

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

void VirtualAddrDock::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject VirtualAddrDock::staticMetaObject = { {
    QMetaObject::SuperData::link<AbstractAddrDock::staticMetaObject>(),
    qt_meta_stringdata_VirtualAddrDock.data,
    qt_meta_data_VirtualAddrDock,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *VirtualAddrDock::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VirtualAddrDock::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_VirtualAddrDock.stringdata0))
        return static_cast<void*>(this);
    return AbstractAddrDock::qt_metacast(_clname);
}

int VirtualAddrDock::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractAddrDock::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

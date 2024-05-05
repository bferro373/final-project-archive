/****************************************************************************
** Meta object code from reading C++ file 'FlagsWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../src/widgets/FlagsWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'FlagsWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FlagsSortFilterProxyModel_t {
    QByteArrayData data[1];
    char stringdata0[26];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FlagsSortFilterProxyModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FlagsSortFilterProxyModel_t qt_meta_stringdata_FlagsSortFilterProxyModel = {
    {
QT_MOC_LITERAL(0, 0, 25) // "FlagsSortFilterProxyModel"

    },
    "FlagsSortFilterProxyModel"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FlagsSortFilterProxyModel[] = {

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

void FlagsSortFilterProxyModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject FlagsSortFilterProxyModel::staticMetaObject = { {
    QMetaObject::SuperData::link<AddressableFilterProxyModel::staticMetaObject>(),
    qt_meta_stringdata_FlagsSortFilterProxyModel.data,
    qt_meta_data_FlagsSortFilterProxyModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FlagsSortFilterProxyModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FlagsSortFilterProxyModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FlagsSortFilterProxyModel.stringdata0))
        return static_cast<void*>(this);
    return AddressableFilterProxyModel::qt_metacast(_clname);
}

int FlagsSortFilterProxyModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AddressableFilterProxyModel::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_FlagsWidget_t {
    QByteArrayData data[8];
    char stringdata0[138];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FlagsWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FlagsWidget_t qt_meta_stringdata_FlagsWidget = {
    {
QT_MOC_LITERAL(0, 0, 11), // "FlagsWidget"
QT_MOC_LITERAL(1, 12, 36), // "on_flagspaceCombo_currentText..."
QT_MOC_LITERAL(2, 49, 0), // ""
QT_MOC_LITERAL(3, 50, 4), // "arg1"
QT_MOC_LITERAL(4, 55, 25), // "on_actionRename_triggered"
QT_MOC_LITERAL(5, 81, 25), // "on_actionDelete_triggered"
QT_MOC_LITERAL(6, 107, 12), // "flagsChanged"
QT_MOC_LITERAL(7, 120, 17) // "refreshFlagspaces"

    },
    "FlagsWidget\0on_flagspaceCombo_currentTextChanged\0"
    "\0arg1\0on_actionRename_triggered\0"
    "on_actionDelete_triggered\0flagsChanged\0"
    "refreshFlagspaces"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FlagsWidget[] = {

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
       1,    1,   39,    2, 0x08 /* Private */,
       4,    0,   42,    2, 0x08 /* Private */,
       5,    0,   43,    2, 0x08 /* Private */,
       6,    0,   44,    2, 0x08 /* Private */,
       7,    0,   45,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void FlagsWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FlagsWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_flagspaceCombo_currentTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->on_actionRename_triggered(); break;
        case 2: _t->on_actionDelete_triggered(); break;
        case 3: _t->flagsChanged(); break;
        case 4: _t->refreshFlagspaces(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject FlagsWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<CutterDockWidget::staticMetaObject>(),
    qt_meta_stringdata_FlagsWidget.data,
    qt_meta_data_FlagsWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FlagsWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FlagsWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FlagsWidget.stringdata0))
        return static_cast<void*>(this);
    return CutterDockWidget::qt_metacast(_clname);
}

int FlagsWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = CutterDockWidget::qt_metacall(_c, _id, _a);
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

/****************************************************************************
** Meta object code from reading C++ file 'DebugActions.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../src/widgets/DebugActions.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DebugActions.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DebugActions_t {
    QByteArrayData data[15];
    char stringdata0[234];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DebugActions_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DebugActions_t qt_meta_stringdata_DebugActions = {
    {
QT_MOC_LITERAL(0, 0, 12), // "DebugActions"
QT_MOC_LITERAL(1, 13, 17), // "continueUntilMain"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 10), // "startDebug"
QT_MOC_LITERAL(4, 43, 19), // "attachProcessDialog"
QT_MOC_LITERAL(5, 63, 13), // "attachProcess"
QT_MOC_LITERAL(6, 77, 3), // "pid"
QT_MOC_LITERAL(7, 81, 18), // "attachRemoteDialog"
QT_MOC_LITERAL(8, 100, 20), // "attachRemoteDebugger"
QT_MOC_LITERAL(9, 121, 24), // "onAttachedRemoteDebugger"
QT_MOC_LITERAL(10, 146, 12), // "successfully"
QT_MOC_LITERAL(11, 159, 20), // "setAllActionsVisible"
QT_MOC_LITERAL(12, 180, 7), // "visible"
QT_MOC_LITERAL(13, 188, 28), // "setButtonVisibleIfMainExists"
QT_MOC_LITERAL(14, 217, 16) // "chooseThemeIcons"

    },
    "DebugActions\0continueUntilMain\0\0"
    "startDebug\0attachProcessDialog\0"
    "attachProcess\0pid\0attachRemoteDialog\0"
    "attachRemoteDebugger\0onAttachedRemoteDebugger\0"
    "successfully\0setAllActionsVisible\0"
    "visible\0setButtonVisibleIfMainExists\0"
    "chooseThemeIcons"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DebugActions[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x08 /* Private */,
       3,    0,   65,    2, 0x08 /* Private */,
       4,    0,   66,    2, 0x08 /* Private */,
       5,    1,   67,    2, 0x08 /* Private */,
       7,    0,   70,    2, 0x08 /* Private */,
       8,    0,   71,    2, 0x08 /* Private */,
       9,    1,   72,    2, 0x08 /* Private */,
      11,    1,   75,    2, 0x08 /* Private */,
      13,    0,   78,    2, 0x08 /* Private */,
      14,    0,   79,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void, QMetaType::Bool,   12,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void DebugActions::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DebugActions *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->continueUntilMain(); break;
        case 1: _t->startDebug(); break;
        case 2: _t->attachProcessDialog(); break;
        case 3: _t->attachProcess((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->attachRemoteDialog(); break;
        case 5: _t->attachRemoteDebugger(); break;
        case 6: _t->onAttachedRemoteDebugger((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->setAllActionsVisible((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->setButtonVisibleIfMainExists(); break;
        case 9: _t->chooseThemeIcons(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject DebugActions::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_DebugActions.data,
    qt_meta_data_DebugActions,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DebugActions::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DebugActions::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DebugActions.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int DebugActions::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

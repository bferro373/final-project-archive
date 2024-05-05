/****************************************************************************
** Meta object code from reading C++ file 'ConsoleWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../src/widgets/ConsoleWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ConsoleWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ConsoleWidget_t {
    QByteArrayData data[20];
    char stringdata0[308];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ConsoleWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ConsoleWidget_t qt_meta_stringdata_ConsoleWidget = {
    {
QT_MOC_LITERAL(0, 0, 13), // "ConsoleWidget"
QT_MOC_LITERAL(1, 14, 18), // "focusInputLineEdit"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 9), // "addOutput"
QT_MOC_LITERAL(4, 44, 3), // "msg"
QT_MOC_LITERAL(5, 48, 14), // "addDebugOutput"
QT_MOC_LITERAL(6, 63, 9), // "setupFont"
QT_MOC_LITERAL(7, 73, 32), // "on_rzInputLineEdit_returnPressed"
QT_MOC_LITERAL(8, 106, 37), // "on_debugeeInputLineEdit_retur..."
QT_MOC_LITERAL(9, 144, 13), // "onIndexChange"
QT_MOC_LITERAL(10, 158, 21), // "on_execButton_clicked"
QT_MOC_LITERAL(11, 180, 21), // "showCustomContextMenu"
QT_MOC_LITERAL(12, 202, 2), // "pt"
QT_MOC_LITERAL(13, 205, 11), // "historyNext"
QT_MOC_LITERAL(14, 217, 11), // "historyPrev"
QT_MOC_LITERAL(15, 229, 17), // "triggerCompletion"
QT_MOC_LITERAL(16, 247, 17), // "disableCompletion"
QT_MOC_LITERAL(17, 265, 16), // "updateCompletion"
QT_MOC_LITERAL(18, 282, 5), // "clear"
QT_MOC_LITERAL(19, 288, 19) // "processQueuedOutput"

    },
    "ConsoleWidget\0focusInputLineEdit\0\0"
    "addOutput\0msg\0addDebugOutput\0setupFont\0"
    "on_rzInputLineEdit_returnPressed\0"
    "on_debugeeInputLineEdit_returnPressed\0"
    "onIndexChange\0on_execButton_clicked\0"
    "showCustomContextMenu\0pt\0historyNext\0"
    "historyPrev\0triggerCompletion\0"
    "disableCompletion\0updateCompletion\0"
    "clear\0processQueuedOutput"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ConsoleWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   94,    2, 0x0a /* Public */,
       3,    1,   95,    2, 0x0a /* Public */,
       5,    1,   98,    2, 0x0a /* Public */,
       6,    0,  101,    2, 0x08 /* Private */,
       7,    0,  102,    2, 0x08 /* Private */,
       8,    0,  103,    2, 0x08 /* Private */,
       9,    0,  104,    2, 0x08 /* Private */,
      10,    0,  105,    2, 0x08 /* Private */,
      11,    1,  106,    2, 0x08 /* Private */,
      13,    0,  109,    2, 0x08 /* Private */,
      14,    0,  110,    2, 0x08 /* Private */,
      15,    0,  111,    2, 0x08 /* Private */,
      16,    0,  112,    2, 0x08 /* Private */,
      17,    0,  113,    2, 0x08 /* Private */,
      18,    0,  114,    2, 0x08 /* Private */,
      19,    0,  115,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ConsoleWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ConsoleWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->focusInputLineEdit(); break;
        case 1: _t->addOutput((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->addDebugOutput((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->setupFont(); break;
        case 4: _t->on_rzInputLineEdit_returnPressed(); break;
        case 5: _t->on_debugeeInputLineEdit_returnPressed(); break;
        case 6: _t->onIndexChange(); break;
        case 7: _t->on_execButton_clicked(); break;
        case 8: _t->showCustomContextMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 9: _t->historyNext(); break;
        case 10: _t->historyPrev(); break;
        case 11: _t->triggerCompletion(); break;
        case 12: _t->disableCompletion(); break;
        case 13: _t->updateCompletion(); break;
        case 14: _t->clear(); break;
        case 15: _t->processQueuedOutput(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ConsoleWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<CutterDockWidget::staticMetaObject>(),
    qt_meta_stringdata_ConsoleWidget.data,
    qt_meta_data_ConsoleWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ConsoleWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ConsoleWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ConsoleWidget.stringdata0))
        return static_cast<void*>(this);
    return CutterDockWidget::qt_metacast(_clname);
}

int ConsoleWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = CutterDockWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 16;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

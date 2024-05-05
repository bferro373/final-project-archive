/****************************************************************************
** Meta object code from reading C++ file 'GlibcHeapWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../src/widgets/GlibcHeapWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'GlibcHeapWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_GlibcHeapModel_t {
    QByteArrayData data[1];
    char stringdata0[15];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GlibcHeapModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GlibcHeapModel_t qt_meta_stringdata_GlibcHeapModel = {
    {
QT_MOC_LITERAL(0, 0, 14) // "GlibcHeapModel"

    },
    "GlibcHeapModel"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GlibcHeapModel[] = {

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

void GlibcHeapModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject GlibcHeapModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractTableModel::staticMetaObject>(),
    qt_meta_stringdata_GlibcHeapModel.data,
    qt_meta_data_GlibcHeapModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *GlibcHeapModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GlibcHeapModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GlibcHeapModel.stringdata0))
        return static_cast<void*>(this);
    return QAbstractTableModel::qt_metacast(_clname);
}

int GlibcHeapModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractTableModel::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_GlibcHeapWidget_t {
    QByteArrayData data[15];
    char stringdata0[180];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GlibcHeapWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GlibcHeapWidget_t qt_meta_stringdata_GlibcHeapWidget = {
    {
QT_MOC_LITERAL(0, 0, 15), // "GlibcHeapWidget"
QT_MOC_LITERAL(1, 16, 14), // "updateContents"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 15), // "onDoubleClicked"
QT_MOC_LITERAL(4, 48, 11), // "QModelIndex"
QT_MOC_LITERAL(5, 60, 5), // "index"
QT_MOC_LITERAL(6, 66, 15), // "onArenaSelected"
QT_MOC_LITERAL(7, 82, 19), // "customMenuRequested"
QT_MOC_LITERAL(8, 102, 3), // "pos"
QT_MOC_LITERAL(9, 106, 16), // "onCurrentChanged"
QT_MOC_LITERAL(10, 123, 7), // "current"
QT_MOC_LITERAL(11, 131, 8), // "previous"
QT_MOC_LITERAL(12, 140, 13), // "viewChunkInfo"
QT_MOC_LITERAL(13, 154, 11), // "viewBinInfo"
QT_MOC_LITERAL(14, 166, 13) // "viewArenaInfo"

    },
    "GlibcHeapWidget\0updateContents\0\0"
    "onDoubleClicked\0QModelIndex\0index\0"
    "onArenaSelected\0customMenuRequested\0"
    "pos\0onCurrentChanged\0current\0previous\0"
    "viewChunkInfo\0viewBinInfo\0viewArenaInfo"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GlibcHeapWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x08 /* Private */,
       3,    1,   55,    2, 0x08 /* Private */,
       6,    1,   58,    2, 0x08 /* Private */,
       7,    1,   61,    2, 0x08 /* Private */,
       9,    2,   64,    2, 0x08 /* Private */,
      12,    0,   69,    2, 0x08 /* Private */,
      13,    0,   70,    2, 0x08 /* Private */,
      14,    0,   71,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::QPoint,    8,
    QMetaType::Void, 0x80000000 | 4, 0x80000000 | 4,   10,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void GlibcHeapWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GlibcHeapWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->updateContents(); break;
        case 1: _t->onDoubleClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 2: _t->onArenaSelected((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->customMenuRequested((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        case 4: _t->onCurrentChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        case 5: _t->viewChunkInfo(); break;
        case 6: _t->viewBinInfo(); break;
        case 7: _t->viewArenaInfo(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject GlibcHeapWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_GlibcHeapWidget.data,
    qt_meta_data_GlibcHeapWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *GlibcHeapWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GlibcHeapWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GlibcHeapWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int GlibcHeapWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

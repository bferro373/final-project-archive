/****************************************************************************
** Meta object code from reading C++ file 'VisualNavbar.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../src/widgets/VisualNavbar.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'VisualNavbar.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_VisualNavbar_t {
    QByteArrayData data[17];
    char stringdata0[195];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_VisualNavbar_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_VisualNavbar_t qt_meta_stringdata_VisualNavbar = {
    {
QT_MOC_LITERAL(0, 0, 12), // "VisualNavbar"
QT_MOC_LITERAL(1, 13, 10), // "paintEvent"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 12), // "QPaintEvent*"
QT_MOC_LITERAL(4, 38, 5), // "event"
QT_MOC_LITERAL(5, 44, 19), // "updateGraphicsScene"
QT_MOC_LITERAL(6, 64, 17), // "fetchAndPaintData"
QT_MOC_LITERAL(7, 82, 10), // "fetchStats"
QT_MOC_LITERAL(8, 93, 14), // "drawSeekCursor"
QT_MOC_LITERAL(9, 108, 12), // "drawPCCursor"
QT_MOC_LITERAL(10, 121, 10), // "drawCursor"
QT_MOC_LITERAL(11, 132, 3), // "RVA"
QT_MOC_LITERAL(12, 136, 4), // "addr"
QT_MOC_LITERAL(13, 141, 5), // "color"
QT_MOC_LITERAL(14, 147, 19), // "QGraphicsRectItem*&"
QT_MOC_LITERAL(15, 167, 12), // "graphicsItem"
QT_MOC_LITERAL(16, 180, 14) // "on_seekChanged"

    },
    "VisualNavbar\0paintEvent\0\0QPaintEvent*\0"
    "event\0updateGraphicsScene\0fetchAndPaintData\0"
    "fetchStats\0drawSeekCursor\0drawPCCursor\0"
    "drawCursor\0RVA\0addr\0color\0QGraphicsRectItem*&\0"
    "graphicsItem\0on_seekChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_VisualNavbar[] = {

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
       1,    1,   54,    2, 0x0a /* Public */,
       5,    0,   57,    2, 0x0a /* Public */,
       6,    0,   58,    2, 0x08 /* Private */,
       7,    0,   59,    2, 0x08 /* Private */,
       8,    0,   60,    2, 0x08 /* Private */,
       9,    0,   61,    2, 0x08 /* Private */,
      10,    3,   62,    2, 0x08 /* Private */,
      16,    1,   69,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 11, QMetaType::QColor, 0x80000000 | 14,   12,   13,   15,
    QMetaType::Void, 0x80000000 | 11,   12,

       0        // eod
};

void VisualNavbar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<VisualNavbar *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->paintEvent((*reinterpret_cast< QPaintEvent*(*)>(_a[1]))); break;
        case 1: _t->updateGraphicsScene(); break;
        case 2: _t->fetchAndPaintData(); break;
        case 3: _t->fetchStats(); break;
        case 4: _t->drawSeekCursor(); break;
        case 5: _t->drawPCCursor(); break;
        case 6: _t->drawCursor((*reinterpret_cast< RVA(*)>(_a[1])),(*reinterpret_cast< QColor(*)>(_a[2])),(*reinterpret_cast< QGraphicsRectItem*(*)>(_a[3]))); break;
        case 7: _t->on_seekChanged((*reinterpret_cast< RVA(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject VisualNavbar::staticMetaObject = { {
    QMetaObject::SuperData::link<QToolBar::staticMetaObject>(),
    qt_meta_stringdata_VisualNavbar.data,
    qt_meta_data_VisualNavbar,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *VisualNavbar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VisualNavbar::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_VisualNavbar.stringdata0))
        return static_cast<void*>(this);
    return QToolBar::qt_metacast(_clname);
}

int VisualNavbar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QToolBar::qt_metacall(_c, _id, _a);
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

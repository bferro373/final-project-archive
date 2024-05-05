/****************************************************************************
** Meta object code from reading C++ file 'CutterGraphView.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../src/widgets/CutterGraphView.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CutterGraphView.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CutterGraphView_t {
    QByteArrayData data[18];
    char stringdata0[190];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CutterGraphView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CutterGraphView_t qt_meta_stringdata_CutterGraphView = {
    {
QT_MOC_LITERAL(0, 0, 15), // "CutterGraphView"
QT_MOC_LITERAL(1, 16, 13), // "viewRefreshed"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 10), // "viewZoomed"
QT_MOC_LITERAL(4, 42, 10), // "graphMoved"
QT_MOC_LITERAL(5, 53, 7), // "resized"
QT_MOC_LITERAL(6, 61, 11), // "refreshView"
QT_MOC_LITERAL(7, 73, 12), // "updateColors"
QT_MOC_LITERAL(8, 86, 16), // "fontsUpdatedSlot"
QT_MOC_LITERAL(9, 103, 4), // "zoom"
QT_MOC_LITERAL(10, 108, 16), // "mouseRelativePos"
QT_MOC_LITERAL(11, 125, 8), // "velocity"
QT_MOC_LITERAL(12, 134, 7), // "setZoom"
QT_MOC_LITERAL(13, 142, 5), // "scale"
QT_MOC_LITERAL(14, 148, 6), // "zoomIn"
QT_MOC_LITERAL(15, 155, 7), // "zoomOut"
QT_MOC_LITERAL(16, 163, 9), // "zoomReset"
QT_MOC_LITERAL(17, 173, 16) // "showExportDialog"

    },
    "CutterGraphView\0viewRefreshed\0\0"
    "viewZoomed\0graphMoved\0resized\0refreshView\0"
    "updateColors\0fontsUpdatedSlot\0zoom\0"
    "mouseRelativePos\0velocity\0setZoom\0"
    "scale\0zoomIn\0zoomOut\0zoomReset\0"
    "showExportDialog"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CutterGraphView[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x06 /* Public */,
       3,    0,   80,    2, 0x06 /* Public */,
       4,    0,   81,    2, 0x06 /* Public */,
       5,    0,   82,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   83,    2, 0x0a /* Public */,
       7,    0,   84,    2, 0x0a /* Public */,
       8,    0,   85,    2, 0x0a /* Public */,
       9,    2,   86,    2, 0x0a /* Public */,
      12,    2,   91,    2, 0x0a /* Public */,
      14,    0,   96,    2, 0x0a /* Public */,
      15,    0,   97,    2, 0x0a /* Public */,
      16,    0,   98,    2, 0x0a /* Public */,
      17,    0,   99,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPointF, QMetaType::Double,   10,   11,
    QMetaType::Void, QMetaType::QPointF, QMetaType::Double,   10,   13,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void CutterGraphView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CutterGraphView *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->viewRefreshed(); break;
        case 1: _t->viewZoomed(); break;
        case 2: _t->graphMoved(); break;
        case 3: _t->resized(); break;
        case 4: _t->refreshView(); break;
        case 5: _t->updateColors(); break;
        case 6: _t->fontsUpdatedSlot(); break;
        case 7: _t->zoom((*reinterpret_cast< QPointF(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 8: _t->setZoom((*reinterpret_cast< QPointF(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 9: _t->zoomIn(); break;
        case 10: _t->zoomOut(); break;
        case 11: _t->zoomReset(); break;
        case 12: _t->showExportDialog(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (CutterGraphView::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CutterGraphView::viewRefreshed)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (CutterGraphView::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CutterGraphView::viewZoomed)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (CutterGraphView::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CutterGraphView::graphMoved)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (CutterGraphView::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CutterGraphView::resized)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject CutterGraphView::staticMetaObject = { {
    QMetaObject::SuperData::link<GraphView::staticMetaObject>(),
    qt_meta_stringdata_CutterGraphView.data,
    qt_meta_data_CutterGraphView,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *CutterGraphView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CutterGraphView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CutterGraphView.stringdata0))
        return static_cast<void*>(this);
    return GraphView::qt_metacast(_clname);
}

int CutterGraphView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = GraphView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void CutterGraphView::viewRefreshed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void CutterGraphView::viewZoomed()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void CutterGraphView::graphMoved()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void CutterGraphView::resized()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

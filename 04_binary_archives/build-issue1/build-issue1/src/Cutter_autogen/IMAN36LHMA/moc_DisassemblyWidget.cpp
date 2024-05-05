/****************************************************************************
** Meta object code from reading C++ file 'DisassemblyWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../src/widgets/DisassemblyWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DisassemblyWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DisassemblyWidget_t {
    QByteArrayData data[27];
    char stringdata0[382];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DisassemblyWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DisassemblyWidget_t qt_meta_stringdata_DisassemblyWidget = {
    {
QT_MOC_LITERAL(0, 0, 17), // "DisassemblyWidget"
QT_MOC_LITERAL(1, 18, 20), // "highlightCurrentLine"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 15), // "highlightPCLine"
QT_MOC_LITERAL(4, 56, 20), // "showDisasContextMenu"
QT_MOC_LITERAL(5, 77, 2), // "pt"
QT_MOC_LITERAL(6, 80, 16), // "fontsUpdatedSlot"
QT_MOC_LITERAL(7, 97, 17), // "colorsUpdatedSlot"
QT_MOC_LITERAL(8, 115, 18), // "scrollInstructions"
QT_MOC_LITERAL(9, 134, 5), // "count"
QT_MOC_LITERAL(10, 140, 8), // "seekPrev"
QT_MOC_LITERAL(11, 149, 14), // "setPreviewMode"
QT_MOC_LITERAL(12, 164, 11), // "previewMode"
QT_MOC_LITERAL(13, 176, 14), // "getFontMetrics"
QT_MOC_LITERAL(14, 191, 12), // "QFontMetrics"
QT_MOC_LITERAL(15, 204, 8), // "getLines"
QT_MOC_LITERAL(16, 213, 22), // "QList<DisassemblyLine>"
QT_MOC_LITERAL(17, 236, 14), // "on_seekChanged"
QT_MOC_LITERAL(18, 251, 3), // "RVA"
QT_MOC_LITERAL(19, 255, 6), // "offset"
QT_MOC_LITERAL(20, 262, 27), // "CutterCore::SeekHistoryType"
QT_MOC_LITERAL(21, 290, 4), // "type"
QT_MOC_LITERAL(22, 295, 16), // "refreshIfInRange"
QT_MOC_LITERAL(23, 312, 18), // "instructionChanged"
QT_MOC_LITERAL(24, 331, 13), // "refreshDisasm"
QT_MOC_LITERAL(25, 345, 14), // "updateMaxLines"
QT_MOC_LITERAL(26, 360, 21) // "cursorPositionChanged"

    },
    "DisassemblyWidget\0highlightCurrentLine\0"
    "\0highlightPCLine\0showDisasContextMenu\0"
    "pt\0fontsUpdatedSlot\0colorsUpdatedSlot\0"
    "scrollInstructions\0count\0seekPrev\0"
    "setPreviewMode\0previewMode\0getFontMetrics\0"
    "QFontMetrics\0getLines\0QList<DisassemblyLine>\0"
    "on_seekChanged\0RVA\0offset\0"
    "CutterCore::SeekHistoryType\0type\0"
    "refreshIfInRange\0instructionChanged\0"
    "refreshDisasm\0updateMaxLines\0"
    "cursorPositionChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DisassemblyWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   99,    2, 0x0a /* Public */,
       3,    0,  100,    2, 0x0a /* Public */,
       4,    1,  101,    2, 0x0a /* Public */,
       6,    0,  104,    2, 0x0a /* Public */,
       7,    0,  105,    2, 0x0a /* Public */,
       8,    1,  106,    2, 0x0a /* Public */,
      10,    0,  109,    2, 0x0a /* Public */,
      11,    1,  110,    2, 0x0a /* Public */,
      13,    0,  113,    2, 0x0a /* Public */,
      15,    0,  114,    2, 0x0a /* Public */,
      17,    2,  115,    2, 0x09 /* Protected */,
      22,    1,  120,    2, 0x09 /* Protected */,
      23,    1,  123,    2, 0x09 /* Protected */,
      24,    1,  126,    2, 0x09 /* Protected */,
      24,    0,  129,    2, 0x29 /* Protected | MethodCloned */,
      25,    0,  130,    2, 0x09 /* Protected */,
      26,    0,  131,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   12,
    0x80000000 | 14,
    0x80000000 | 16,
    QMetaType::Void, 0x80000000 | 18, 0x80000000 | 20,   19,   21,
    QMetaType::Void, 0x80000000 | 18,   19,
    QMetaType::Void, 0x80000000 | 18,   19,
    QMetaType::Void, 0x80000000 | 18,   19,
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Void,

       0        // eod
};

void DisassemblyWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DisassemblyWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->highlightCurrentLine(); break;
        case 1: _t->highlightPCLine(); break;
        case 2: _t->showDisasContextMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 3: _t->fontsUpdatedSlot(); break;
        case 4: _t->colorsUpdatedSlot(); break;
        case 5: _t->scrollInstructions((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->seekPrev(); break;
        case 7: _t->setPreviewMode((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: { QFontMetrics _r = _t->getFontMetrics();
            if (_a[0]) *reinterpret_cast< QFontMetrics*>(_a[0]) = std::move(_r); }  break;
        case 9: { QList<DisassemblyLine> _r = _t->getLines();
            if (_a[0]) *reinterpret_cast< QList<DisassemblyLine>*>(_a[0]) = std::move(_r); }  break;
        case 10: _t->on_seekChanged((*reinterpret_cast< RVA(*)>(_a[1])),(*reinterpret_cast< CutterCore::SeekHistoryType(*)>(_a[2]))); break;
        case 11: _t->refreshIfInRange((*reinterpret_cast< RVA(*)>(_a[1]))); break;
        case 12: _t->instructionChanged((*reinterpret_cast< RVA(*)>(_a[1]))); break;
        case 13: _t->refreshDisasm((*reinterpret_cast< RVA(*)>(_a[1]))); break;
        case 14: _t->refreshDisasm(); break;
        case 15: { bool _r = _t->updateMaxLines();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 16: _t->cursorPositionChanged(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject DisassemblyWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<MemoryDockWidget::staticMetaObject>(),
    qt_meta_stringdata_DisassemblyWidget.data,
    qt_meta_data_DisassemblyWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DisassemblyWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DisassemblyWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DisassemblyWidget.stringdata0))
        return static_cast<void*>(this);
    return MemoryDockWidget::qt_metacast(_clname);
}

int DisassemblyWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = MemoryDockWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 17;
    }
    return _id;
}
struct qt_meta_stringdata_DisassemblyScrollArea_t {
    QByteArrayData data[5];
    char stringdata0[60];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DisassemblyScrollArea_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DisassemblyScrollArea_t qt_meta_stringdata_DisassemblyScrollArea = {
    {
QT_MOC_LITERAL(0, 0, 21), // "DisassemblyScrollArea"
QT_MOC_LITERAL(1, 22, 11), // "scrollLines"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 5), // "lines"
QT_MOC_LITERAL(4, 41, 18) // "disassemblyResized"

    },
    "DisassemblyScrollArea\0scrollLines\0\0"
    "lines\0disassemblyResized"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DisassemblyScrollArea[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,
       4,    0,   27,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,

       0        // eod
};

void DisassemblyScrollArea::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DisassemblyScrollArea *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->scrollLines((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->disassemblyResized(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DisassemblyScrollArea::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DisassemblyScrollArea::scrollLines)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (DisassemblyScrollArea::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DisassemblyScrollArea::disassemblyResized)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject DisassemblyScrollArea::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractScrollArea::staticMetaObject>(),
    qt_meta_stringdata_DisassemblyScrollArea.data,
    qt_meta_data_DisassemblyScrollArea,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DisassemblyScrollArea::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DisassemblyScrollArea::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DisassemblyScrollArea.stringdata0))
        return static_cast<void*>(this);
    return QAbstractScrollArea::qt_metacast(_clname);
}

int DisassemblyScrollArea::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractScrollArea::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void DisassemblyScrollArea::scrollLines(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void DisassemblyScrollArea::disassemblyResized()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
struct qt_meta_stringdata_DisassemblyTextEdit_t {
    QByteArrayData data[1];
    char stringdata0[20];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DisassemblyTextEdit_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DisassemblyTextEdit_t qt_meta_stringdata_DisassemblyTextEdit = {
    {
QT_MOC_LITERAL(0, 0, 19) // "DisassemblyTextEdit"

    },
    "DisassemblyTextEdit"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DisassemblyTextEdit[] = {

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

void DisassemblyTextEdit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject DisassemblyTextEdit::staticMetaObject = { {
    QMetaObject::SuperData::link<QPlainTextEdit::staticMetaObject>(),
    qt_meta_stringdata_DisassemblyTextEdit.data,
    qt_meta_data_DisassemblyTextEdit,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DisassemblyTextEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DisassemblyTextEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DisassemblyTextEdit.stringdata0))
        return static_cast<void*>(this);
    return QPlainTextEdit::qt_metacast(_clname);
}

int DisassemblyTextEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QPlainTextEdit::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

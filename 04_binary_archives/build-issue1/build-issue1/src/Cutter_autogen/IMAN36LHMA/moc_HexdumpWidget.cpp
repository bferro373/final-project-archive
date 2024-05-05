/****************************************************************************
** Meta object code from reading C++ file 'HexdumpWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../src/widgets/HexdumpWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'HexdumpWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_HexdumpWidget_t {
    QByteArrayData data[21];
    char stringdata0[397];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_HexdumpWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_HexdumpWidget_t qt_meta_stringdata_HexdumpWidget = {
    {
QT_MOC_LITERAL(0, 0, 13), // "HexdumpWidget"
QT_MOC_LITERAL(1, 14, 11), // "initParsing"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 13), // "onSeekChanged"
QT_MOC_LITERAL(4, 41, 3), // "RVA"
QT_MOC_LITERAL(5, 45, 4), // "addr"
QT_MOC_LITERAL(6, 50, 16), // "selectionChanged"
QT_MOC_LITERAL(7, 67, 20), // "HexWidget::Selection"
QT_MOC_LITERAL(8, 88, 9), // "selection"
QT_MOC_LITERAL(9, 98, 39), // "on_parseArchComboBox_currentT..."
QT_MOC_LITERAL(10, 138, 4), // "arg1"
QT_MOC_LITERAL(11, 143, 39), // "on_parseBitsComboBox_currentT..."
QT_MOC_LITERAL(12, 183, 39), // "on_parseTypeComboBox_currentT..."
QT_MOC_LITERAL(13, 223, 41), // "on_parseEndianComboBox_curren..."
QT_MOC_LITERAL(14, 265, 12), // "fontsUpdated"
QT_MOC_LITERAL(15, 278, 30), // "on_hexSideTab_2_currentChanged"
QT_MOC_LITERAL(16, 309, 5), // "index"
QT_MOC_LITERAL(17, 315, 18), // "on_copyMD5_clicked"
QT_MOC_LITERAL(18, 334, 19), // "on_copySHA1_clicked"
QT_MOC_LITERAL(19, 354, 21), // "on_copySHA256_clicked"
QT_MOC_LITERAL(20, 376, 20) // "on_copyCRC32_clicked"

    },
    "HexdumpWidget\0initParsing\0\0onSeekChanged\0"
    "RVA\0addr\0selectionChanged\0"
    "HexWidget::Selection\0selection\0"
    "on_parseArchComboBox_currentTextChanged\0"
    "arg1\0on_parseBitsComboBox_currentTextChanged\0"
    "on_parseTypeComboBox_currentTextChanged\0"
    "on_parseEndianComboBox_currentTextChanged\0"
    "fontsUpdated\0on_hexSideTab_2_currentChanged\0"
    "index\0on_copyMD5_clicked\0on_copySHA1_clicked\0"
    "on_copySHA256_clicked\0on_copyCRC32_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_HexdumpWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x0a /* Public */,
       3,    1,   80,    2, 0x08 /* Private */,
       6,    1,   83,    2, 0x08 /* Private */,
       9,    1,   86,    2, 0x08 /* Private */,
      11,    1,   89,    2, 0x08 /* Private */,
      12,    1,   92,    2, 0x08 /* Private */,
      13,    1,   95,    2, 0x08 /* Private */,
      14,    0,   98,    2, 0x08 /* Private */,
      15,    1,   99,    2, 0x08 /* Private */,
      17,    0,  102,    2, 0x08 /* Private */,
      18,    0,  103,    2, 0x08 /* Private */,
      19,    0,  104,    2, 0x08 /* Private */,
      20,    0,  105,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   16,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void HexdumpWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<HexdumpWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->initParsing(); break;
        case 1: _t->onSeekChanged((*reinterpret_cast< RVA(*)>(_a[1]))); break;
        case 2: _t->selectionChanged((*reinterpret_cast< HexWidget::Selection(*)>(_a[1]))); break;
        case 3: _t->on_parseArchComboBox_currentTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->on_parseBitsComboBox_currentTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->on_parseTypeComboBox_currentTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->on_parseEndianComboBox_currentTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->fontsUpdated(); break;
        case 8: _t->on_hexSideTab_2_currentChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->on_copyMD5_clicked(); break;
        case 10: _t->on_copySHA1_clicked(); break;
        case 11: _t->on_copySHA256_clicked(); break;
        case 12: _t->on_copyCRC32_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject HexdumpWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<MemoryDockWidget::staticMetaObject>(),
    qt_meta_stringdata_HexdumpWidget.data,
    qt_meta_data_HexdumpWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *HexdumpWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HexdumpWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_HexdumpWidget.stringdata0))
        return static_cast<void*>(this);
    return MemoryDockWidget::qt_metacast(_clname);
}

int HexdumpWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = MemoryDockWidget::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE

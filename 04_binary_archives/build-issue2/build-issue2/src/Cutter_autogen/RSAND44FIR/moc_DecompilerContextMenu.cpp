/****************************************************************************
** Meta object code from reading C++ file 'DecompilerContextMenu.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../src/menus/DecompilerContextMenu.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DecompilerContextMenu.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DecompilerContextMenu_t {
    QByteArrayData data[30];
    char stringdata0[614];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DecompilerContextMenu_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DecompilerContextMenu_t qt_meta_stringdata_DecompilerContextMenu = {
    {
QT_MOC_LITERAL(0, 0, 21), // "DecompilerContextMenu"
QT_MOC_LITERAL(1, 22, 4), // "copy"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 21), // "setCurHighlightedWord"
QT_MOC_LITERAL(4, 50, 4), // "word"
QT_MOC_LITERAL(5, 55, 9), // "setOffset"
QT_MOC_LITERAL(6, 65, 3), // "RVA"
QT_MOC_LITERAL(7, 69, 9), // "newOffset"
QT_MOC_LITERAL(8, 79, 28), // "setDecompiledFunctionAddress"
QT_MOC_LITERAL(9, 108, 12), // "functionAddr"
QT_MOC_LITERAL(10, 121, 20), // "setFirstOffsetInLine"
QT_MOC_LITERAL(11, 142, 11), // "firstOffset"
QT_MOC_LITERAL(12, 154, 23), // "setAvailableBreakpoints"
QT_MOC_LITERAL(13, 178, 12), // "QVector<RVA>"
QT_MOC_LITERAL(14, 191, 10), // "offsetList"
QT_MOC_LITERAL(15, 202, 15), // "aboutToShowSlot"
QT_MOC_LITERAL(16, 218, 15), // "aboutToHideSlot"
QT_MOC_LITERAL(17, 234, 19), // "actionCopyTriggered"
QT_MOC_LITERAL(18, 254, 37), // "actionCopyInstructionAddressT..."
QT_MOC_LITERAL(19, 292, 35), // "actionCopyReferenceAddressTri..."
QT_MOC_LITERAL(20, 328, 25), // "actionAddCommentTriggered"
QT_MOC_LITERAL(21, 354, 28), // "actionDeleteCommentTriggered"
QT_MOC_LITERAL(22, 383, 30), // "actionRenameThingHereTriggered"
QT_MOC_LITERAL(23, 414, 25), // "actionDeleteNameTriggered"
QT_MOC_LITERAL(24, 440, 36), // "actionEditFunctionVariablesTr..."
QT_MOC_LITERAL(25, 477, 20), // "actionXRefsTriggered"
QT_MOC_LITERAL(26, 498, 31), // "actionToggleBreakpointTriggered"
QT_MOC_LITERAL(27, 530, 33), // "actionAdvancedBreakpointTrigg..."
QT_MOC_LITERAL(28, 564, 28), // "actionContinueUntilTriggered"
QT_MOC_LITERAL(29, 593, 20) // "actionSetPCTriggered"

    },
    "DecompilerContextMenu\0copy\0\0"
    "setCurHighlightedWord\0word\0setOffset\0"
    "RVA\0newOffset\0setDecompiledFunctionAddress\0"
    "functionAddr\0setFirstOffsetInLine\0"
    "firstOffset\0setAvailableBreakpoints\0"
    "QVector<RVA>\0offsetList\0aboutToShowSlot\0"
    "aboutToHideSlot\0actionCopyTriggered\0"
    "actionCopyInstructionAddressTriggered\0"
    "actionCopyReferenceAddressTriggered\0"
    "actionAddCommentTriggered\0"
    "actionDeleteCommentTriggered\0"
    "actionRenameThingHereTriggered\0"
    "actionDeleteNameTriggered\0"
    "actionEditFunctionVariablesTriggered\0"
    "actionXRefsTriggered\0"
    "actionToggleBreakpointTriggered\0"
    "actionAdvancedBreakpointTriggered\0"
    "actionContinueUntilTriggered\0"
    "actionSetPCTriggered"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DecompilerContextMenu[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      21,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  119,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,  120,    2, 0x0a /* Public */,
       5,    1,  123,    2, 0x0a /* Public */,
       8,    1,  126,    2, 0x0a /* Public */,
      10,    1,  129,    2, 0x0a /* Public */,
      12,    1,  132,    2, 0x0a /* Public */,
      15,    0,  135,    2, 0x08 /* Private */,
      16,    0,  136,    2, 0x08 /* Private */,
      17,    0,  137,    2, 0x08 /* Private */,
      18,    0,  138,    2, 0x08 /* Private */,
      19,    0,  139,    2, 0x08 /* Private */,
      20,    0,  140,    2, 0x08 /* Private */,
      21,    0,  141,    2, 0x08 /* Private */,
      22,    0,  142,    2, 0x08 /* Private */,
      23,    0,  143,    2, 0x08 /* Private */,
      24,    0,  144,    2, 0x08 /* Private */,
      25,    0,  145,    2, 0x08 /* Private */,
      26,    0,  146,    2, 0x08 /* Private */,
      27,    0,  147,    2, 0x08 /* Private */,
      28,    0,  148,    2, 0x08 /* Private */,
      29,    0,  149,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 6,    9,
    QMetaType::Void, 0x80000000 | 6,   11,
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void DecompilerContextMenu::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DecompilerContextMenu *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->copy(); break;
        case 1: _t->setCurHighlightedWord((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->setOffset((*reinterpret_cast< RVA(*)>(_a[1]))); break;
        case 3: _t->setDecompiledFunctionAddress((*reinterpret_cast< RVA(*)>(_a[1]))); break;
        case 4: _t->setFirstOffsetInLine((*reinterpret_cast< RVA(*)>(_a[1]))); break;
        case 5: _t->setAvailableBreakpoints((*reinterpret_cast< QVector<RVA>(*)>(_a[1]))); break;
        case 6: _t->aboutToShowSlot(); break;
        case 7: _t->aboutToHideSlot(); break;
        case 8: _t->actionCopyTriggered(); break;
        case 9: _t->actionCopyInstructionAddressTriggered(); break;
        case 10: _t->actionCopyReferenceAddressTriggered(); break;
        case 11: _t->actionAddCommentTriggered(); break;
        case 12: _t->actionDeleteCommentTriggered(); break;
        case 13: _t->actionRenameThingHereTriggered(); break;
        case 14: _t->actionDeleteNameTriggered(); break;
        case 15: _t->actionEditFunctionVariablesTriggered(); break;
        case 16: _t->actionXRefsTriggered(); break;
        case 17: _t->actionToggleBreakpointTriggered(); break;
        case 18: _t->actionAdvancedBreakpointTriggered(); break;
        case 19: _t->actionContinueUntilTriggered(); break;
        case 20: _t->actionSetPCTriggered(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DecompilerContextMenu::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DecompilerContextMenu::copy)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject DecompilerContextMenu::staticMetaObject = { {
    QMetaObject::SuperData::link<QMenu::staticMetaObject>(),
    qt_meta_stringdata_DecompilerContextMenu.data,
    qt_meta_data_DecompilerContextMenu,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DecompilerContextMenu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DecompilerContextMenu::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DecompilerContextMenu.stringdata0))
        return static_cast<void*>(this);
    return QMenu::qt_metacast(_clname);
}

int DecompilerContextMenu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMenu::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 21)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 21;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 21)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 21;
    }
    return _id;
}

// SIGNAL 0
void DecompilerContextMenu::copy()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

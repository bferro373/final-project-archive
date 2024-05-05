/****************************************************************************
** Meta object code from reading C++ file 'DisassemblyContextMenu.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../src/menus/DisassemblyContextMenu.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DisassemblyContextMenu.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DisassemblyContextMenu_t {
    QByteArrayData data[45];
    char stringdata0[1126];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DisassemblyContextMenu_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DisassemblyContextMenu_t qt_meta_stringdata_DisassemblyContextMenu = {
    {
QT_MOC_LITERAL(0, 0, 22), // "DisassemblyContextMenu"
QT_MOC_LITERAL(1, 23, 4), // "copy"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 9), // "setOffset"
QT_MOC_LITERAL(4, 39, 3), // "RVA"
QT_MOC_LITERAL(5, 43, 6), // "offset"
QT_MOC_LITERAL(6, 50, 10), // "setCanCopy"
QT_MOC_LITERAL(7, 61, 7), // "enabled"
QT_MOC_LITERAL(8, 69, 21), // "setCurHighlightedWord"
QT_MOC_LITERAL(9, 91, 4), // "text"
QT_MOC_LITERAL(10, 96, 15), // "aboutToShowSlot"
QT_MOC_LITERAL(11, 112, 15), // "aboutToHideSlot"
QT_MOC_LITERAL(12, 128, 31), // "on_actionEditFunction_triggered"
QT_MOC_LITERAL(13, 160, 34), // "on_actionEditInstruction_trig..."
QT_MOC_LITERAL(14, 195, 33), // "on_actionNopInstruction_trigg..."
QT_MOC_LITERAL(15, 229, 29), // "on_actionJmpReverse_triggered"
QT_MOC_LITERAL(16, 259, 28), // "on_actionEditBytes_triggered"
QT_MOC_LITERAL(17, 288, 19), // "showReverseJmpQuery"
QT_MOC_LITERAL(18, 308, 23), // "on_actionCopy_triggered"
QT_MOC_LITERAL(19, 332, 27), // "on_actionCopyAddr_triggered"
QT_MOC_LITERAL(20, 360, 33), // "on_actionCopyInstrBytes_trigg..."
QT_MOC_LITERAL(21, 394, 29), // "on_actionAddComment_triggered"
QT_MOC_LITERAL(22, 424, 34), // "on_actionAnalyzeFunction_trig..."
QT_MOC_LITERAL(23, 459, 25), // "on_actionRename_triggered"
QT_MOC_LITERAL(24, 485, 28), // "on_actionGlobalVar_triggered"
QT_MOC_LITERAL(25, 514, 38), // "on_actionSetFunctionVarTypes_..."
QT_MOC_LITERAL(26, 553, 24), // "on_actionXRefs_triggered"
QT_MOC_LITERAL(27, 578, 36), // "on_actionXRefsForVariables_tr..."
QT_MOC_LITERAL(28, 615, 33), // "on_actionDisplayOptions_trigg..."
QT_MOC_LITERAL(29, 649, 32), // "on_actionDeleteComment_triggered"
QT_MOC_LITERAL(30, 682, 29), // "on_actionDeleteFlag_triggered"
QT_MOC_LITERAL(31, 712, 33), // "on_actionDeleteFunction_trigg..."
QT_MOC_LITERAL(32, 746, 32), // "on_actionAddBreakpoint_triggered"
QT_MOC_LITERAL(33, 779, 37), // "on_actionAdvancedBreakpoint_t..."
QT_MOC_LITERAL(34, 817, 32), // "on_actionContinueUntil_triggered"
QT_MOC_LITERAL(35, 850, 24), // "on_actionSetPC_triggered"
QT_MOC_LITERAL(36, 875, 28), // "on_actionSetToCode_triggered"
QT_MOC_LITERAL(37, 904, 30), // "on_actionSetAsString_triggered"
QT_MOC_LITERAL(38, 935, 36), // "on_actionSetAsStringRemove_tr..."
QT_MOC_LITERAL(39, 972, 38), // "on_actionSetAsStringAdvanced_..."
QT_MOC_LITERAL(40, 1011, 28), // "on_actionSetToData_triggered"
QT_MOC_LITERAL(41, 1040, 30), // "on_actionSetToDataEx_triggered"
QT_MOC_LITERAL(42, 1071, 38), // "on_actionStructureOffsetMenu_..."
QT_MOC_LITERAL(43, 1110, 8), // "QAction*"
QT_MOC_LITERAL(44, 1119, 6) // "action"

    },
    "DisassemblyContextMenu\0copy\0\0setOffset\0"
    "RVA\0offset\0setCanCopy\0enabled\0"
    "setCurHighlightedWord\0text\0aboutToShowSlot\0"
    "aboutToHideSlot\0on_actionEditFunction_triggered\0"
    "on_actionEditInstruction_triggered\0"
    "on_actionNopInstruction_triggered\0"
    "on_actionJmpReverse_triggered\0"
    "on_actionEditBytes_triggered\0"
    "showReverseJmpQuery\0on_actionCopy_triggered\0"
    "on_actionCopyAddr_triggered\0"
    "on_actionCopyInstrBytes_triggered\0"
    "on_actionAddComment_triggered\0"
    "on_actionAnalyzeFunction_triggered\0"
    "on_actionRename_triggered\0"
    "on_actionGlobalVar_triggered\0"
    "on_actionSetFunctionVarTypes_triggered\0"
    "on_actionXRefs_triggered\0"
    "on_actionXRefsForVariables_triggered\0"
    "on_actionDisplayOptions_triggered\0"
    "on_actionDeleteComment_triggered\0"
    "on_actionDeleteFlag_triggered\0"
    "on_actionDeleteFunction_triggered\0"
    "on_actionAddBreakpoint_triggered\0"
    "on_actionAdvancedBreakpoint_triggered\0"
    "on_actionContinueUntil_triggered\0"
    "on_actionSetPC_triggered\0"
    "on_actionSetToCode_triggered\0"
    "on_actionSetAsString_triggered\0"
    "on_actionSetAsStringRemove_triggered\0"
    "on_actionSetAsStringAdvanced_triggered\0"
    "on_actionSetToData_triggered\0"
    "on_actionSetToDataEx_triggered\0"
    "on_actionStructureOffsetMenu_triggered\0"
    "QAction*\0action"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DisassemblyContextMenu[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      37,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  199,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,  200,    2, 0x0a /* Public */,
       6,    1,  203,    2, 0x0a /* Public */,
       8,    1,  206,    2, 0x0a /* Public */,
      10,    0,  209,    2, 0x08 /* Private */,
      11,    0,  210,    2, 0x08 /* Private */,
      12,    0,  211,    2, 0x08 /* Private */,
      13,    0,  212,    2, 0x08 /* Private */,
      14,    0,  213,    2, 0x08 /* Private */,
      15,    0,  214,    2, 0x08 /* Private */,
      16,    0,  215,    2, 0x08 /* Private */,
      17,    0,  216,    2, 0x08 /* Private */,
      18,    0,  217,    2, 0x08 /* Private */,
      19,    0,  218,    2, 0x08 /* Private */,
      20,    0,  219,    2, 0x08 /* Private */,
      21,    0,  220,    2, 0x08 /* Private */,
      22,    0,  221,    2, 0x08 /* Private */,
      23,    0,  222,    2, 0x08 /* Private */,
      24,    0,  223,    2, 0x08 /* Private */,
      25,    0,  224,    2, 0x08 /* Private */,
      26,    0,  225,    2, 0x08 /* Private */,
      27,    0,  226,    2, 0x08 /* Private */,
      28,    0,  227,    2, 0x08 /* Private */,
      29,    0,  228,    2, 0x08 /* Private */,
      30,    0,  229,    2, 0x08 /* Private */,
      31,    0,  230,    2, 0x08 /* Private */,
      32,    0,  231,    2, 0x08 /* Private */,
      33,    0,  232,    2, 0x08 /* Private */,
      34,    0,  233,    2, 0x08 /* Private */,
      35,    0,  234,    2, 0x08 /* Private */,
      36,    0,  235,    2, 0x08 /* Private */,
      37,    0,  236,    2, 0x08 /* Private */,
      38,    0,  237,    2, 0x08 /* Private */,
      39,    0,  238,    2, 0x08 /* Private */,
      40,    0,  239,    2, 0x08 /* Private */,
      41,    0,  240,    2, 0x08 /* Private */,
      42,    1,  241,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, QMetaType::QString,    9,
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
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 43,   44,

       0        // eod
};

void DisassemblyContextMenu::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DisassemblyContextMenu *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->copy(); break;
        case 1: _t->setOffset((*reinterpret_cast< RVA(*)>(_a[1]))); break;
        case 2: _t->setCanCopy((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->setCurHighlightedWord((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->aboutToShowSlot(); break;
        case 5: _t->aboutToHideSlot(); break;
        case 6: _t->on_actionEditFunction_triggered(); break;
        case 7: _t->on_actionEditInstruction_triggered(); break;
        case 8: _t->on_actionNopInstruction_triggered(); break;
        case 9: _t->on_actionJmpReverse_triggered(); break;
        case 10: _t->on_actionEditBytes_triggered(); break;
        case 11: _t->showReverseJmpQuery(); break;
        case 12: _t->on_actionCopy_triggered(); break;
        case 13: _t->on_actionCopyAddr_triggered(); break;
        case 14: _t->on_actionCopyInstrBytes_triggered(); break;
        case 15: _t->on_actionAddComment_triggered(); break;
        case 16: _t->on_actionAnalyzeFunction_triggered(); break;
        case 17: _t->on_actionRename_triggered(); break;
        case 18: _t->on_actionGlobalVar_triggered(); break;
        case 19: _t->on_actionSetFunctionVarTypes_triggered(); break;
        case 20: _t->on_actionXRefs_triggered(); break;
        case 21: _t->on_actionXRefsForVariables_triggered(); break;
        case 22: _t->on_actionDisplayOptions_triggered(); break;
        case 23: _t->on_actionDeleteComment_triggered(); break;
        case 24: _t->on_actionDeleteFlag_triggered(); break;
        case 25: _t->on_actionDeleteFunction_triggered(); break;
        case 26: _t->on_actionAddBreakpoint_triggered(); break;
        case 27: _t->on_actionAdvancedBreakpoint_triggered(); break;
        case 28: _t->on_actionContinueUntil_triggered(); break;
        case 29: _t->on_actionSetPC_triggered(); break;
        case 30: _t->on_actionSetToCode_triggered(); break;
        case 31: _t->on_actionSetAsString_triggered(); break;
        case 32: _t->on_actionSetAsStringRemove_triggered(); break;
        case 33: _t->on_actionSetAsStringAdvanced_triggered(); break;
        case 34: _t->on_actionSetToData_triggered(); break;
        case 35: _t->on_actionSetToDataEx_triggered(); break;
        case 36: _t->on_actionStructureOffsetMenu_triggered((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 36:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAction* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DisassemblyContextMenu::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DisassemblyContextMenu::copy)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject DisassemblyContextMenu::staticMetaObject = { {
    QMetaObject::SuperData::link<QMenu::staticMetaObject>(),
    qt_meta_stringdata_DisassemblyContextMenu.data,
    qt_meta_data_DisassemblyContextMenu,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DisassemblyContextMenu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DisassemblyContextMenu::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DisassemblyContextMenu.stringdata0))
        return static_cast<void*>(this);
    return QMenu::qt_metacast(_clname);
}

int DisassemblyContextMenu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMenu::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 37)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 37;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 37)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 37;
    }
    return _id;
}

// SIGNAL 0
void DisassemblyContextMenu::copy()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

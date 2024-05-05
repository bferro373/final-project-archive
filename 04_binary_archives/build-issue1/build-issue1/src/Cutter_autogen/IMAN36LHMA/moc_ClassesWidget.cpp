/****************************************************************************
** Meta object code from reading C++ file 'ClassesWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../src/widgets/ClassesWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ClassesWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_BinClassesModel_t {
    QByteArrayData data[1];
    char stringdata0[16];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BinClassesModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BinClassesModel_t qt_meta_stringdata_BinClassesModel = {
    {
QT_MOC_LITERAL(0, 0, 15) // "BinClassesModel"

    },
    "BinClassesModel"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BinClassesModel[] = {

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

void BinClassesModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject BinClassesModel::staticMetaObject = { {
    QMetaObject::SuperData::link<ClassesModel::staticMetaObject>(),
    qt_meta_stringdata_BinClassesModel.data,
    qt_meta_data_BinClassesModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *BinClassesModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BinClassesModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_BinClassesModel.stringdata0))
        return static_cast<void*>(this);
    return ClassesModel::qt_metacast(_clname);
}

int BinClassesModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ClassesModel::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_AnalysisClassesModel_t {
    QByteArrayData data[10];
    char stringdata0[106];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AnalysisClassesModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AnalysisClassesModel_t qt_meta_stringdata_AnalysisClassesModel = {
    {
QT_MOC_LITERAL(0, 0, 20), // "AnalysisClassesModel"
QT_MOC_LITERAL(1, 21, 10), // "refreshAll"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 8), // "classNew"
QT_MOC_LITERAL(4, 42, 3), // "cls"
QT_MOC_LITERAL(5, 46, 12), // "classDeleted"
QT_MOC_LITERAL(6, 59, 12), // "classRenamed"
QT_MOC_LITERAL(7, 72, 7), // "oldName"
QT_MOC_LITERAL(8, 80, 7), // "newName"
QT_MOC_LITERAL(9, 88, 17) // "classAttrsChanged"

    },
    "AnalysisClassesModel\0refreshAll\0\0"
    "classNew\0cls\0classDeleted\0classRenamed\0"
    "oldName\0newName\0classAttrsChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AnalysisClassesModel[] = {

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
       1,    0,   39,    2, 0x0a /* Public */,
       3,    1,   40,    2, 0x0a /* Public */,
       5,    1,   43,    2, 0x0a /* Public */,
       6,    2,   46,    2, 0x0a /* Public */,
       9,    1,   51,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    7,    8,
    QMetaType::Void, QMetaType::QString,    4,

       0        // eod
};

void AnalysisClassesModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AnalysisClassesModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->refreshAll(); break;
        case 1: _t->classNew((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->classDeleted((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->classRenamed((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 4: _t->classAttrsChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject AnalysisClassesModel::staticMetaObject = { {
    QMetaObject::SuperData::link<ClassesModel::staticMetaObject>(),
    qt_meta_stringdata_AnalysisClassesModel.data,
    qt_meta_data_AnalysisClassesModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AnalysisClassesModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AnalysisClassesModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AnalysisClassesModel.stringdata0))
        return static_cast<void*>(this);
    return ClassesModel::qt_metacast(_clname);
}

int AnalysisClassesModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ClassesModel::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_ClassesSortFilterProxyModel_t {
    QByteArrayData data[1];
    char stringdata0[28];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ClassesSortFilterProxyModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ClassesSortFilterProxyModel_t qt_meta_stringdata_ClassesSortFilterProxyModel = {
    {
QT_MOC_LITERAL(0, 0, 27) // "ClassesSortFilterProxyModel"

    },
    "ClassesSortFilterProxyModel"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ClassesSortFilterProxyModel[] = {

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

void ClassesSortFilterProxyModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject ClassesSortFilterProxyModel::staticMetaObject = { {
    QMetaObject::SuperData::link<AddressableFilterProxyModel::staticMetaObject>(),
    qt_meta_stringdata_ClassesSortFilterProxyModel.data,
    qt_meta_data_ClassesSortFilterProxyModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ClassesSortFilterProxyModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ClassesSortFilterProxyModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ClassesSortFilterProxyModel.stringdata0))
        return static_cast<void*>(this);
    return AddressableFilterProxyModel::qt_metacast(_clname);
}

int ClassesSortFilterProxyModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AddressableFilterProxyModel::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_ClassesWidget_t {
    QByteArrayData data[10];
    char stringdata0[201];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ClassesWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ClassesWidget_t qt_meta_stringdata_ClassesWidget = {
    {
QT_MOC_LITERAL(0, 0, 13), // "ClassesWidget"
QT_MOC_LITERAL(1, 14, 27), // "seekToVTableActionTriggered"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 25), // "editMethodActionTriggered"
QT_MOC_LITERAL(4, 69, 24), // "addMethodActionTriggered"
QT_MOC_LITERAL(5, 94, 23), // "newClassActionTriggered"
QT_MOC_LITERAL(6, 118, 26), // "renameClassActionTriggered"
QT_MOC_LITERAL(7, 145, 26), // "deleteClassActionTriggered"
QT_MOC_LITERAL(8, 172, 14), // "refreshClasses"
QT_MOC_LITERAL(9, 187, 13) // "updateActions"

    },
    "ClassesWidget\0seekToVTableActionTriggered\0"
    "\0editMethodActionTriggered\0"
    "addMethodActionTriggered\0"
    "newClassActionTriggered\0"
    "renameClassActionTriggered\0"
    "deleteClassActionTriggered\0refreshClasses\0"
    "updateActions"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ClassesWidget[] = {

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
       3,    0,   55,    2, 0x08 /* Private */,
       4,    0,   56,    2, 0x08 /* Private */,
       5,    0,   57,    2, 0x08 /* Private */,
       6,    0,   58,    2, 0x08 /* Private */,
       7,    0,   59,    2, 0x08 /* Private */,
       8,    0,   60,    2, 0x08 /* Private */,
       9,    0,   61,    2, 0x08 /* Private */,

 // slots: parameters
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

void ClassesWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ClassesWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->seekToVTableActionTriggered(); break;
        case 1: _t->editMethodActionTriggered(); break;
        case 2: _t->addMethodActionTriggered(); break;
        case 3: _t->newClassActionTriggered(); break;
        case 4: _t->renameClassActionTriggered(); break;
        case 5: _t->deleteClassActionTriggered(); break;
        case 6: _t->refreshClasses(); break;
        case 7: _t->updateActions(); break;
        default: ;
        }
    }
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject ClassesWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<ListDockWidget::staticMetaObject>(),
    qt_meta_stringdata_ClassesWidget.data,
    qt_meta_data_ClassesWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ClassesWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ClassesWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ClassesWidget.stringdata0))
        return static_cast<void*>(this);
    return ListDockWidget::qt_metacast(_clname);
}

int ClassesWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ListDockWidget::qt_metacall(_c, _id, _a);
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

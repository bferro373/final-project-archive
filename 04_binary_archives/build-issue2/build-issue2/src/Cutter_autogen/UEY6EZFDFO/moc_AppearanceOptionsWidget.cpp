/****************************************************************************
** Meta object code from reading C++ file 'AppearanceOptionsWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../src/dialogs/preferences/AppearanceOptionsWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AppearanceOptionsWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AppearanceOptionsWidget_t {
    QByteArrayData data[17];
    char stringdata0[373];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AppearanceOptionsWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AppearanceOptionsWidget_t qt_meta_stringdata_AppearanceOptionsWidget = {
    {
QT_MOC_LITERAL(0, 0, 23), // "AppearanceOptionsWidget"
QT_MOC_LITERAL(1, 24, 20), // "updateFontFromConfig"
QT_MOC_LITERAL(2, 45, 0), // ""
QT_MOC_LITERAL(3, 46, 21), // "updateThemeFromConfig"
QT_MOC_LITERAL(4, 68, 21), // "interfaceThemeChanged"
QT_MOC_LITERAL(5, 90, 30), // "on_fontSelectionButton_clicked"
QT_MOC_LITERAL(6, 121, 25), // "onFontZoomBoxValueChanged"
QT_MOC_LITERAL(7, 147, 4), // "zoom"
QT_MOC_LITERAL(8, 152, 36), // "on_themeComboBox_currentIndex..."
QT_MOC_LITERAL(9, 189, 5), // "index"
QT_MOC_LITERAL(10, 195, 21), // "on_copyButton_clicked"
QT_MOC_LITERAL(11, 217, 23), // "on_deleteButton_clicked"
QT_MOC_LITERAL(12, 241, 23), // "on_importButton_clicked"
QT_MOC_LITERAL(13, 265, 23), // "on_exportButton_clicked"
QT_MOC_LITERAL(14, 289, 23), // "on_renameButton_clicked"
QT_MOC_LITERAL(15, 313, 21), // "on_editButton_clicked"
QT_MOC_LITERAL(16, 335, 37) // "onLanguageComboBoxCurrentInde..."

    },
    "AppearanceOptionsWidget\0updateFontFromConfig\0"
    "\0updateThemeFromConfig\0interfaceThemeChanged\0"
    "on_fontSelectionButton_clicked\0"
    "onFontZoomBoxValueChanged\0zoom\0"
    "on_themeComboBox_currentIndexChanged\0"
    "index\0on_copyButton_clicked\0"
    "on_deleteButton_clicked\0on_importButton_clicked\0"
    "on_exportButton_clicked\0on_renameButton_clicked\0"
    "on_editButton_clicked\0"
    "onLanguageComboBoxCurrentIndexChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AppearanceOptionsWidget[] = {

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
       1,    0,   79,    2, 0x08 /* Private */,
       3,    1,   80,    2, 0x08 /* Private */,
       3,    0,   83,    2, 0x28 /* Private | MethodCloned */,
       5,    0,   84,    2, 0x08 /* Private */,
       6,    1,   85,    2, 0x08 /* Private */,
       8,    1,   88,    2, 0x08 /* Private */,
      10,    0,   91,    2, 0x08 /* Private */,
      11,    0,   92,    2, 0x08 /* Private */,
      12,    0,   93,    2, 0x08 /* Private */,
      13,    0,   94,    2, 0x08 /* Private */,
      14,    0,   95,    2, 0x08 /* Private */,
      15,    0,   96,    2, 0x08 /* Private */,
      16,    1,   97,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    9,

       0        // eod
};

void AppearanceOptionsWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AppearanceOptionsWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->updateFontFromConfig(); break;
        case 1: _t->updateThemeFromConfig((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->updateThemeFromConfig(); break;
        case 3: _t->on_fontSelectionButton_clicked(); break;
        case 4: _t->onFontZoomBoxValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->on_themeComboBox_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->on_copyButton_clicked(); break;
        case 7: _t->on_deleteButton_clicked(); break;
        case 8: _t->on_importButton_clicked(); break;
        case 9: _t->on_exportButton_clicked(); break;
        case 10: _t->on_renameButton_clicked(); break;
        case 11: _t->on_editButton_clicked(); break;
        case 12: _t->onLanguageComboBoxCurrentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject AppearanceOptionsWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_AppearanceOptionsWidget.data,
    qt_meta_data_AppearanceOptionsWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AppearanceOptionsWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AppearanceOptionsWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AppearanceOptionsWidget.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int AppearanceOptionsWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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

/****************************************************************************
** Meta object code from reading C++ file 'ColorPicker.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../src/widgets/ColorPicker.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ColorPicker.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ColorPickerHelpers__ColorPickWidgetAbstract_t {
    QByteArrayData data[5];
    char stringdata0[73];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ColorPickerHelpers__ColorPickWidgetAbstract_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ColorPickerHelpers__ColorPickWidgetAbstract_t qt_meta_stringdata_ColorPickerHelpers__ColorPickWidgetAbstract = {
    {
QT_MOC_LITERAL(0, 0, 43), // "ColorPickerHelpers::ColorPick..."
QT_MOC_LITERAL(1, 44, 12), // "colorChanged"
QT_MOC_LITERAL(2, 57, 0), // ""
QT_MOC_LITERAL(3, 58, 5), // "color"
QT_MOC_LITERAL(4, 64, 8) // "setColor"

    },
    "ColorPickerHelpers::ColorPickWidgetAbstract\0"
    "colorChanged\0\0color\0setColor"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ColorPickerHelpers__ColorPickWidgetAbstract[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   27,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QColor,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::QColor,    3,

       0        // eod
};

void ColorPickerHelpers::ColorPickWidgetAbstract::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ColorPickWidgetAbstract *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->colorChanged((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 1: _t->setColor((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ColorPickWidgetAbstract::*)(const QColor & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ColorPickWidgetAbstract::colorChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ColorPickerHelpers::ColorPickWidgetAbstract::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_ColorPickerHelpers__ColorPickWidgetAbstract.data,
    qt_meta_data_ColorPickerHelpers__ColorPickWidgetAbstract,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ColorPickerHelpers::ColorPickWidgetAbstract::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ColorPickerHelpers::ColorPickWidgetAbstract::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ColorPickerHelpers__ColorPickWidgetAbstract.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int ColorPickerHelpers::ColorPickWidgetAbstract::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
void ColorPickerHelpers::ColorPickWidgetAbstract::colorChanged(const QColor & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_ColorPicker_t {
    QByteArrayData data[8];
    char stringdata0[105];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ColorPicker_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ColorPicker_t qt_meta_stringdata_ColorPicker = {
    {
QT_MOC_LITERAL(0, 0, 11), // "ColorPicker"
QT_MOC_LITERAL(1, 12, 8), // "setColor"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 5), // "color"
QT_MOC_LITERAL(4, 28, 19), // "colorChannelChanged"
QT_MOC_LITERAL(5, 48, 11), // "updateColor"
QT_MOC_LITERAL(6, 60, 22), // "startPickingFromScreen"
QT_MOC_LITERAL(7, 83, 21) // "stopPickingFromScreen"

    },
    "ColorPicker\0setColor\0\0color\0"
    "colorChannelChanged\0updateColor\0"
    "startPickingFromScreen\0stopPickingFromScreen"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ColorPicker[] = {

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
       1,    1,   39,    2, 0x0a /* Public */,
       4,    0,   42,    2, 0x0a /* Public */,
       5,    1,   43,    2, 0x0a /* Public */,
       6,    0,   46,    2, 0x0a /* Public */,
       7,    0,   47,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QColor,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QColor,    3,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ColorPicker::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ColorPicker *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->setColor((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 1: _t->colorChannelChanged(); break;
        case 2: _t->updateColor((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 3: _t->startPickingFromScreen(); break;
        case 4: _t->stopPickingFromScreen(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ColorPicker::staticMetaObject = { {
    QMetaObject::SuperData::link<ColorPickerHelpers::ColorPickWidgetAbstract::staticMetaObject>(),
    qt_meta_stringdata_ColorPicker.data,
    qt_meta_data_ColorPicker,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ColorPicker::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ColorPicker::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ColorPicker.stringdata0))
        return static_cast<void*>(this);
    return ColorPickerHelpers::ColorPickWidgetAbstract::qt_metacast(_clname);
}

int ColorPicker::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ColorPickerHelpers::ColorPickWidgetAbstract::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_ColorPickerHelpers__ColorPickerWidget_t {
    QByteArrayData data[1];
    char stringdata0[38];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ColorPickerHelpers__ColorPickerWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ColorPickerHelpers__ColorPickerWidget_t qt_meta_stringdata_ColorPickerHelpers__ColorPickerWidget = {
    {
QT_MOC_LITERAL(0, 0, 37) // "ColorPickerHelpers::ColorPick..."

    },
    "ColorPickerHelpers::ColorPickerWidget"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ColorPickerHelpers__ColorPickerWidget[] = {

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

void ColorPickerHelpers::ColorPickerWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject ColorPickerHelpers::ColorPickerWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<ColorPickWidgetAbstract::staticMetaObject>(),
    qt_meta_stringdata_ColorPickerHelpers__ColorPickerWidget.data,
    qt_meta_data_ColorPickerHelpers__ColorPickerWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ColorPickerHelpers::ColorPickerWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ColorPickerHelpers::ColorPickerWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ColorPickerHelpers__ColorPickerWidget.stringdata0))
        return static_cast<void*>(this);
    return ColorPickWidgetAbstract::qt_metacast(_clname);
}

int ColorPickerHelpers::ColorPickerWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ColorPickWidgetAbstract::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_ColorPickerHelpers__ColorShowWidget_t {
    QByteArrayData data[1];
    char stringdata0[36];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ColorPickerHelpers__ColorShowWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ColorPickerHelpers__ColorShowWidget_t qt_meta_stringdata_ColorPickerHelpers__ColorShowWidget = {
    {
QT_MOC_LITERAL(0, 0, 35) // "ColorPickerHelpers::ColorShow..."

    },
    "ColorPickerHelpers::ColorShowWidget"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ColorPickerHelpers__ColorShowWidget[] = {

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

void ColorPickerHelpers::ColorShowWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject ColorPickerHelpers::ColorShowWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<ColorPickWidgetAbstract::staticMetaObject>(),
    qt_meta_stringdata_ColorPickerHelpers__ColorShowWidget.data,
    qt_meta_data_ColorPickerHelpers__ColorShowWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ColorPickerHelpers::ColorShowWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ColorPickerHelpers::ColorShowWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ColorPickerHelpers__ColorShowWidget.stringdata0))
        return static_cast<void*>(this);
    return ColorPickWidgetAbstract::qt_metacast(_clname);
}

int ColorPickerHelpers::ColorShowWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ColorPickWidgetAbstract::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_ColorPickerHelpers__ColorPickArea_t {
    QByteArrayData data[1];
    char stringdata0[34];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ColorPickerHelpers__ColorPickArea_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ColorPickerHelpers__ColorPickArea_t qt_meta_stringdata_ColorPickerHelpers__ColorPickArea = {
    {
QT_MOC_LITERAL(0, 0, 33) // "ColorPickerHelpers::ColorPick..."

    },
    "ColorPickerHelpers::ColorPickArea"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ColorPickerHelpers__ColorPickArea[] = {

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

void ColorPickerHelpers::ColorPickArea::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject ColorPickerHelpers::ColorPickArea::staticMetaObject = { {
    QMetaObject::SuperData::link<ColorPickerWidget::staticMetaObject>(),
    qt_meta_stringdata_ColorPickerHelpers__ColorPickArea.data,
    qt_meta_data_ColorPickerHelpers__ColorPickArea,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ColorPickerHelpers::ColorPickArea::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ColorPickerHelpers::ColorPickArea::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ColorPickerHelpers__ColorPickArea.stringdata0))
        return static_cast<void*>(this);
    return ColorPickerWidget::qt_metacast(_clname);
}

int ColorPickerHelpers::ColorPickArea::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ColorPickerWidget::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_ColorPickerHelpers__AlphaChannelBar_t {
    QByteArrayData data[1];
    char stringdata0[36];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ColorPickerHelpers__AlphaChannelBar_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ColorPickerHelpers__AlphaChannelBar_t qt_meta_stringdata_ColorPickerHelpers__AlphaChannelBar = {
    {
QT_MOC_LITERAL(0, 0, 35) // "ColorPickerHelpers::AlphaChan..."

    },
    "ColorPickerHelpers::AlphaChannelBar"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ColorPickerHelpers__AlphaChannelBar[] = {

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

void ColorPickerHelpers::AlphaChannelBar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject ColorPickerHelpers::AlphaChannelBar::staticMetaObject = { {
    QMetaObject::SuperData::link<ColorPickerWidget::staticMetaObject>(),
    qt_meta_stringdata_ColorPickerHelpers__AlphaChannelBar.data,
    qt_meta_data_ColorPickerHelpers__AlphaChannelBar,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ColorPickerHelpers::AlphaChannelBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ColorPickerHelpers::AlphaChannelBar::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ColorPickerHelpers__AlphaChannelBar.stringdata0))
        return static_cast<void*>(this);
    return ColorPickerWidget::qt_metacast(_clname);
}

int ColorPickerHelpers::AlphaChannelBar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ColorPickerWidget::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_ColorPickerHelpers__ColorValueBar_t {
    QByteArrayData data[1];
    char stringdata0[34];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ColorPickerHelpers__ColorValueBar_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ColorPickerHelpers__ColorValueBar_t qt_meta_stringdata_ColorPickerHelpers__ColorValueBar = {
    {
QT_MOC_LITERAL(0, 0, 33) // "ColorPickerHelpers::ColorValu..."

    },
    "ColorPickerHelpers::ColorValueBar"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ColorPickerHelpers__ColorValueBar[] = {

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

void ColorPickerHelpers::ColorValueBar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject ColorPickerHelpers::ColorValueBar::staticMetaObject = { {
    QMetaObject::SuperData::link<ColorPickerWidget::staticMetaObject>(),
    qt_meta_stringdata_ColorPickerHelpers__ColorValueBar.data,
    qt_meta_data_ColorPickerHelpers__ColorValueBar,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ColorPickerHelpers::ColorValueBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ColorPickerHelpers::ColorValueBar::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ColorPickerHelpers__ColorValueBar.stringdata0))
        return static_cast<void*>(this);
    return ColorPickerWidget::qt_metacast(_clname);
}

int ColorPickerHelpers::ColorValueBar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ColorPickerWidget::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

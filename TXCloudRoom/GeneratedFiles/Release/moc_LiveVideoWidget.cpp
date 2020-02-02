/****************************************************************************
** Meta object code from reading C++ file 'LiveVideoWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Education/LiveVideoWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'LiveVideoWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_LiveVideoWidget_t {
    QByteArrayData data[11];
    char stringdata0[128];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LiveVideoWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LiveVideoWidget_t qt_meta_stringdata_LiveVideoWidget = {
    {
QT_MOC_LITERAL(0, 0, 15), // "LiveVideoWidget"
QT_MOC_LITERAL(1, 16, 15), // "local_actCamera"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 4), // "open"
QT_MOC_LITERAL(4, 38, 12), // "local_actMic"
QT_MOC_LITERAL(5, 51, 9), // "actCamera"
QT_MOC_LITERAL(6, 61, 6), // "actMic"
QT_MOC_LITERAL(7, 68, 10), // "actLinkMic"
QT_MOC_LITERAL(8, 79, 17), // "on_dis_actLinkMic"
QT_MOC_LITERAL(9, 97, 16), // "on_dis_actCamera"
QT_MOC_LITERAL(10, 114, 13) // "on_dis_actMic"

    },
    "LiveVideoWidget\0local_actCamera\0\0open\0"
    "local_actMic\0actCamera\0actMic\0actLinkMic\0"
    "on_dis_actLinkMic\0on_dis_actCamera\0"
    "on_dis_actMic"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LiveVideoWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06 /* Public */,
       4,    1,   57,    2, 0x06 /* Public */,
       5,    1,   60,    2, 0x06 /* Public */,
       6,    1,   63,    2, 0x06 /* Public */,
       7,    0,   66,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    0,   67,    2, 0x08 /* Private */,
       9,    1,   68,    2, 0x08 /* Private */,
      10,    1,   71,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,

       0        // eod
};

void LiveVideoWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        LiveVideoWidget *_t = static_cast<LiveVideoWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->local_actCamera((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->local_actMic((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->actCamera((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->actMic((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->actLinkMic(); break;
        case 5: _t->on_dis_actLinkMic(); break;
        case 6: _t->on_dis_actCamera((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->on_dis_actMic((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (LiveVideoWidget::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LiveVideoWidget::local_actCamera)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (LiveVideoWidget::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LiveVideoWidget::local_actMic)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (LiveVideoWidget::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LiveVideoWidget::actCamera)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (LiveVideoWidget::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LiveVideoWidget::actMic)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (LiveVideoWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LiveVideoWidget::actLinkMic)) {
                *result = 4;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject LiveVideoWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_LiveVideoWidget.data,
      qt_meta_data_LiveVideoWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *LiveVideoWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LiveVideoWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LiveVideoWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int LiveVideoWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void LiveVideoWidget::local_actCamera(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void LiveVideoWidget::local_actMic(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void LiveVideoWidget::actCamera(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void LiveVideoWidget::actMic(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void LiveVideoWidget::actLinkMic()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

/****************************************************************************
** Meta object code from reading C++ file 'GDIWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../UI/GDIWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'GDIWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_GDIWidget_t {
    QByteArrayData data[12];
    char stringdata0[101];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GDIWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GDIWidget_t qt_meta_stringdata_GDIWidget = {
    {
QT_MOC_LITERAL(0, 0, 9), // "GDIWidget"
QT_MOC_LITERAL(1, 10, 13), // "doubleClicked"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 10), // "escPressed"
QT_MOC_LITERAL(4, 36, 10), // "actLinkMic"
QT_MOC_LITERAL(5, 47, 9), // "actCamera"
QT_MOC_LITERAL(6, 57, 4), // "open"
QT_MOC_LITERAL(7, 62, 6), // "actMic"
QT_MOC_LITERAL(8, 69, 8), // "dispatch"
QT_MOC_LITERAL(9, 78, 10), // "txfunction"
QT_MOC_LITERAL(10, 89, 4), // "func"
QT_MOC_LITERAL(11, 94, 6) // "handle"

    },
    "GDIWidget\0doubleClicked\0\0escPressed\0"
    "actLinkMic\0actCamera\0open\0actMic\0"
    "dispatch\0txfunction\0func\0handle"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GDIWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06 /* Public */,
       3,    0,   50,    2, 0x06 /* Public */,
       4,    0,   51,    2, 0x06 /* Public */,
       5,    1,   52,    2, 0x06 /* Public */,
       7,    1,   55,    2, 0x06 /* Public */,
       8,    1,   58,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      11,    1,   61,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, 0x80000000 | 9,   10,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 9,   10,

       0        // eod
};

void GDIWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        GDIWidget *_t = static_cast<GDIWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->doubleClicked(); break;
        case 1: _t->escPressed(); break;
        case 2: _t->actLinkMic(); break;
        case 3: _t->actCamera((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->actMic((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->dispatch((*reinterpret_cast< txfunction(*)>(_a[1]))); break;
        case 6: _t->handle((*reinterpret_cast< txfunction(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (GDIWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GDIWidget::doubleClicked)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (GDIWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GDIWidget::escPressed)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (GDIWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GDIWidget::actLinkMic)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (GDIWidget::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GDIWidget::actCamera)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (GDIWidget::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GDIWidget::actMic)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (GDIWidget::*)(txfunction );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GDIWidget::dispatch)) {
                *result = 5;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject GDIWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_GDIWidget.data,
      qt_meta_data_GDIWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *GDIWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GDIWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GDIWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int GDIWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void GDIWidget::doubleClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void GDIWidget::escPressed()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void GDIWidget::actLinkMic()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void GDIWidget::actCamera(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void GDIWidget::actMic(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void GDIWidget::dispatch(txfunction _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

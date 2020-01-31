/****************************************************************************
** Meta object code from reading C++ file 'DialogPushPlay.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../CSLive/DialogPushPlay.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DialogPushPlay.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DialogPushPlay_t {
    QByteArrayData data[19];
    char stringdata0[257];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DialogPushPlay_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DialogPushPlay_t qt_meta_stringdata_DialogPushPlay = {
    {
QT_MOC_LITERAL(0, 0, 14), // "DialogPushPlay"
QT_MOC_LITERAL(1, 15, 12), // "update_event"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 6), // "status"
QT_MOC_LITERAL(4, 36, 5), // "index"
QT_MOC_LITERAL(5, 42, 8), // "dispatch"
QT_MOC_LITERAL(6, 51, 10), // "txfunction"
QT_MOC_LITERAL(7, 62, 4), // "func"
QT_MOC_LITERAL(8, 67, 13), // "TicketTimeout"
QT_MOC_LITERAL(9, 81, 20), // "on_btn_close_clicked"
QT_MOC_LITERAL(10, 102, 18), // "on_btn_min_clicked"
QT_MOC_LITERAL(11, 121, 15), // "on_update_event"
QT_MOC_LITERAL(12, 137, 6), // "handle"
QT_MOC_LITERAL(13, 144, 28), // "on_btn_beauty_manage_clicked"
QT_MOC_LITERAL(14, 173, 19), // "on_beauty_manage_ok"
QT_MOC_LITERAL(15, 193, 11), // "beautyStyle"
QT_MOC_LITERAL(16, 205, 11), // "beautyLevel"
QT_MOC_LITERAL(17, 217, 14), // "whitenessLevel"
QT_MOC_LITERAL(18, 232, 24) // "on_checkbox_mute_clicked"

    },
    "DialogPushPlay\0update_event\0\0status\0"
    "index\0dispatch\0txfunction\0func\0"
    "TicketTimeout\0on_btn_close_clicked\0"
    "on_btn_min_clicked\0on_update_event\0"
    "handle\0on_btn_beauty_manage_clicked\0"
    "on_beauty_manage_ok\0beautyStyle\0"
    "beautyLevel\0whitenessLevel\0"
    "on_checkbox_mute_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DialogPushPlay[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   64,    2, 0x06 /* Public */,
       5,    1,   69,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    0,   72,    2, 0x09 /* Protected */,
       9,    0,   73,    2, 0x08 /* Private */,
      10,    0,   74,    2, 0x08 /* Private */,
      11,    2,   75,    2, 0x08 /* Private */,
      12,    1,   80,    2, 0x08 /* Private */,
      13,    0,   83,    2, 0x08 /* Private */,
      14,    3,   84,    2, 0x08 /* Private */,
      18,    0,   91,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,   15,   16,   17,
    QMetaType::Void,

       0        // eod
};

void DialogPushPlay::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DialogPushPlay *_t = static_cast<DialogPushPlay *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->update_event((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->dispatch((*reinterpret_cast< txfunction(*)>(_a[1]))); break;
        case 2: _t->TicketTimeout(); break;
        case 3: _t->on_btn_close_clicked(); break;
        case 4: _t->on_btn_min_clicked(); break;
        case 5: _t->on_update_event((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 6: _t->handle((*reinterpret_cast< txfunction(*)>(_a[1]))); break;
        case 7: _t->on_btn_beauty_manage_clicked(); break;
        case 8: _t->on_beauty_manage_ok((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 9: _t->on_checkbox_mute_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DialogPushPlay::*)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DialogPushPlay::update_event)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (DialogPushPlay::*)(txfunction );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DialogPushPlay::dispatch)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject DialogPushPlay::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_DialogPushPlay.data,
      qt_meta_data_DialogPushPlay,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *DialogPushPlay::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DialogPushPlay::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DialogPushPlay.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "TXLivePlayerCallback"))
        return static_cast< TXLivePlayerCallback*>(this);
    if (!strcmp(_clname, "TXLivePusherCallback"))
        return static_cast< TXLivePusherCallback*>(this);
    return QDialog::qt_metacast(_clname);
}

int DialogPushPlay::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void DialogPushPlay::update_event(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void DialogPushPlay::dispatch(txfunction _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

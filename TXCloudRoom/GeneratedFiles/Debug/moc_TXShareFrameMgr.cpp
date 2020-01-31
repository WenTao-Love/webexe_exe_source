/****************************************************************************
** Meta object code from reading C++ file 'TXShareFrameMgr.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../common/TXShareFrameMgr.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TXShareFrameMgr.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TXShareFrameMgr_t {
    QByteArrayData data[13];
    char stringdata0[105];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TXShareFrameMgr_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TXShareFrameMgr_t qt_meta_stringdata_TXShareFrameMgr = {
    {
QT_MOC_LITERAL(0, 0, 15), // "TXShareFrameMgr"
QT_MOC_LITERAL(1, 16, 8), // "dispatch"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 10), // "txfunction"
QT_MOC_LITERAL(4, 37, 4), // "func"
QT_MOC_LITERAL(5, 42, 12), // "TrackTimeout"
QT_MOC_LITERAL(6, 55, 10), // "startTrack"
QT_MOC_LITERAL(7, 66, 4), // "HWND"
QT_MOC_LITERAL(8, 71, 4), // "hwnd"
QT_MOC_LITERAL(9, 76, 4), // "rect"
QT_MOC_LITERAL(10, 81, 7), // "onClose"
QT_MOC_LITERAL(11, 89, 8), // "onSwitch"
QT_MOC_LITERAL(12, 98, 6) // "handle"

    },
    "TXShareFrameMgr\0dispatch\0\0txfunction\0"
    "func\0TrackTimeout\0startTrack\0HWND\0"
    "hwnd\0rect\0onClose\0onSwitch\0handle"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TXShareFrameMgr[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   47,    2, 0x09 /* Protected */,
       6,    2,   48,    2, 0x09 /* Protected */,
      10,    0,   53,    2, 0x09 /* Protected */,
      11,    0,   54,    2, 0x09 /* Protected */,
      12,    1,   55,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7, QMetaType::QRect,    8,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void TXShareFrameMgr::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TXShareFrameMgr *_t = static_cast<TXShareFrameMgr *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->dispatch((*reinterpret_cast< txfunction(*)>(_a[1]))); break;
        case 1: _t->TrackTimeout(); break;
        case 2: _t->startTrack((*reinterpret_cast< HWND(*)>(_a[1])),(*reinterpret_cast< QRect(*)>(_a[2]))); break;
        case 3: _t->onClose(); break;
        case 4: _t->onSwitch(); break;
        case 5: _t->handle((*reinterpret_cast< txfunction(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (TXShareFrameMgr::*)(txfunction );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TXShareFrameMgr::dispatch)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject TXShareFrameMgr::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_TXShareFrameMgr.data,
      qt_meta_data_TXShareFrameMgr,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *TXShareFrameMgr::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TXShareFrameMgr::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TXShareFrameMgr.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "TXShareFrameChooseCB"))
        return static_cast< TXShareFrameChooseCB*>(this);
    return QObject::qt_metacast(_clname);
}

int TXShareFrameMgr::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void TXShareFrameMgr::dispatch(txfunction _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_TXShareTrackWnd_t {
    QByteArrayData data[1];
    char stringdata0[16];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TXShareTrackWnd_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TXShareTrackWnd_t qt_meta_stringdata_TXShareTrackWnd = {
    {
QT_MOC_LITERAL(0, 0, 15) // "TXShareTrackWnd"

    },
    "TXShareTrackWnd"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TXShareTrackWnd[] = {

 // content:
       7,       // revision
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

void TXShareTrackWnd::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject TXShareTrackWnd::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_TXShareTrackWnd.data,
      qt_meta_data_TXShareTrackWnd,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *TXShareTrackWnd::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TXShareTrackWnd::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TXShareTrackWnd.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int TXShareTrackWnd::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_TXShareToolWnd_t {
    QByteArrayData data[6];
    char stringdata0[65];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TXShareToolWnd_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TXShareToolWnd_t qt_meta_stringdata_TXShareToolWnd = {
    {
QT_MOC_LITERAL(0, 0, 14), // "TXShareToolWnd"
QT_MOC_LITERAL(1, 15, 7), // "onClose"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 8), // "onSwitch"
QT_MOC_LITERAL(4, 33, 14), // "onBtnQuitClick"
QT_MOC_LITERAL(5, 48, 16) // "onBtnSwitchClick"

    },
    "TXShareToolWnd\0onClose\0\0onSwitch\0"
    "onBtnQuitClick\0onBtnSwitchClick"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TXShareToolWnd[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,
       3,    0,   35,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   36,    2, 0x09 /* Protected */,
       5,    0,   37,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void TXShareToolWnd::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TXShareToolWnd *_t = static_cast<TXShareToolWnd *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onClose(); break;
        case 1: _t->onSwitch(); break;
        case 2: _t->onBtnQuitClick(); break;
        case 3: _t->onBtnSwitchClick(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (TXShareToolWnd::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TXShareToolWnd::onClose)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (TXShareToolWnd::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TXShareToolWnd::onSwitch)) {
                *result = 1;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject TXShareToolWnd::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_TXShareToolWnd.data,
      qt_meta_data_TXShareToolWnd,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *TXShareToolWnd::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TXShareToolWnd::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TXShareToolWnd.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int TXShareToolWnd::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void TXShareToolWnd::onClose()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void TXShareToolWnd::onSwitch()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

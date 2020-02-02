/****************************************************************************
** Meta object code from reading C++ file 'TXShareFrameChoose.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../common/TXShareFrameChoose.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TXShareFrameChoose.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TXShareFrameChoose_t {
    QByteArrayData data[6];
    char stringdata0[69];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TXShareFrameChoose_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TXShareFrameChoose_t qt_meta_stringdata_TXShareFrameChoose = {
    {
QT_MOC_LITERAL(0, 0, 18), // "TXShareFrameChoose"
QT_MOC_LITERAL(1, 19, 15), // "cursorPosChange"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 8), // "clickWnd"
QT_MOC_LITERAL(4, 45, 10), // "onEgoistic"
QT_MOC_LITERAL(5, 56, 12) // "clickWndSlot"

    },
    "TXShareFrameChoose\0cursorPosChange\0\0"
    "clickWnd\0onEgoistic\0clickWndSlot"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TXShareFrameChoose[] = {

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
       1,    2,   34,    2, 0x06 /* Public */,
       3,    0,   39,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   40,    2, 0x0a /* Public */,
       5,    0,   41,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    2,    2,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void TXShareFrameChoose::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TXShareFrameChoose *_t = static_cast<TXShareFrameChoose *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->cursorPosChange((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->clickWnd(); break;
        case 2: _t->onEgoistic(); break;
        case 3: _t->clickWndSlot(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (TXShareFrameChoose::*)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TXShareFrameChoose::cursorPosChange)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (TXShareFrameChoose::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TXShareFrameChoose::clickWnd)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject TXShareFrameChoose::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_TXShareFrameChoose.data,
      qt_meta_data_TXShareFrameChoose,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *TXShareFrameChoose::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TXShareFrameChoose::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TXShareFrameChoose.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int TXShareFrameChoose::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void TXShareFrameChoose::cursorPosChange(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void TXShareFrameChoose::clickWnd()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
struct qt_meta_stringdata_TXScreen_t {
    QByteArrayData data[10];
    char stringdata0[98];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TXScreen_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TXScreen_t qt_meta_stringdata_TXScreen = {
    {
QT_MOC_LITERAL(0, 0, 8), // "TXScreen"
QT_MOC_LITERAL(1, 9, 10), // "sizeChange"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 13), // "postionChange"
QT_MOC_LITERAL(4, 35, 11), // "doubleClick"
QT_MOC_LITERAL(5, 47, 13), // "onMouseChange"
QT_MOC_LITERAL(6, 61, 1), // "x"
QT_MOC_LITERAL(7, 63, 1), // "y"
QT_MOC_LITERAL(8, 65, 17), // "onChooseWndOrArea"
QT_MOC_LITERAL(9, 83, 14) // "quitScreenshot"

    },
    "TXScreen\0sizeChange\0\0postionChange\0"
    "doubleClick\0onMouseChange\0x\0y\0"
    "onChooseWndOrArea\0quitScreenshot"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TXScreen[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   44,    2, 0x06 /* Public */,
       3,    2,   49,    2, 0x06 /* Public */,
       4,    0,   54,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    2,   55,    2, 0x0a /* Public */,
       8,    0,   60,    2, 0x0a /* Public */,
       9,    0,   61,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    2,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    2,    2,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    6,    7,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void TXScreen::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TXScreen *_t = static_cast<TXScreen *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sizeChange((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->postionChange((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->doubleClick(); break;
        case 3: _t->onMouseChange((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 4: _t->onChooseWndOrArea(); break;
        case 5: _t->quitScreenshot(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (TXScreen::*)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TXScreen::sizeChange)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (TXScreen::*)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TXScreen::postionChange)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (TXScreen::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TXScreen::doubleClick)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject TXScreen::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_TXScreen.data,
      qt_meta_data_TXScreen,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *TXScreen::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TXScreen::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TXScreen.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int TXScreen::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
void TXScreen::sizeChange(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void TXScreen::postionChange(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void TXScreen::doubleClick()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

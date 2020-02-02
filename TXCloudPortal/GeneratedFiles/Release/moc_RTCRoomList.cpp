/****************************************************************************
** Meta object code from reading C++ file 'RTCRoomList.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../CourtCS/RTCRoomList.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'RTCRoomList.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_RTCRoomList_t {
    QByteArrayData data[9];
    char stringdata0[108];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RTCRoomList_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RTCRoomList_t qt_meta_stringdata_RTCRoomList = {
    {
QT_MOC_LITERAL(0, 0, 11), // "RTCRoomList"
QT_MOC_LITERAL(1, 12, 8), // "dispatch"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 19), // "RTCRoomListfunction"
QT_MOC_LITERAL(4, 42, 4), // "func"
QT_MOC_LITERAL(5, 47, 6), // "handle"
QT_MOC_LITERAL(6, 54, 17), // "onCloseBtnClicked"
QT_MOC_LITERAL(7, 72, 16), // "onJoinBtnClicked"
QT_MOC_LITERAL(8, 89, 18) // "onCreateBtnClicked"

    },
    "RTCRoomList\0dispatch\0\0RTCRoomListfunction\0"
    "func\0handle\0onCloseBtnClicked\0"
    "onJoinBtnClicked\0onCreateBtnClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RTCRoomList[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   42,    2, 0x09 /* Protected */,
       6,    0,   45,    2, 0x09 /* Protected */,
       7,    0,   46,    2, 0x09 /* Protected */,
       8,    0,   47,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void RTCRoomList::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        RTCRoomList *_t = static_cast<RTCRoomList *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->dispatch((*reinterpret_cast< RTCRoomListfunction(*)>(_a[1]))); break;
        case 1: _t->handle((*reinterpret_cast< RTCRoomListfunction(*)>(_a[1]))); break;
        case 2: _t->onCloseBtnClicked(); break;
        case 3: _t->onJoinBtnClicked(); break;
        case 4: _t->onCreateBtnClicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (RTCRoomList::*)(RTCRoomListfunction );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RTCRoomList::dispatch)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject RTCRoomList::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_RTCRoomList.data,
      qt_meta_data_RTCRoomList,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *RTCRoomList::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RTCRoomList::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_RTCRoomList.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int RTCRoomList::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void RTCRoomList::dispatch(RTCRoomListfunction _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

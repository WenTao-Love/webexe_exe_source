/****************************************************************************
** Meta object code from reading C++ file 'PPTHistory.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../UI/PPTHistory.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PPTHistory.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PPTHistory_t {
    QByteArrayData data[13];
    char stringdata0[186];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PPTHistory_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PPTHistory_t qt_meta_stringdata_PPTHistory = {
    {
QT_MOC_LITERAL(0, 0, 10), // "PPTHistory"
QT_MOC_LITERAL(1, 11, 16), // "tiggleRemoveItem"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 7), // "objName"
QT_MOC_LITERAL(4, 37, 20), // "on_btn_close_clicked"
QT_MOC_LITERAL(5, 58, 17), // "on_btn_ok_clicked"
QT_MOC_LITERAL(6, 76, 21), // "on_btn_cancel_clicked"
QT_MOC_LITERAL(7, 98, 31), // "on_listWidget_itemDoubleClicked"
QT_MOC_LITERAL(8, 130, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(9, 147, 4), // "item"
QT_MOC_LITERAL(10, 152, 10), // "on_addItem"
QT_MOC_LITERAL(11, 163, 8), // "dateTime"
QT_MOC_LITERAL(12, 172, 13) // "on_removeItem"

    },
    "PPTHistory\0tiggleRemoveItem\0\0objName\0"
    "on_btn_close_clicked\0on_btn_ok_clicked\0"
    "on_btn_cancel_clicked\0"
    "on_listWidget_itemDoubleClicked\0"
    "QListWidgetItem*\0item\0on_addItem\0"
    "dateTime\0on_removeItem"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PPTHistory[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   52,    2, 0x08 /* Private */,
       5,    0,   53,    2, 0x08 /* Private */,
       6,    0,   54,    2, 0x08 /* Private */,
       7,    1,   55,    2, 0x08 /* Private */,
      10,    2,   58,    2, 0x08 /* Private */,
      12,    1,   63,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    3,   11,
    QMetaType::Void, QMetaType::QString,    3,

       0        // eod
};

void PPTHistory::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PPTHistory *_t = static_cast<PPTHistory *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->tiggleRemoveItem((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->on_btn_close_clicked(); break;
        case 2: _t->on_btn_ok_clicked(); break;
        case 3: _t->on_btn_cancel_clicked(); break;
        case 4: _t->on_listWidget_itemDoubleClicked((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 5: _t->on_addItem((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 6: _t->on_removeItem((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (PPTHistory::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PPTHistory::tiggleRemoveItem)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PPTHistory::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_PPTHistory.data,
      qt_meta_data_PPTHistory,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *PPTHistory::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PPTHistory::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PPTHistory.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int PPTHistory::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
void PPTHistory::tiggleRemoveItem(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
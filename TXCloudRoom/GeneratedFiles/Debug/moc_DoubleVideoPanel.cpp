/****************************************************************************
** Meta object code from reading C++ file 'DoubleVideoPanel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Court&CS/DoubleVideoPanel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DoubleVideoPanel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DoubleVideoPanel_t {
    QByteArrayData data[8];
    char stringdata0[168];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DoubleVideoPanel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DoubleVideoPanel_t qt_meta_stringdata_DoubleVideoPanel = {
    {
QT_MOC_LITERAL(0, 0, 16), // "DoubleVideoPanel"
QT_MOC_LITERAL(1, 17, 21), // "record_manage_clicked"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 28), // "on_btn_record_manage_clicked"
QT_MOC_LITERAL(4, 69, 27), // "on_tabWidget_currentChanged"
QT_MOC_LITERAL(5, 97, 25), // "on_btn_area_share_clicked"
QT_MOC_LITERAL(6, 123, 25), // "on_btn_full_share_clicked"
QT_MOC_LITERAL(7, 149, 18) // "on_btn_esc_clicked"

    },
    "DoubleVideoPanel\0record_manage_clicked\0"
    "\0on_btn_record_manage_clicked\0"
    "on_tabWidget_currentChanged\0"
    "on_btn_area_share_clicked\0"
    "on_btn_full_share_clicked\0on_btn_esc_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DoubleVideoPanel[] = {

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
       1,    0,   44,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   45,    2, 0x08 /* Private */,
       4,    0,   46,    2, 0x08 /* Private */,
       5,    0,   47,    2, 0x08 /* Private */,
       6,    0,   48,    2, 0x08 /* Private */,
       7,    0,   49,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void DoubleVideoPanel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DoubleVideoPanel *_t = static_cast<DoubleVideoPanel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->record_manage_clicked(); break;
        case 1: _t->on_btn_record_manage_clicked(); break;
        case 2: _t->on_tabWidget_currentChanged(); break;
        case 3: _t->on_btn_area_share_clicked(); break;
        case 4: _t->on_btn_full_share_clicked(); break;
        case 5: _t->on_btn_esc_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DoubleVideoPanel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DoubleVideoPanel::record_manage_clicked)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject DoubleVideoPanel::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_DoubleVideoPanel.data,
      qt_meta_data_DoubleVideoPanel,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *DoubleVideoPanel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DoubleVideoPanel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DoubleVideoPanel.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "TXShareFrameCallback"))
        return static_cast< TXShareFrameCallback*>(this);
    return QWidget::qt_metacast(_clname);
}

int DoubleVideoPanel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void DoubleVideoPanel::record_manage_clicked()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

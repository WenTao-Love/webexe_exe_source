/****************************************************************************
** Meta object code from reading C++ file 'MultiVideoPanel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Court&CS/MultiVideoPanel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MultiVideoPanel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MultiVideoPanel_t {
    QByteArrayData data[16];
    char stringdata0[265];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MultiVideoPanel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MultiVideoPanel_t qt_meta_stringdata_MultiVideoPanel = {
    {
QT_MOC_LITERAL(0, 0, 15), // "MultiVideoPanel"
QT_MOC_LITERAL(1, 16, 9), // "actCamera"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 4), // "open"
QT_MOC_LITERAL(4, 32, 6), // "actMic"
QT_MOC_LITERAL(5, 39, 21), // "record_manage_clicked"
QT_MOC_LITERAL(6, 61, 16), // "on_dis_actCamera"
QT_MOC_LITERAL(7, 78, 13), // "on_dis_actMic"
QT_MOC_LITERAL(8, 92, 18), // "on_local_actCamera"
QT_MOC_LITERAL(9, 111, 20), // "on_selectCaptureArea"
QT_MOC_LITERAL(10, 132, 4), // "rect"
QT_MOC_LITERAL(11, 137, 28), // "on_btn_record_manage_clicked"
QT_MOC_LITERAL(12, 166, 27), // "on_tabWidget_currentChanged"
QT_MOC_LITERAL(13, 194, 25), // "on_btn_area_share_clicked"
QT_MOC_LITERAL(14, 220, 25), // "on_btn_full_share_clicked"
QT_MOC_LITERAL(15, 246, 18) // "on_btn_esc_clicked"

    },
    "MultiVideoPanel\0actCamera\0\0open\0actMic\0"
    "record_manage_clicked\0on_dis_actCamera\0"
    "on_dis_actMic\0on_local_actCamera\0"
    "on_selectCaptureArea\0rect\0"
    "on_btn_record_manage_clicked\0"
    "on_tabWidget_currentChanged\0"
    "on_btn_area_share_clicked\0"
    "on_btn_full_share_clicked\0on_btn_esc_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MultiVideoPanel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   74,    2, 0x06 /* Public */,
       4,    1,   77,    2, 0x06 /* Public */,
       5,    0,   80,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   81,    2, 0x08 /* Private */,
       7,    1,   84,    2, 0x08 /* Private */,
       8,    1,   87,    2, 0x08 /* Private */,
       9,    1,   90,    2, 0x08 /* Private */,
      11,    0,   93,    2, 0x08 /* Private */,
      12,    0,   94,    2, 0x08 /* Private */,
      13,    0,   95,    2, 0x08 /* Private */,
      14,    0,   96,    2, 0x08 /* Private */,
      15,    0,   97,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::QRect,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MultiVideoPanel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MultiVideoPanel *_t = static_cast<MultiVideoPanel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->actCamera((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->actMic((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->record_manage_clicked(); break;
        case 3: _t->on_dis_actCamera((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->on_dis_actMic((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->on_local_actCamera((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->on_selectCaptureArea((*reinterpret_cast< QRect(*)>(_a[1]))); break;
        case 7: _t->on_btn_record_manage_clicked(); break;
        case 8: _t->on_tabWidget_currentChanged(); break;
        case 9: _t->on_btn_area_share_clicked(); break;
        case 10: _t->on_btn_full_share_clicked(); break;
        case 11: _t->on_btn_esc_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MultiVideoPanel::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MultiVideoPanel::actCamera)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MultiVideoPanel::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MultiVideoPanel::actMic)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (MultiVideoPanel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MultiVideoPanel::record_manage_clicked)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MultiVideoPanel::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_MultiVideoPanel.data,
      qt_meta_data_MultiVideoPanel,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MultiVideoPanel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MultiVideoPanel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MultiVideoPanel.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "TXShareFrameCallback"))
        return static_cast< TXShareFrameCallback*>(this);
    return QWidget::qt_metacast(_clname);
}

int MultiVideoPanel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void MultiVideoPanel::actCamera(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MultiVideoPanel::actMic(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void MultiVideoPanel::record_manage_clicked()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

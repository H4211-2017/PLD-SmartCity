/****************************************************************************
** Meta object code from reading C++ file 'roomsform.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/interface/roomsform.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'roomsform.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_RoomsForm_t {
    QByteArrayData data[12];
    char stringdata[117];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_RoomsForm_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_RoomsForm_t qt_meta_stringdata_RoomsForm = {
    {
QT_MOC_LITERAL(0, 0, 9),
QT_MOC_LITERAL(1, 10, 7),
QT_MOC_LITERAL(2, 18, 0),
QT_MOC_LITERAL(3, 19, 10),
QT_MOC_LITERAL(4, 30, 10),
QT_MOC_LITERAL(5, 41, 10),
QT_MOC_LITERAL(6, 52, 12),
QT_MOC_LITERAL(7, 65, 9),
QT_MOC_LITERAL(8, 75, 11),
QT_MOC_LITERAL(9, 87, 5),
QT_MOC_LITERAL(10, 93, 13),
QT_MOC_LITERAL(11, 107, 8)
    },
    "RoomsForm\0addRoom\0\0removeRoom\0modifyRoom\0"
    "moveRoomUp\0moveRoomDown\0sortRooms\0"
    "roomChanged\0index\0filterChanged\0"
    "comments\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RoomsForm[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x0a,
       3,    0,   60,    2, 0x0a,
       4,    0,   61,    2, 0x0a,
       5,    0,   62,    2, 0x0a,
       6,    0,   63,    2, 0x0a,
       7,    0,   64,    2, 0x0a,
       8,    1,   65,    2, 0x0a,
      10,    0,   68,    2, 0x0a,
      11,    0,   69,    2, 0x0a,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void RoomsForm::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        RoomsForm *_t = static_cast<RoomsForm *>(_o);
        switch (_id) {
        case 0: _t->addRoom(); break;
        case 1: _t->removeRoom(); break;
        case 2: _t->modifyRoom(); break;
        case 3: _t->moveRoomUp(); break;
        case 4: _t->moveRoomDown(); break;
        case 5: _t->sortRooms(); break;
        case 6: _t->roomChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->filterChanged(); break;
        case 8: _t->comments(); break;
        default: ;
        }
    }
}

const QMetaObject RoomsForm::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_RoomsForm.data,
      qt_meta_data_RoomsForm,  qt_static_metacall, 0, 0}
};


const QMetaObject *RoomsForm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RoomsForm::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_RoomsForm.stringdata))
        return static_cast<void*>(const_cast< RoomsForm*>(this));
    if (!strcmp(_clname, "Ui::RoomsForm_template"))
        return static_cast< Ui::RoomsForm_template*>(const_cast< RoomsForm*>(this));
    return QDialog::qt_metacast(_clname);
}

int RoomsForm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
QT_END_MOC_NAMESPACE

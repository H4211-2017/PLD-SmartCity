/****************************************************************************
** Meta object code from reading C++ file 'timetableviewroomsform.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/interface/timetableviewroomsform.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'timetableviewroomsform.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_TimetableViewRoomsForm_t {
    QByteArrayData data[13];
    char stringdata[155];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_TimetableViewRoomsForm_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_TimetableViewRoomsForm_t qt_meta_stringdata_TimetableViewRoomsForm = {
    {
QT_MOC_LITERAL(0, 0, 22),
QT_MOC_LITERAL(1, 23, 25),
QT_MOC_LITERAL(2, 49, 0),
QT_MOC_LITERAL(3, 50, 11),
QT_MOC_LITERAL(4, 62, 8),
QT_MOC_LITERAL(5, 71, 18),
QT_MOC_LITERAL(6, 90, 17),
QT_MOC_LITERAL(7, 108, 7),
QT_MOC_LITERAL(8, 116, 8),
QT_MOC_LITERAL(9, 125, 4),
QT_MOC_LITERAL(10, 130, 8),
QT_MOC_LITERAL(11, 139, 9),
QT_MOC_LITERAL(12, 149, 4)
    },
    "TimetableViewRoomsForm\0updateRoomsTimetableTable\0"
    "\0roomChanged\0roomName\0currentItemChanged\0"
    "QTableWidgetItem*\0current\0previous\0"
    "lock\0lockTime\0lockSpace\0help\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TimetableViewRoomsForm[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x0a,
       3,    1,   50,    2, 0x0a,
       5,    2,   53,    2, 0x0a,
       9,    0,   58,    2, 0x0a,
      10,    0,   59,    2, 0x0a,
      11,    0,   60,    2, 0x0a,
      12,    0,   61,    2, 0x0a,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, 0x80000000 | 6, 0x80000000 | 6,    7,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void TimetableViewRoomsForm::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TimetableViewRoomsForm *_t = static_cast<TimetableViewRoomsForm *>(_o);
        switch (_id) {
        case 0: _t->updateRoomsTimetableTable(); break;
        case 1: _t->roomChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->currentItemChanged((*reinterpret_cast< QTableWidgetItem*(*)>(_a[1])),(*reinterpret_cast< QTableWidgetItem*(*)>(_a[2]))); break;
        case 3: _t->lock(); break;
        case 4: _t->lockTime(); break;
        case 5: _t->lockSpace(); break;
        case 6: _t->help(); break;
        default: ;
        }
    }
}

const QMetaObject TimetableViewRoomsForm::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_TimetableViewRoomsForm.data,
      qt_meta_data_TimetableViewRoomsForm,  qt_static_metacall, 0, 0}
};


const QMetaObject *TimetableViewRoomsForm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TimetableViewRoomsForm::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_TimetableViewRoomsForm.stringdata))
        return static_cast<void*>(const_cast< TimetableViewRoomsForm*>(this));
    if (!strcmp(_clname, "Ui::TimetableViewRoomsForm_template"))
        return static_cast< Ui::TimetableViewRoomsForm_template*>(const_cast< TimetableViewRoomsForm*>(this));
    return QDialog::qt_metacast(_clname);
}

int TimetableViewRoomsForm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_END_MOC_NAMESPACE
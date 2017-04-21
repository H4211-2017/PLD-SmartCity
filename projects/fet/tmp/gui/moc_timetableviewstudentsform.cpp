/****************************************************************************
** Meta object code from reading C++ file 'timetableviewstudentsform.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/interface/timetableviewstudentsform.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'timetableviewstudentsform.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_TimetableViewStudentsForm_t {
    QByteArrayData data[17];
    char stringdata[222];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_TimetableViewStudentsForm_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_TimetableViewStudentsForm_t qt_meta_stringdata_TimetableViewStudentsForm = {
    {
QT_MOC_LITERAL(0, 0, 25),
QT_MOC_LITERAL(1, 26, 8),
QT_MOC_LITERAL(2, 35, 0),
QT_MOC_LITERAL(3, 36, 9),
QT_MOC_LITERAL(4, 46, 13),
QT_MOC_LITERAL(5, 60, 28),
QT_MOC_LITERAL(6, 89, 11),
QT_MOC_LITERAL(7, 101, 8),
QT_MOC_LITERAL(8, 110, 12),
QT_MOC_LITERAL(9, 123, 9),
QT_MOC_LITERAL(10, 133, 15),
QT_MOC_LITERAL(11, 149, 12),
QT_MOC_LITERAL(12, 162, 18),
QT_MOC_LITERAL(13, 181, 17),
QT_MOC_LITERAL(14, 199, 7),
QT_MOC_LITERAL(15, 207, 8),
QT_MOC_LITERAL(16, 216, 4)
    },
    "TimetableViewStudentsForm\0lockTime\0\0"
    "lockSpace\0lockTimeSpace\0"
    "updateStudentsTimetableTable\0yearChanged\0"
    "yearName\0groupChanged\0groupName\0"
    "subgroupChanged\0subgroupName\0"
    "currentItemChanged\0QTableWidgetItem*\0"
    "current\0previous\0help\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TimetableViewStudentsForm[] = {

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
       6,    1,   63,    2, 0x0a,
       8,    1,   66,    2, 0x0a,
      10,    1,   69,    2, 0x0a,
      12,    2,   72,    2, 0x0a,
      16,    0,   77,    2, 0x0a,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void, 0x80000000 | 13, 0x80000000 | 13,   14,   15,
    QMetaType::Void,

       0        // eod
};

void TimetableViewStudentsForm::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TimetableViewStudentsForm *_t = static_cast<TimetableViewStudentsForm *>(_o);
        switch (_id) {
        case 0: _t->lockTime(); break;
        case 1: _t->lockSpace(); break;
        case 2: _t->lockTimeSpace(); break;
        case 3: _t->updateStudentsTimetableTable(); break;
        case 4: _t->yearChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->groupChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->subgroupChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->currentItemChanged((*reinterpret_cast< QTableWidgetItem*(*)>(_a[1])),(*reinterpret_cast< QTableWidgetItem*(*)>(_a[2]))); break;
        case 8: _t->help(); break;
        default: ;
        }
    }
}

const QMetaObject TimetableViewStudentsForm::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_TimetableViewStudentsForm.data,
      qt_meta_data_TimetableViewStudentsForm,  qt_static_metacall, 0, 0}
};


const QMetaObject *TimetableViewStudentsForm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TimetableViewStudentsForm::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_TimetableViewStudentsForm.stringdata))
        return static_cast<void*>(const_cast< TimetableViewStudentsForm*>(this));
    if (!strcmp(_clname, "Ui::TimetableViewStudentsForm_template"))
        return static_cast< Ui::TimetableViewStudentsForm_template*>(const_cast< TimetableViewStudentsForm*>(this));
    return QDialog::qt_metacast(_clname);
}

int TimetableViewStudentsForm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

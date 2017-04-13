/****************************************************************************
** Meta object code from reading C++ file 'addconstraintteachernotavailabletimesform.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/interface/addconstraintteachernotavailabletimesform.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'addconstraintteachernotavailabletimesform.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_AddConstraintTeacherNotAvailableTimesForm_t {
    QByteArrayData data[13];
    char stringdata[194];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_AddConstraintTeacherNotAvailableTimesForm_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_AddConstraintTeacherNotAvailableTimesForm_t qt_meta_stringdata_AddConstraintTeacherNotAvailableTimesForm = {
    {
QT_MOC_LITERAL(0, 0, 41),
QT_MOC_LITERAL(1, 42, 20),
QT_MOC_LITERAL(2, 63, 0),
QT_MOC_LITERAL(3, 64, 11),
QT_MOC_LITERAL(4, 76, 17),
QT_MOC_LITERAL(5, 94, 4),
QT_MOC_LITERAL(6, 99, 23),
QT_MOC_LITERAL(7, 123, 3),
QT_MOC_LITERAL(8, 127, 21),
QT_MOC_LITERAL(9, 149, 3),
QT_MOC_LITERAL(10, 153, 4),
QT_MOC_LITERAL(11, 158, 15),
QT_MOC_LITERAL(12, 174, 18)
    },
    "AddConstraintTeacherNotAvailableTimesForm\0"
    "addCurrentConstraint\0\0itemClicked\0"
    "QTableWidgetItem*\0item\0horizontalHeaderClicked\0"
    "col\0verticalHeaderClicked\0row\0help\0"
    "setAllAvailable\0setAllNotAvailable\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AddConstraintTeacherNotAvailableTimesForm[] = {

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
       6,    1,   53,    2, 0x0a,
       8,    1,   56,    2, 0x0a,
      10,    0,   59,    2, 0x0a,
      11,    0,   60,    2, 0x0a,
      12,    0,   61,    2, 0x0a,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void AddConstraintTeacherNotAvailableTimesForm::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AddConstraintTeacherNotAvailableTimesForm *_t = static_cast<AddConstraintTeacherNotAvailableTimesForm *>(_o);
        switch (_id) {
        case 0: _t->addCurrentConstraint(); break;
        case 1: _t->itemClicked((*reinterpret_cast< QTableWidgetItem*(*)>(_a[1]))); break;
        case 2: _t->horizontalHeaderClicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->verticalHeaderClicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->help(); break;
        case 5: _t->setAllAvailable(); break;
        case 6: _t->setAllNotAvailable(); break;
        default: ;
        }
    }
}

const QMetaObject AddConstraintTeacherNotAvailableTimesForm::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_AddConstraintTeacherNotAvailableTimesForm.data,
      qt_meta_data_AddConstraintTeacherNotAvailableTimesForm,  qt_static_metacall, 0, 0}
};


const QMetaObject *AddConstraintTeacherNotAvailableTimesForm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AddConstraintTeacherNotAvailableTimesForm::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_AddConstraintTeacherNotAvailableTimesForm.stringdata))
        return static_cast<void*>(const_cast< AddConstraintTeacherNotAvailableTimesForm*>(this));
    if (!strcmp(_clname, "Ui::AddConstraintTeacherNotAvailableTimesForm_template"))
        return static_cast< Ui::AddConstraintTeacherNotAvailableTimesForm_template*>(const_cast< AddConstraintTeacherNotAvailableTimesForm*>(this));
    return QDialog::qt_metacast(_clname);
}

int AddConstraintTeacherNotAvailableTimesForm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

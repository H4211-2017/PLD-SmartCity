/****************************************************************************
** Meta object code from reading C++ file 'addconstraintstudentssetminhoursdailyform.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/interface/addconstraintstudentssetminhoursdailyform.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'addconstraintstudentssetminhoursdailyform.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_AddConstraintStudentsSetMinHoursDailyForm_t {
    QByteArrayData data[5];
    char stringdata[117];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_AddConstraintStudentsSetMinHoursDailyForm_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_AddConstraintStudentsSetMinHoursDailyForm_t qt_meta_stringdata_AddConstraintStudentsSetMinHoursDailyForm = {
    {
QT_MOC_LITERAL(0, 0, 41),
QT_MOC_LITERAL(1, 42, 17),
QT_MOC_LITERAL(2, 60, 0),
QT_MOC_LITERAL(3, 61, 20),
QT_MOC_LITERAL(4, 82, 33)
    },
    "AddConstraintStudentsSetMinHoursDailyForm\0"
    "constraintChanged\0\0addCurrentConstraint\0"
    "on_allowEmptyDaysCheckBox_toggled\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AddConstraintStudentsSetMinHoursDailyForm[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x0a,
       3,    0,   30,    2, 0x0a,
       4,    0,   31,    2, 0x0a,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void AddConstraintStudentsSetMinHoursDailyForm::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AddConstraintStudentsSetMinHoursDailyForm *_t = static_cast<AddConstraintStudentsSetMinHoursDailyForm *>(_o);
        switch (_id) {
        case 0: _t->constraintChanged(); break;
        case 1: _t->addCurrentConstraint(); break;
        case 2: _t->on_allowEmptyDaysCheckBox_toggled(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject AddConstraintStudentsSetMinHoursDailyForm::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_AddConstraintStudentsSetMinHoursDailyForm.data,
      qt_meta_data_AddConstraintStudentsSetMinHoursDailyForm,  qt_static_metacall, 0, 0}
};


const QMetaObject *AddConstraintStudentsSetMinHoursDailyForm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AddConstraintStudentsSetMinHoursDailyForm::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_AddConstraintStudentsSetMinHoursDailyForm.stringdata))
        return static_cast<void*>(const_cast< AddConstraintStudentsSetMinHoursDailyForm*>(this));
    if (!strcmp(_clname, "Ui::AddConstraintStudentsSetMinHoursDailyForm_template"))
        return static_cast< Ui::AddConstraintStudentsSetMinHoursDailyForm_template*>(const_cast< AddConstraintStudentsSetMinHoursDailyForm*>(this));
    return QDialog::qt_metacast(_clname);
}

int AddConstraintStudentsSetMinHoursDailyForm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE

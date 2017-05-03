/****************************************************************************
** Meta object code from reading C++ file 'addconstraintteachersmindaysperweekform.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/interface/addconstraintteachersmindaysperweekform.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'addconstraintteachersmindaysperweekform.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_AddConstraintTeachersMinDaysPerWeekForm_t {
    QByteArrayData data[3];
    char stringdata[63];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_AddConstraintTeachersMinDaysPerWeekForm_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_AddConstraintTeachersMinDaysPerWeekForm_t qt_meta_stringdata_AddConstraintTeachersMinDaysPerWeekForm = {
    {
QT_MOC_LITERAL(0, 0, 39),
QT_MOC_LITERAL(1, 40, 20),
QT_MOC_LITERAL(2, 61, 0)
    },
    "AddConstraintTeachersMinDaysPerWeekForm\0"
    "addCurrentConstraint\0\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AddConstraintTeachersMinDaysPerWeekForm[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x0a,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void AddConstraintTeachersMinDaysPerWeekForm::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AddConstraintTeachersMinDaysPerWeekForm *_t = static_cast<AddConstraintTeachersMinDaysPerWeekForm *>(_o);
        switch (_id) {
        case 0: _t->addCurrentConstraint(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject AddConstraintTeachersMinDaysPerWeekForm::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_AddConstraintTeachersMinDaysPerWeekForm.data,
      qt_meta_data_AddConstraintTeachersMinDaysPerWeekForm,  qt_static_metacall, 0, 0}
};


const QMetaObject *AddConstraintTeachersMinDaysPerWeekForm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AddConstraintTeachersMinDaysPerWeekForm::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_AddConstraintTeachersMinDaysPerWeekForm.stringdata))
        return static_cast<void*>(const_cast< AddConstraintTeachersMinDaysPerWeekForm*>(this));
    if (!strcmp(_clname, "Ui::AddConstraintTeachersMinDaysPerWeekForm_template"))
        return static_cast< Ui::AddConstraintTeachersMinDaysPerWeekForm_template*>(const_cast< AddConstraintTeachersMinDaysPerWeekForm*>(this));
    return QDialog::qt_metacast(_clname);
}

int AddConstraintTeachersMinDaysPerWeekForm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE

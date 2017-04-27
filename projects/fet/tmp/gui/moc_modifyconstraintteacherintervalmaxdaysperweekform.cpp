/****************************************************************************
** Meta object code from reading C++ file 'modifyconstraintteacherintervalmaxdaysperweekform.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/interface/modifyconstraintteacherintervalmaxdaysperweekform.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'modifyconstraintteacherintervalmaxdaysperweekform.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ModifyConstraintTeacherIntervalMaxDaysPerWeekForm_t {
    QByteArrayData data[5];
    char stringdata[80];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_ModifyConstraintTeacherIntervalMaxDaysPerWeekForm_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_ModifyConstraintTeacherIntervalMaxDaysPerWeekForm_t qt_meta_stringdata_ModifyConstraintTeacherIntervalMaxDaysPerWeekForm = {
    {
QT_MOC_LITERAL(0, 0, 49),
QT_MOC_LITERAL(1, 50, 17),
QT_MOC_LITERAL(2, 68, 0),
QT_MOC_LITERAL(3, 69, 2),
QT_MOC_LITERAL(4, 72, 6)
    },
    "ModifyConstraintTeacherIntervalMaxDaysPerWeekForm\0"
    "constraintChanged\0\0ok\0cancel\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ModifyConstraintTeacherIntervalMaxDaysPerWeekForm[] = {

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

void ModifyConstraintTeacherIntervalMaxDaysPerWeekForm::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ModifyConstraintTeacherIntervalMaxDaysPerWeekForm *_t = static_cast<ModifyConstraintTeacherIntervalMaxDaysPerWeekForm *>(_o);
        switch (_id) {
        case 0: _t->constraintChanged(); break;
        case 1: _t->ok(); break;
        case 2: _t->cancel(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject ModifyConstraintTeacherIntervalMaxDaysPerWeekForm::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ModifyConstraintTeacherIntervalMaxDaysPerWeekForm.data,
      qt_meta_data_ModifyConstraintTeacherIntervalMaxDaysPerWeekForm,  qt_static_metacall, 0, 0}
};


const QMetaObject *ModifyConstraintTeacherIntervalMaxDaysPerWeekForm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ModifyConstraintTeacherIntervalMaxDaysPerWeekForm::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ModifyConstraintTeacherIntervalMaxDaysPerWeekForm.stringdata))
        return static_cast<void*>(const_cast< ModifyConstraintTeacherIntervalMaxDaysPerWeekForm*>(this));
    if (!strcmp(_clname, "Ui::ModifyConstraintTeacherIntervalMaxDaysPerWeekForm_template"))
        return static_cast< Ui::ModifyConstraintTeacherIntervalMaxDaysPerWeekForm_template*>(const_cast< ModifyConstraintTeacherIntervalMaxDaysPerWeekForm*>(this));
    return QDialog::qt_metacast(_clname);
}

int ModifyConstraintTeacherIntervalMaxDaysPerWeekForm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

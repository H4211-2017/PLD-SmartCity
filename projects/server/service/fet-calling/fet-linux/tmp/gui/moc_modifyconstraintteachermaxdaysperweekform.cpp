/****************************************************************************
** Meta object code from reading C++ file 'modifyconstraintteachermaxdaysperweekform.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/interface/modifyconstraintteachermaxdaysperweekform.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'modifyconstraintteachermaxdaysperweekform.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ModifyConstraintTeacherMaxDaysPerWeekForm_t {
    QByteArrayData data[5];
    char stringdata[72];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_ModifyConstraintTeacherMaxDaysPerWeekForm_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_ModifyConstraintTeacherMaxDaysPerWeekForm_t qt_meta_stringdata_ModifyConstraintTeacherMaxDaysPerWeekForm = {
    {
QT_MOC_LITERAL(0, 0, 41),
QT_MOC_LITERAL(1, 42, 17),
QT_MOC_LITERAL(2, 60, 0),
QT_MOC_LITERAL(3, 61, 2),
QT_MOC_LITERAL(4, 64, 6)
    },
    "ModifyConstraintTeacherMaxDaysPerWeekForm\0"
    "constraintChanged\0\0ok\0cancel\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ModifyConstraintTeacherMaxDaysPerWeekForm[] = {

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

void ModifyConstraintTeacherMaxDaysPerWeekForm::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ModifyConstraintTeacherMaxDaysPerWeekForm *_t = static_cast<ModifyConstraintTeacherMaxDaysPerWeekForm *>(_o);
        switch (_id) {
        case 0: _t->constraintChanged(); break;
        case 1: _t->ok(); break;
        case 2: _t->cancel(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject ModifyConstraintTeacherMaxDaysPerWeekForm::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ModifyConstraintTeacherMaxDaysPerWeekForm.data,
      qt_meta_data_ModifyConstraintTeacherMaxDaysPerWeekForm,  qt_static_metacall, 0, 0}
};


const QMetaObject *ModifyConstraintTeacherMaxDaysPerWeekForm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ModifyConstraintTeacherMaxDaysPerWeekForm::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ModifyConstraintTeacherMaxDaysPerWeekForm.stringdata))
        return static_cast<void*>(const_cast< ModifyConstraintTeacherMaxDaysPerWeekForm*>(this));
    if (!strcmp(_clname, "Ui::ModifyConstraintTeacherMaxDaysPerWeekForm_template"))
        return static_cast< Ui::ModifyConstraintTeacherMaxDaysPerWeekForm_template*>(const_cast< ModifyConstraintTeacherMaxDaysPerWeekForm*>(this));
    return QDialog::qt_metacast(_clname);
}

int ModifyConstraintTeacherMaxDaysPerWeekForm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

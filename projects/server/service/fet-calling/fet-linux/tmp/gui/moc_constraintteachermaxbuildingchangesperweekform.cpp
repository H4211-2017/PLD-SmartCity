/****************************************************************************
** Meta object code from reading C++ file 'constraintteachermaxbuildingchangesperweekform.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/interface/constraintteachermaxbuildingchangesperweekform.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'constraintteachermaxbuildingchangesperweekform.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ConstraintTeacherMaxBuildingChangesPerWeekForm_t {
    QByteArrayData data[8];
    char stringdata[135];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_ConstraintTeacherMaxBuildingChangesPerWeekForm_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_ConstraintTeacherMaxBuildingChangesPerWeekForm_t qt_meta_stringdata_ConstraintTeacherMaxBuildingChangesPerWeekForm = {
    {
QT_MOC_LITERAL(0, 0, 46),
QT_MOC_LITERAL(1, 47, 17),
QT_MOC_LITERAL(2, 65, 0),
QT_MOC_LITERAL(3, 66, 5),
QT_MOC_LITERAL(4, 72, 13),
QT_MOC_LITERAL(5, 86, 16),
QT_MOC_LITERAL(6, 103, 16),
QT_MOC_LITERAL(7, 120, 13)
    },
    "ConstraintTeacherMaxBuildingChangesPerWeekForm\0"
    "constraintChanged\0\0index\0addConstraint\0"
    "modifyConstraint\0removeConstraint\0"
    "filterChanged\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ConstraintTeacherMaxBuildingChangesPerWeekForm[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x0a,
       4,    0,   42,    2, 0x0a,
       5,    0,   43,    2, 0x0a,
       6,    0,   44,    2, 0x0a,
       7,    0,   45,    2, 0x0a,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ConstraintTeacherMaxBuildingChangesPerWeekForm::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ConstraintTeacherMaxBuildingChangesPerWeekForm *_t = static_cast<ConstraintTeacherMaxBuildingChangesPerWeekForm *>(_o);
        switch (_id) {
        case 0: _t->constraintChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->addConstraint(); break;
        case 2: _t->modifyConstraint(); break;
        case 3: _t->removeConstraint(); break;
        case 4: _t->filterChanged(); break;
        default: ;
        }
    }
}

const QMetaObject ConstraintTeacherMaxBuildingChangesPerWeekForm::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ConstraintTeacherMaxBuildingChangesPerWeekForm.data,
      qt_meta_data_ConstraintTeacherMaxBuildingChangesPerWeekForm,  qt_static_metacall, 0, 0}
};


const QMetaObject *ConstraintTeacherMaxBuildingChangesPerWeekForm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ConstraintTeacherMaxBuildingChangesPerWeekForm::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ConstraintTeacherMaxBuildingChangesPerWeekForm.stringdata))
        return static_cast<void*>(const_cast< ConstraintTeacherMaxBuildingChangesPerWeekForm*>(this));
    if (!strcmp(_clname, "Ui::ConstraintTeacherMaxBuildingChangesPerWeekForm_template"))
        return static_cast< Ui::ConstraintTeacherMaxBuildingChangesPerWeekForm_template*>(const_cast< ConstraintTeacherMaxBuildingChangesPerWeekForm*>(this));
    return QDialog::qt_metacast(_clname);
}

int ConstraintTeacherMaxBuildingChangesPerWeekForm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
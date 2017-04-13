/****************************************************************************
** Meta object code from reading C++ file 'modifyconstraintteachermingapsbetweenbuildingchangesform.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/interface/modifyconstraintteachermingapsbetweenbuildingchangesform.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'modifyconstraintteachermingapsbetweenbuildingchangesform.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ModifyConstraintTeacherMinGapsBetweenBuildingChangesForm_t {
    QByteArrayData data[5];
    char stringdata[87];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_ModifyConstraintTeacherMinGapsBetweenBuildingChangesForm_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_ModifyConstraintTeacherMinGapsBetweenBuildingChangesForm_t qt_meta_stringdata_ModifyConstraintTeacherMinGapsBetweenBuildingChangesForm = {
    {
QT_MOC_LITERAL(0, 0, 56),
QT_MOC_LITERAL(1, 57, 17),
QT_MOC_LITERAL(2, 75, 0),
QT_MOC_LITERAL(3, 76, 2),
QT_MOC_LITERAL(4, 79, 6)
    },
    "ModifyConstraintTeacherMinGapsBetweenBuildingChangesForm\0"
    "constraintChanged\0\0ok\0cancel\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ModifyConstraintTeacherMinGapsBetweenBuildingChangesForm[] = {

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

void ModifyConstraintTeacherMinGapsBetweenBuildingChangesForm::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ModifyConstraintTeacherMinGapsBetweenBuildingChangesForm *_t = static_cast<ModifyConstraintTeacherMinGapsBetweenBuildingChangesForm *>(_o);
        switch (_id) {
        case 0: _t->constraintChanged(); break;
        case 1: _t->ok(); break;
        case 2: _t->cancel(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject ModifyConstraintTeacherMinGapsBetweenBuildingChangesForm::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ModifyConstraintTeacherMinGapsBetweenBuildingChangesForm.data,
      qt_meta_data_ModifyConstraintTeacherMinGapsBetweenBuildingChangesForm,  qt_static_metacall, 0, 0}
};


const QMetaObject *ModifyConstraintTeacherMinGapsBetweenBuildingChangesForm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ModifyConstraintTeacherMinGapsBetweenBuildingChangesForm::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ModifyConstraintTeacherMinGapsBetweenBuildingChangesForm.stringdata))
        return static_cast<void*>(const_cast< ModifyConstraintTeacherMinGapsBetweenBuildingChangesForm*>(this));
    if (!strcmp(_clname, "Ui::ModifyConstraintTeacherMinGapsBetweenBuildingChangesForm_template"))
        return static_cast< Ui::ModifyConstraintTeacherMinGapsBetweenBuildingChangesForm_template*>(const_cast< ModifyConstraintTeacherMinGapsBetweenBuildingChangesForm*>(this));
    return QDialog::qt_metacast(_clname);
}

int ModifyConstraintTeacherMinGapsBetweenBuildingChangesForm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

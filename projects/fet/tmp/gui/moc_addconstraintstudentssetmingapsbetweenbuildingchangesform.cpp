/****************************************************************************
** Meta object code from reading C++ file 'addconstraintstudentssetmingapsbetweenbuildingchangesform.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/interface/addconstraintstudentssetmingapsbetweenbuildingchangesform.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'addconstraintstudentssetmingapsbetweenbuildingchangesform.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_AddConstraintStudentsSetMinGapsBetweenBuildingChangesForm_t {
    QByteArrayData data[4];
    char stringdata[99];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_AddConstraintStudentsSetMinGapsBetweenBuildingChangesForm_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_AddConstraintStudentsSetMinGapsBetweenBuildingChangesForm_t qt_meta_stringdata_AddConstraintStudentsSetMinGapsBetweenBuildingChangesForm = {
    {
QT_MOC_LITERAL(0, 0, 57),
QT_MOC_LITERAL(1, 58, 17),
QT_MOC_LITERAL(2, 76, 0),
QT_MOC_LITERAL(3, 77, 20)
    },
    "AddConstraintStudentsSetMinGapsBetweenBuildingChangesForm\0"
    "constraintChanged\0\0addCurrentConstraint\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AddConstraintStudentsSetMinGapsBetweenBuildingChangesForm[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x0a,
       3,    0,   25,    2, 0x0a,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void AddConstraintStudentsSetMinGapsBetweenBuildingChangesForm::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AddConstraintStudentsSetMinGapsBetweenBuildingChangesForm *_t = static_cast<AddConstraintStudentsSetMinGapsBetweenBuildingChangesForm *>(_o);
        switch (_id) {
        case 0: _t->constraintChanged(); break;
        case 1: _t->addCurrentConstraint(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject AddConstraintStudentsSetMinGapsBetweenBuildingChangesForm::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_AddConstraintStudentsSetMinGapsBetweenBuildingChangesForm.data,
      qt_meta_data_AddConstraintStudentsSetMinGapsBetweenBuildingChangesForm,  qt_static_metacall, 0, 0}
};


const QMetaObject *AddConstraintStudentsSetMinGapsBetweenBuildingChangesForm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AddConstraintStudentsSetMinGapsBetweenBuildingChangesForm::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_AddConstraintStudentsSetMinGapsBetweenBuildingChangesForm.stringdata))
        return static_cast<void*>(const_cast< AddConstraintStudentsSetMinGapsBetweenBuildingChangesForm*>(this));
    if (!strcmp(_clname, "Ui::AddConstraintStudentsSetMinGapsBetweenBuildingChangesForm_template"))
        return static_cast< Ui::AddConstraintStudentsSetMinGapsBetweenBuildingChangesForm_template*>(const_cast< AddConstraintStudentsSetMinGapsBetweenBuildingChangesForm*>(this));
    return QDialog::qt_metacast(_clname);
}

int AddConstraintStudentsSetMinGapsBetweenBuildingChangesForm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE

/****************************************************************************
** Meta object code from reading C++ file 'modifyconstraintstudentssetminhoursdailyform.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/interface/modifyconstraintstudentssetminhoursdailyform.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'modifyconstraintstudentssetminhoursdailyform.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ModifyConstraintStudentsSetMinHoursDailyForm_t {
    QByteArrayData data[6];
    char stringdata[105];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_ModifyConstraintStudentsSetMinHoursDailyForm_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_ModifyConstraintStudentsSetMinHoursDailyForm_t qt_meta_stringdata_ModifyConstraintStudentsSetMinHoursDailyForm = {
    {
QT_MOC_LITERAL(0, 0, 44),
QT_MOC_LITERAL(1, 45, 17),
QT_MOC_LITERAL(2, 63, 0),
QT_MOC_LITERAL(3, 64, 2),
QT_MOC_LITERAL(4, 67, 6),
QT_MOC_LITERAL(5, 74, 29)
    },
    "ModifyConstraintStudentsSetMinHoursDailyForm\0"
    "constraintChanged\0\0ok\0cancel\0"
    "allowEmptyDaysCheckBoxToggled\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ModifyConstraintStudentsSetMinHoursDailyForm[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x0a,
       3,    0,   35,    2, 0x0a,
       4,    0,   36,    2, 0x0a,
       5,    0,   37,    2, 0x0a,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ModifyConstraintStudentsSetMinHoursDailyForm::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ModifyConstraintStudentsSetMinHoursDailyForm *_t = static_cast<ModifyConstraintStudentsSetMinHoursDailyForm *>(_o);
        switch (_id) {
        case 0: _t->constraintChanged(); break;
        case 1: _t->ok(); break;
        case 2: _t->cancel(); break;
        case 3: _t->allowEmptyDaysCheckBoxToggled(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject ModifyConstraintStudentsSetMinHoursDailyForm::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ModifyConstraintStudentsSetMinHoursDailyForm.data,
      qt_meta_data_ModifyConstraintStudentsSetMinHoursDailyForm,  qt_static_metacall, 0, 0}
};


const QMetaObject *ModifyConstraintStudentsSetMinHoursDailyForm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ModifyConstraintStudentsSetMinHoursDailyForm::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ModifyConstraintStudentsSetMinHoursDailyForm.stringdata))
        return static_cast<void*>(const_cast< ModifyConstraintStudentsSetMinHoursDailyForm*>(this));
    if (!strcmp(_clname, "Ui::ModifyConstraintStudentsSetMinHoursDailyForm_template"))
        return static_cast< Ui::ModifyConstraintStudentsSetMinHoursDailyForm_template*>(const_cast< ModifyConstraintStudentsSetMinHoursDailyForm*>(this));
    return QDialog::qt_metacast(_clname);
}

int ModifyConstraintStudentsSetMinHoursDailyForm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE

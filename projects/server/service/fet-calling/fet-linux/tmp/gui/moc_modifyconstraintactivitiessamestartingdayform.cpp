/****************************************************************************
** Meta object code from reading C++ file 'modifyconstraintactivitiessamestartingdayform.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/interface/modifyconstraintactivitiessamestartingdayform.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'modifyconstraintactivitiessamestartingdayform.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ModifyConstraintActivitiesSameStartingDayForm_t {
    QByteArrayData data[9];
    char stringdata[122];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_ModifyConstraintActivitiesSameStartingDayForm_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_ModifyConstraintActivitiesSameStartingDayForm_t qt_meta_stringdata_ModifyConstraintActivitiesSameStartingDayForm = {
    {
QT_MOC_LITERAL(0, 0, 45),
QT_MOC_LITERAL(1, 46, 13),
QT_MOC_LITERAL(2, 60, 0),
QT_MOC_LITERAL(3, 61, 11),
QT_MOC_LITERAL(4, 73, 16),
QT_MOC_LITERAL(5, 90, 14),
QT_MOC_LITERAL(6, 105, 5),
QT_MOC_LITERAL(7, 111, 2),
QT_MOC_LITERAL(8, 114, 6)
    },
    "ModifyConstraintActivitiesSameStartingDayForm\0"
    "filterChanged\0\0addActivity\0addAllActivities\0"
    "removeActivity\0clear\0ok\0cancel\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ModifyConstraintActivitiesSameStartingDayForm[] = {

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
       3,    0,   50,    2, 0x0a,
       4,    0,   51,    2, 0x0a,
       5,    0,   52,    2, 0x0a,
       6,    0,   53,    2, 0x0a,
       7,    0,   54,    2, 0x0a,
       8,    0,   55,    2, 0x0a,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ModifyConstraintActivitiesSameStartingDayForm::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ModifyConstraintActivitiesSameStartingDayForm *_t = static_cast<ModifyConstraintActivitiesSameStartingDayForm *>(_o);
        switch (_id) {
        case 0: _t->filterChanged(); break;
        case 1: _t->addActivity(); break;
        case 2: _t->addAllActivities(); break;
        case 3: _t->removeActivity(); break;
        case 4: _t->clear(); break;
        case 5: _t->ok(); break;
        case 6: _t->cancel(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject ModifyConstraintActivitiesSameStartingDayForm::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ModifyConstraintActivitiesSameStartingDayForm.data,
      qt_meta_data_ModifyConstraintActivitiesSameStartingDayForm,  qt_static_metacall, 0, 0}
};


const QMetaObject *ModifyConstraintActivitiesSameStartingDayForm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ModifyConstraintActivitiesSameStartingDayForm::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ModifyConstraintActivitiesSameStartingDayForm.stringdata))
        return static_cast<void*>(const_cast< ModifyConstraintActivitiesSameStartingDayForm*>(this));
    if (!strcmp(_clname, "Ui::ModifyConstraintActivitiesSameStartingDayForm_template"))
        return static_cast< Ui::ModifyConstraintActivitiesSameStartingDayForm_template*>(const_cast< ModifyConstraintActivitiesSameStartingDayForm*>(this));
    return QDialog::qt_metacast(_clname);
}

int ModifyConstraintActivitiesSameStartingDayForm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

/****************************************************************************
** Meta object code from reading C++ file 'addconstraintactivitiespreferredstartingtimesform.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/interface/addconstraintactivitiespreferredstartingtimesform.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'addconstraintactivitiespreferredstartingtimesform.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_AddConstraintActivitiesPreferredStartingTimesForm_t {
    QByteArrayData data[13];
    char stringdata[224];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_AddConstraintActivitiesPreferredStartingTimesForm_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_AddConstraintActivitiesPreferredStartingTimesForm_t qt_meta_stringdata_AddConstraintActivitiesPreferredStartingTimesForm = {
    {
QT_MOC_LITERAL(0, 0, 49),
QT_MOC_LITERAL(1, 50, 13),
QT_MOC_LITERAL(2, 64, 0),
QT_MOC_LITERAL(3, 65, 18),
QT_MOC_LITERAL(4, 84, 21),
QT_MOC_LITERAL(5, 106, 11),
QT_MOC_LITERAL(6, 118, 17),
QT_MOC_LITERAL(7, 136, 4),
QT_MOC_LITERAL(8, 141, 23),
QT_MOC_LITERAL(9, 165, 3),
QT_MOC_LITERAL(10, 169, 21),
QT_MOC_LITERAL(11, 191, 3),
QT_MOC_LITERAL(12, 195, 27)
    },
    "AddConstraintActivitiesPreferredStartingTimesForm\0"
    "addConstraint\0\0setAllSlotsAllowed\0"
    "setAllSlotsNotAllowed\0itemClicked\0"
    "QTableWidgetItem*\0item\0horizontalHeaderClicked\0"
    "col\0verticalHeaderClicked\0row\0"
    "on_durationCheckBox_toggled\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AddConstraintActivitiesPreferredStartingTimesForm[] = {

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
       5,    1,   52,    2, 0x0a,
       8,    1,   55,    2, 0x0a,
      10,    1,   58,    2, 0x0a,
      12,    0,   61,    2, 0x0a,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void,

       0        // eod
};

void AddConstraintActivitiesPreferredStartingTimesForm::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AddConstraintActivitiesPreferredStartingTimesForm *_t = static_cast<AddConstraintActivitiesPreferredStartingTimesForm *>(_o);
        switch (_id) {
        case 0: _t->addConstraint(); break;
        case 1: _t->setAllSlotsAllowed(); break;
        case 2: _t->setAllSlotsNotAllowed(); break;
        case 3: _t->itemClicked((*reinterpret_cast< QTableWidgetItem*(*)>(_a[1]))); break;
        case 4: _t->horizontalHeaderClicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->verticalHeaderClicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->on_durationCheckBox_toggled(); break;
        default: ;
        }
    }
}

const QMetaObject AddConstraintActivitiesPreferredStartingTimesForm::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_AddConstraintActivitiesPreferredStartingTimesForm.data,
      qt_meta_data_AddConstraintActivitiesPreferredStartingTimesForm,  qt_static_metacall, 0, 0}
};


const QMetaObject *AddConstraintActivitiesPreferredStartingTimesForm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AddConstraintActivitiesPreferredStartingTimesForm::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_AddConstraintActivitiesPreferredStartingTimesForm.stringdata))
        return static_cast<void*>(const_cast< AddConstraintActivitiesPreferredStartingTimesForm*>(this));
    if (!strcmp(_clname, "Ui::AddConstraintActivitiesPreferredStartingTimesForm_template"))
        return static_cast< Ui::AddConstraintActivitiesPreferredStartingTimesForm_template*>(const_cast< AddConstraintActivitiesPreferredStartingTimesForm*>(this));
    return QDialog::qt_metacast(_clname);
}

int AddConstraintActivitiesPreferredStartingTimesForm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

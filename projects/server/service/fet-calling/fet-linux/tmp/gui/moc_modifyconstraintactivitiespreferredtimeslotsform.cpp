/****************************************************************************
** Meta object code from reading C++ file 'modifyconstraintactivitiespreferredtimeslotsform.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/interface/modifyconstraintactivitiespreferredtimeslotsform.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'modifyconstraintactivitiespreferredtimeslotsform.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ModifyConstraintActivitiesPreferredTimeSlotsForm_t {
    QByteArrayData data[14];
    char stringdata[219];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_ModifyConstraintActivitiesPreferredTimeSlotsForm_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_ModifyConstraintActivitiesPreferredTimeSlotsForm_t qt_meta_stringdata_ModifyConstraintActivitiesPreferredTimeSlotsForm = {
    {
QT_MOC_LITERAL(0, 0, 48),
QT_MOC_LITERAL(1, 49, 2),
QT_MOC_LITERAL(2, 52, 0),
QT_MOC_LITERAL(3, 53, 6),
QT_MOC_LITERAL(4, 60, 11),
QT_MOC_LITERAL(5, 72, 17),
QT_MOC_LITERAL(6, 90, 4),
QT_MOC_LITERAL(7, 95, 23),
QT_MOC_LITERAL(8, 119, 3),
QT_MOC_LITERAL(9, 123, 21),
QT_MOC_LITERAL(10, 145, 3),
QT_MOC_LITERAL(11, 149, 18),
QT_MOC_LITERAL(12, 168, 21),
QT_MOC_LITERAL(13, 190, 27)
    },
    "ModifyConstraintActivitiesPreferredTimeSlotsForm\0"
    "ok\0\0cancel\0itemClicked\0QTableWidgetItem*\0"
    "item\0horizontalHeaderClicked\0col\0"
    "verticalHeaderClicked\0row\0setAllSlotsAllowed\0"
    "setAllSlotsNotAllowed\0on_durationCheckBox_toggled\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ModifyConstraintActivitiesPreferredTimeSlotsForm[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x0a,
       3,    0,   55,    2, 0x0a,
       4,    1,   56,    2, 0x0a,
       7,    1,   59,    2, 0x0a,
       9,    1,   62,    2, 0x0a,
      11,    0,   65,    2, 0x0a,
      12,    0,   66,    2, 0x0a,
      13,    0,   67,    2, 0x0a,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ModifyConstraintActivitiesPreferredTimeSlotsForm::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ModifyConstraintActivitiesPreferredTimeSlotsForm *_t = static_cast<ModifyConstraintActivitiesPreferredTimeSlotsForm *>(_o);
        switch (_id) {
        case 0: _t->ok(); break;
        case 1: _t->cancel(); break;
        case 2: _t->itemClicked((*reinterpret_cast< QTableWidgetItem*(*)>(_a[1]))); break;
        case 3: _t->horizontalHeaderClicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->verticalHeaderClicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->setAllSlotsAllowed(); break;
        case 6: _t->setAllSlotsNotAllowed(); break;
        case 7: _t->on_durationCheckBox_toggled(); break;
        default: ;
        }
    }
}

const QMetaObject ModifyConstraintActivitiesPreferredTimeSlotsForm::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ModifyConstraintActivitiesPreferredTimeSlotsForm.data,
      qt_meta_data_ModifyConstraintActivitiesPreferredTimeSlotsForm,  qt_static_metacall, 0, 0}
};


const QMetaObject *ModifyConstraintActivitiesPreferredTimeSlotsForm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ModifyConstraintActivitiesPreferredTimeSlotsForm::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ModifyConstraintActivitiesPreferredTimeSlotsForm.stringdata))
        return static_cast<void*>(const_cast< ModifyConstraintActivitiesPreferredTimeSlotsForm*>(this));
    if (!strcmp(_clname, "Ui::ModifyConstraintActivitiesPreferredTimeSlotsForm_template"))
        return static_cast< Ui::ModifyConstraintActivitiesPreferredTimeSlotsForm_template*>(const_cast< ModifyConstraintActivitiesPreferredTimeSlotsForm*>(this));
    return QDialog::qt_metacast(_clname);
}

int ModifyConstraintActivitiesPreferredTimeSlotsForm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
QT_END_MOC_NAMESPACE

/****************************************************************************
** Meta object code from reading C++ file 'addconstraintsubactivitiespreferredtimeslotsform.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/interface/addconstraintsubactivitiespreferredtimeslotsform.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'addconstraintsubactivitiespreferredtimeslotsform.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_AddConstraintSubactivitiesPreferredTimeSlotsForm_t {
    QByteArrayData data[12];
    char stringdata[195];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_AddConstraintSubactivitiesPreferredTimeSlotsForm_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_AddConstraintSubactivitiesPreferredTimeSlotsForm_t qt_meta_stringdata_AddConstraintSubactivitiesPreferredTimeSlotsForm = {
    {
QT_MOC_LITERAL(0, 0, 48),
QT_MOC_LITERAL(1, 49, 13),
QT_MOC_LITERAL(2, 63, 0),
QT_MOC_LITERAL(3, 64, 11),
QT_MOC_LITERAL(4, 76, 17),
QT_MOC_LITERAL(5, 94, 4),
QT_MOC_LITERAL(6, 99, 23),
QT_MOC_LITERAL(7, 123, 3),
QT_MOC_LITERAL(8, 127, 21),
QT_MOC_LITERAL(9, 149, 3),
QT_MOC_LITERAL(10, 153, 18),
QT_MOC_LITERAL(11, 172, 21)
    },
    "AddConstraintSubactivitiesPreferredTimeSlotsForm\0"
    "addConstraint\0\0itemClicked\0QTableWidgetItem*\0"
    "item\0horizontalHeaderClicked\0col\0"
    "verticalHeaderClicked\0row\0setAllSlotsAllowed\0"
    "setAllSlotsNotAllowed\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AddConstraintSubactivitiesPreferredTimeSlotsForm[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x0a,
       3,    1,   45,    2, 0x0a,
       6,    1,   48,    2, 0x0a,
       8,    1,   51,    2, 0x0a,
      10,    0,   54,    2, 0x0a,
      11,    0,   55,    2, 0x0a,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void AddConstraintSubactivitiesPreferredTimeSlotsForm::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AddConstraintSubactivitiesPreferredTimeSlotsForm *_t = static_cast<AddConstraintSubactivitiesPreferredTimeSlotsForm *>(_o);
        switch (_id) {
        case 0: _t->addConstraint(); break;
        case 1: _t->itemClicked((*reinterpret_cast< QTableWidgetItem*(*)>(_a[1]))); break;
        case 2: _t->horizontalHeaderClicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->verticalHeaderClicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->setAllSlotsAllowed(); break;
        case 5: _t->setAllSlotsNotAllowed(); break;
        default: ;
        }
    }
}

const QMetaObject AddConstraintSubactivitiesPreferredTimeSlotsForm::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_AddConstraintSubactivitiesPreferredTimeSlotsForm.data,
      qt_meta_data_AddConstraintSubactivitiesPreferredTimeSlotsForm,  qt_static_metacall, 0, 0}
};


const QMetaObject *AddConstraintSubactivitiesPreferredTimeSlotsForm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AddConstraintSubactivitiesPreferredTimeSlotsForm::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_AddConstraintSubactivitiesPreferredTimeSlotsForm.stringdata))
        return static_cast<void*>(const_cast< AddConstraintSubactivitiesPreferredTimeSlotsForm*>(this));
    if (!strcmp(_clname, "Ui::AddConstraintSubactivitiesPreferredTimeSlotsForm_template"))
        return static_cast< Ui::AddConstraintSubactivitiesPreferredTimeSlotsForm_template*>(const_cast< AddConstraintSubactivitiesPreferredTimeSlotsForm*>(this));
    return QDialog::qt_metacast(_clname);
}

int AddConstraintSubactivitiesPreferredTimeSlotsForm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE

/****************************************************************************
** Meta object code from reading C++ file 'addconstraintactivitypreferredstartingtimesform.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/interface/addconstraintactivitypreferredstartingtimesform.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'addconstraintactivitypreferredstartingtimesform.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_AddConstraintActivityPreferredStartingTimesForm_t {
    QByteArrayData data[13];
    char stringdata[208];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_AddConstraintActivityPreferredStartingTimesForm_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_AddConstraintActivityPreferredStartingTimesForm_t qt_meta_stringdata_AddConstraintActivityPreferredStartingTimesForm = {
    {
QT_MOC_LITERAL(0, 0, 47),
QT_MOC_LITERAL(1, 48, 13),
QT_MOC_LITERAL(2, 62, 0),
QT_MOC_LITERAL(3, 63, 13),
QT_MOC_LITERAL(4, 77, 11),
QT_MOC_LITERAL(5, 89, 17),
QT_MOC_LITERAL(6, 107, 4),
QT_MOC_LITERAL(7, 112, 23),
QT_MOC_LITERAL(8, 136, 3),
QT_MOC_LITERAL(9, 140, 21),
QT_MOC_LITERAL(10, 162, 3),
QT_MOC_LITERAL(11, 166, 18),
QT_MOC_LITERAL(12, 185, 21)
    },
    "AddConstraintActivityPreferredStartingTimesForm\0"
    "addConstraint\0\0filterChanged\0itemClicked\0"
    "QTableWidgetItem*\0item\0horizontalHeaderClicked\0"
    "col\0verticalHeaderClicked\0row\0"
    "setAllSlotsAllowed\0setAllSlotsNotAllowed\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AddConstraintActivityPreferredStartingTimesForm[] = {

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
       4,    1,   51,    2, 0x0a,
       7,    1,   54,    2, 0x0a,
       9,    1,   57,    2, 0x0a,
      11,    0,   60,    2, 0x0a,
      12,    0,   61,    2, 0x0a,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void AddConstraintActivityPreferredStartingTimesForm::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AddConstraintActivityPreferredStartingTimesForm *_t = static_cast<AddConstraintActivityPreferredStartingTimesForm *>(_o);
        switch (_id) {
        case 0: _t->addConstraint(); break;
        case 1: _t->filterChanged(); break;
        case 2: _t->itemClicked((*reinterpret_cast< QTableWidgetItem*(*)>(_a[1]))); break;
        case 3: _t->horizontalHeaderClicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->verticalHeaderClicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->setAllSlotsAllowed(); break;
        case 6: _t->setAllSlotsNotAllowed(); break;
        default: ;
        }
    }
}

const QMetaObject AddConstraintActivityPreferredStartingTimesForm::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_AddConstraintActivityPreferredStartingTimesForm.data,
      qt_meta_data_AddConstraintActivityPreferredStartingTimesForm,  qt_static_metacall, 0, 0}
};


const QMetaObject *AddConstraintActivityPreferredStartingTimesForm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AddConstraintActivityPreferredStartingTimesForm::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_AddConstraintActivityPreferredStartingTimesForm.stringdata))
        return static_cast<void*>(const_cast< AddConstraintActivityPreferredStartingTimesForm*>(this));
    if (!strcmp(_clname, "Ui::AddConstraintActivityPreferredStartingTimesForm_template"))
        return static_cast< Ui::AddConstraintActivityPreferredStartingTimesForm_template*>(const_cast< AddConstraintActivityPreferredStartingTimesForm*>(this));
    return QDialog::qt_metacast(_clname);
}

int AddConstraintActivityPreferredStartingTimesForm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

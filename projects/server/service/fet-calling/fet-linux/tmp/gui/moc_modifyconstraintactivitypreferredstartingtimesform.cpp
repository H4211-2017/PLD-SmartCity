/****************************************************************************
** Meta object code from reading C++ file 'modifyconstraintactivitypreferredstartingtimesform.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/interface/modifyconstraintactivitypreferredstartingtimesform.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'modifyconstraintactivitypreferredstartingtimesform.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ModifyConstraintActivityPreferredStartingTimesForm_t {
    QByteArrayData data[14];
    char stringdata[207];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_ModifyConstraintActivityPreferredStartingTimesForm_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_ModifyConstraintActivityPreferredStartingTimesForm_t qt_meta_stringdata_ModifyConstraintActivityPreferredStartingTimesForm = {
    {
QT_MOC_LITERAL(0, 0, 50),
QT_MOC_LITERAL(1, 51, 13),
QT_MOC_LITERAL(2, 65, 0),
QT_MOC_LITERAL(3, 66, 2),
QT_MOC_LITERAL(4, 69, 6),
QT_MOC_LITERAL(5, 76, 11),
QT_MOC_LITERAL(6, 88, 17),
QT_MOC_LITERAL(7, 106, 4),
QT_MOC_LITERAL(8, 111, 23),
QT_MOC_LITERAL(9, 135, 3),
QT_MOC_LITERAL(10, 139, 21),
QT_MOC_LITERAL(11, 161, 3),
QT_MOC_LITERAL(12, 165, 18),
QT_MOC_LITERAL(13, 184, 21)
    },
    "ModifyConstraintActivityPreferredStartingTimesForm\0"
    "filterChanged\0\0ok\0cancel\0itemClicked\0"
    "QTableWidgetItem*\0item\0horizontalHeaderClicked\0"
    "col\0verticalHeaderClicked\0row\0"
    "setAllSlotsAllowed\0setAllSlotsNotAllowed\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ModifyConstraintActivityPreferredStartingTimesForm[] = {

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
       4,    0,   56,    2, 0x0a,
       5,    1,   57,    2, 0x0a,
       8,    1,   60,    2, 0x0a,
      10,    1,   63,    2, 0x0a,
      12,    0,   66,    2, 0x0a,
      13,    0,   67,    2, 0x0a,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ModifyConstraintActivityPreferredStartingTimesForm::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ModifyConstraintActivityPreferredStartingTimesForm *_t = static_cast<ModifyConstraintActivityPreferredStartingTimesForm *>(_o);
        switch (_id) {
        case 0: _t->filterChanged(); break;
        case 1: _t->ok(); break;
        case 2: _t->cancel(); break;
        case 3: _t->itemClicked((*reinterpret_cast< QTableWidgetItem*(*)>(_a[1]))); break;
        case 4: _t->horizontalHeaderClicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->verticalHeaderClicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->setAllSlotsAllowed(); break;
        case 7: _t->setAllSlotsNotAllowed(); break;
        default: ;
        }
    }
}

const QMetaObject ModifyConstraintActivityPreferredStartingTimesForm::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ModifyConstraintActivityPreferredStartingTimesForm.data,
      qt_meta_data_ModifyConstraintActivityPreferredStartingTimesForm,  qt_static_metacall, 0, 0}
};


const QMetaObject *ModifyConstraintActivityPreferredStartingTimesForm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ModifyConstraintActivityPreferredStartingTimesForm::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ModifyConstraintActivityPreferredStartingTimesForm.stringdata))
        return static_cast<void*>(const_cast< ModifyConstraintActivityPreferredStartingTimesForm*>(this));
    if (!strcmp(_clname, "Ui::ModifyConstraintActivityPreferredStartingTimesForm_template"))
        return static_cast< Ui::ModifyConstraintActivityPreferredStartingTimesForm_template*>(const_cast< ModifyConstraintActivityPreferredStartingTimesForm*>(this));
    return QDialog::qt_metacast(_clname);
}

int ModifyConstraintActivityPreferredStartingTimesForm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

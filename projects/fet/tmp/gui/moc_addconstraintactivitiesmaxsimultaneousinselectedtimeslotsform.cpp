/****************************************************************************
** Meta object code from reading C++ file 'addconstraintactivitiesmaxsimultaneousinselectedtimeslotsform.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/interface/addconstraintactivitiesmaxsimultaneousinselectedtimeslotsform.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'addconstraintactivitiesmaxsimultaneousinselectedtimeslotsform.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_AddConstraintActivitiesMaxSimultaneousInSelectedTimeSlotsForm_t {
    QByteArrayData data[17];
    char stringdata[270];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_AddConstraintActivitiesMaxSimultaneousInSelectedTimeSlotsForm_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_AddConstraintActivitiesMaxSimultaneousInSelectedTimeSlotsForm_t qt_meta_stringdata_AddConstraintActivitiesMaxSimultaneousInSelectedTimeSlotsForm = {
    {
QT_MOC_LITERAL(0, 0, 61),
QT_MOC_LITERAL(1, 62, 11),
QT_MOC_LITERAL(2, 74, 0),
QT_MOC_LITERAL(3, 75, 16),
QT_MOC_LITERAL(4, 92, 14),
QT_MOC_LITERAL(5, 107, 13),
QT_MOC_LITERAL(6, 121, 5),
QT_MOC_LITERAL(7, 127, 20),
QT_MOC_LITERAL(8, 148, 11),
QT_MOC_LITERAL(9, 160, 17),
QT_MOC_LITERAL(10, 178, 4),
QT_MOC_LITERAL(11, 183, 23),
QT_MOC_LITERAL(12, 207, 3),
QT_MOC_LITERAL(13, 211, 21),
QT_MOC_LITERAL(14, 233, 3),
QT_MOC_LITERAL(15, 237, 16),
QT_MOC_LITERAL(16, 254, 14)
    },
    "AddConstraintActivitiesMaxSimultaneousInSelectedTimeSlotsForm\0"
    "addActivity\0\0addAllActivities\0"
    "removeActivity\0filterChanged\0clear\0"
    "addCurrentConstraint\0itemClicked\0"
    "QTableWidgetItem*\0item\0horizontalHeaderClicked\0"
    "col\0verticalHeaderClicked\0row\0"
    "setAllUnselected\0setAllSelected\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AddConstraintActivitiesMaxSimultaneousInSelectedTimeSlotsForm[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x0a,
       3,    0,   70,    2, 0x0a,
       4,    0,   71,    2, 0x0a,
       5,    0,   72,    2, 0x0a,
       6,    0,   73,    2, 0x0a,
       7,    0,   74,    2, 0x0a,
       8,    1,   75,    2, 0x0a,
      11,    1,   78,    2, 0x0a,
      13,    1,   81,    2, 0x0a,
      15,    0,   84,    2, 0x0a,
      16,    0,   85,    2, 0x0a,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void AddConstraintActivitiesMaxSimultaneousInSelectedTimeSlotsForm::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AddConstraintActivitiesMaxSimultaneousInSelectedTimeSlotsForm *_t = static_cast<AddConstraintActivitiesMaxSimultaneousInSelectedTimeSlotsForm *>(_o);
        switch (_id) {
        case 0: _t->addActivity(); break;
        case 1: _t->addAllActivities(); break;
        case 2: _t->removeActivity(); break;
        case 3: _t->filterChanged(); break;
        case 4: _t->clear(); break;
        case 5: _t->addCurrentConstraint(); break;
        case 6: _t->itemClicked((*reinterpret_cast< QTableWidgetItem*(*)>(_a[1]))); break;
        case 7: _t->horizontalHeaderClicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->verticalHeaderClicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->setAllUnselected(); break;
        case 10: _t->setAllSelected(); break;
        default: ;
        }
    }
}

const QMetaObject AddConstraintActivitiesMaxSimultaneousInSelectedTimeSlotsForm::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_AddConstraintActivitiesMaxSimultaneousInSelectedTimeSlotsForm.data,
      qt_meta_data_AddConstraintActivitiesMaxSimultaneousInSelectedTimeSlotsForm,  qt_static_metacall, 0, 0}
};


const QMetaObject *AddConstraintActivitiesMaxSimultaneousInSelectedTimeSlotsForm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AddConstraintActivitiesMaxSimultaneousInSelectedTimeSlotsForm::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_AddConstraintActivitiesMaxSimultaneousInSelectedTimeSlotsForm.stringdata))
        return static_cast<void*>(const_cast< AddConstraintActivitiesMaxSimultaneousInSelectedTimeSlotsForm*>(this));
    if (!strcmp(_clname, "Ui::AddConstraintActivitiesMaxSimultaneousInSelectedTimeSlotsForm_template"))
        return static_cast< Ui::AddConstraintActivitiesMaxSimultaneousInSelectedTimeSlotsForm_template*>(const_cast< AddConstraintActivitiesMaxSimultaneousInSelectedTimeSlotsForm*>(this));
    return QDialog::qt_metacast(_clname);
}

int AddConstraintActivitiesMaxSimultaneousInSelectedTimeSlotsForm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}
QT_END_MOC_NAMESPACE

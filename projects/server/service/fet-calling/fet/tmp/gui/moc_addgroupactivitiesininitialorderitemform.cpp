/****************************************************************************
** Meta object code from reading C++ file 'addgroupactivitiesininitialorderitemform.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/interface/addgroupactivitiesininitialorderitemform.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'addgroupactivitiesininitialorderitemform.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_AddGroupActivitiesInInitialOrderItemForm_t {
    QByteArrayData data[8];
    char stringdata[115];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_AddGroupActivitiesInInitialOrderItemForm_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_AddGroupActivitiesInInitialOrderItemForm_t qt_meta_stringdata_AddGroupActivitiesInInitialOrderItemForm = {
    {
QT_MOC_LITERAL(0, 0, 40),
QT_MOC_LITERAL(1, 41, 11),
QT_MOC_LITERAL(2, 53, 0),
QT_MOC_LITERAL(3, 54, 16),
QT_MOC_LITERAL(4, 71, 14),
QT_MOC_LITERAL(5, 86, 7),
QT_MOC_LITERAL(6, 94, 13),
QT_MOC_LITERAL(7, 108, 5)
    },
    "AddGroupActivitiesInInitialOrderItemForm\0"
    "addActivity\0\0addAllActivities\0"
    "removeActivity\0addItem\0filterChanged\0"
    "clear\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AddGroupActivitiesInInitialOrderItemForm[] = {

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
       3,    0,   45,    2, 0x0a,
       4,    0,   46,    2, 0x0a,
       5,    0,   47,    2, 0x0a,
       6,    0,   48,    2, 0x0a,
       7,    0,   49,    2, 0x0a,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void AddGroupActivitiesInInitialOrderItemForm::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AddGroupActivitiesInInitialOrderItemForm *_t = static_cast<AddGroupActivitiesInInitialOrderItemForm *>(_o);
        switch (_id) {
        case 0: _t->addActivity(); break;
        case 1: _t->addAllActivities(); break;
        case 2: _t->removeActivity(); break;
        case 3: _t->addItem(); break;
        case 4: _t->filterChanged(); break;
        case 5: _t->clear(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject AddGroupActivitiesInInitialOrderItemForm::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_AddGroupActivitiesInInitialOrderItemForm.data,
      qt_meta_data_AddGroupActivitiesInInitialOrderItemForm,  qt_static_metacall, 0, 0}
};


const QMetaObject *AddGroupActivitiesInInitialOrderItemForm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AddGroupActivitiesInInitialOrderItemForm::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_AddGroupActivitiesInInitialOrderItemForm.stringdata))
        return static_cast<void*>(const_cast< AddGroupActivitiesInInitialOrderItemForm*>(this));
    if (!strcmp(_clname, "Ui::AddGroupActivitiesInInitialOrderItemForm_template"))
        return static_cast< Ui::AddGroupActivitiesInInitialOrderItemForm_template*>(const_cast< AddGroupActivitiesInInitialOrderItemForm*>(this));
    return QDialog::qt_metacast(_clname);
}

int AddGroupActivitiesInInitialOrderItemForm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
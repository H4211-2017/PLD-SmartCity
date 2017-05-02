/****************************************************************************
** Meta object code from reading C++ file 'addconstraintactivitypreferredroomform.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/interface/addconstraintactivitypreferredroomform.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'addconstraintactivitypreferredroomform.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_AddConstraintActivityPreferredRoomForm_t {
    QByteArrayData data[4];
    char stringdata[69];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_AddConstraintActivityPreferredRoomForm_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_AddConstraintActivityPreferredRoomForm_t qt_meta_stringdata_AddConstraintActivityPreferredRoomForm = {
    {
QT_MOC_LITERAL(0, 0, 38),
QT_MOC_LITERAL(1, 39, 13),
QT_MOC_LITERAL(2, 53, 0),
QT_MOC_LITERAL(3, 54, 13)
    },
    "AddConstraintActivityPreferredRoomForm\0"
    "addConstraint\0\0filterChanged\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AddConstraintActivityPreferredRoomForm[] = {

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

void AddConstraintActivityPreferredRoomForm::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AddConstraintActivityPreferredRoomForm *_t = static_cast<AddConstraintActivityPreferredRoomForm *>(_o);
        switch (_id) {
        case 0: _t->addConstraint(); break;
        case 1: _t->filterChanged(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject AddConstraintActivityPreferredRoomForm::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_AddConstraintActivityPreferredRoomForm.data,
      qt_meta_data_AddConstraintActivityPreferredRoomForm,  qt_static_metacall, 0, 0}
};


const QMetaObject *AddConstraintActivityPreferredRoomForm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AddConstraintActivityPreferredRoomForm::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_AddConstraintActivityPreferredRoomForm.stringdata))
        return static_cast<void*>(const_cast< AddConstraintActivityPreferredRoomForm*>(this));
    if (!strcmp(_clname, "Ui::AddConstraintActivityPreferredRoomForm_template"))
        return static_cast< Ui::AddConstraintActivityPreferredRoomForm_template*>(const_cast< AddConstraintActivityPreferredRoomForm*>(this));
    return QDialog::qt_metacast(_clname);
}

int AddConstraintActivityPreferredRoomForm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

/****************************************************************************
** Meta object code from reading C++ file 'addconstraintstudentssetearlymaxbeginningsatsecondhourform.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/interface/addconstraintstudentssetearlymaxbeginningsatsecondhourform.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'addconstraintstudentssetearlymaxbeginningsatsecondhourform.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_AddConstraintStudentsSetEarlyMaxBeginningsAtSecondHourForm_t {
    QByteArrayData data[4];
    char stringdata[100];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_AddConstraintStudentsSetEarlyMaxBeginningsAtSecondHourForm_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_AddConstraintStudentsSetEarlyMaxBeginningsAtSecondHourForm_t qt_meta_stringdata_AddConstraintStudentsSetEarlyMaxBeginningsAtSecondHourForm = {
    {
QT_MOC_LITERAL(0, 0, 58),
QT_MOC_LITERAL(1, 59, 17),
QT_MOC_LITERAL(2, 77, 0),
QT_MOC_LITERAL(3, 78, 20)
    },
    "AddConstraintStudentsSetEarlyMaxBeginningsAtSecondHourForm\0"
    "constraintChanged\0\0addCurrentConstraint\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AddConstraintStudentsSetEarlyMaxBeginningsAtSecondHourForm[] = {

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

void AddConstraintStudentsSetEarlyMaxBeginningsAtSecondHourForm::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AddConstraintStudentsSetEarlyMaxBeginningsAtSecondHourForm *_t = static_cast<AddConstraintStudentsSetEarlyMaxBeginningsAtSecondHourForm *>(_o);
        switch (_id) {
        case 0: _t->constraintChanged(); break;
        case 1: _t->addCurrentConstraint(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject AddConstraintStudentsSetEarlyMaxBeginningsAtSecondHourForm::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_AddConstraintStudentsSetEarlyMaxBeginningsAtSecondHourForm.data,
      qt_meta_data_AddConstraintStudentsSetEarlyMaxBeginningsAtSecondHourForm,  qt_static_metacall, 0, 0}
};


const QMetaObject *AddConstraintStudentsSetEarlyMaxBeginningsAtSecondHourForm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AddConstraintStudentsSetEarlyMaxBeginningsAtSecondHourForm::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_AddConstraintStudentsSetEarlyMaxBeginningsAtSecondHourForm.stringdata))
        return static_cast<void*>(const_cast< AddConstraintStudentsSetEarlyMaxBeginningsAtSecondHourForm*>(this));
    if (!strcmp(_clname, "Ui::AddConstraintStudentsSetEarlyMaxBeginningsAtSecondHourForm_template"))
        return static_cast< Ui::AddConstraintStudentsSetEarlyMaxBeginningsAtSecondHourForm_template*>(const_cast< AddConstraintStudentsSetEarlyMaxBeginningsAtSecondHourForm*>(this));
    return QDialog::qt_metacast(_clname);
}

int AddConstraintStudentsSetEarlyMaxBeginningsAtSecondHourForm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

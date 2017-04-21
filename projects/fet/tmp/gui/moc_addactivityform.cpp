/****************************************************************************
** Meta object code from reading C++ file 'addactivityform.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/interface/addactivityform.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'addactivityform.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_AddActivityForm_t {
    QByteArrayData data[18];
    char stringdata[250];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_AddActivityForm_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_AddActivityForm_t qt_meta_stringdata_AddActivityForm = {
    {
QT_MOC_LITERAL(0, 0, 15),
QT_MOC_LITERAL(1, 16, 10),
QT_MOC_LITERAL(2, 27, 0),
QT_MOC_LITERAL(3, 28, 13),
QT_MOC_LITERAL(4, 42, 11),
QT_MOC_LITERAL(5, 54, 14),
QT_MOC_LITERAL(6, 69, 14),
QT_MOC_LITERAL(7, 84, 17),
QT_MOC_LITERAL(8, 102, 12),
QT_MOC_LITERAL(9, 115, 13),
QT_MOC_LITERAL(10, 129, 13),
QT_MOC_LITERAL(11, 143, 17),
QT_MOC_LITERAL(12, 161, 16),
QT_MOC_LITERAL(13, 178, 17),
QT_MOC_LITERAL(14, 196, 20),
QT_MOC_LITERAL(15, 217, 11),
QT_MOC_LITERAL(16, 229, 4),
QT_MOC_LITERAL(17, 234, 14)
    },
    "AddActivityForm\0addTeacher\0\0removeTeacher\0"
    "addStudents\0removeStudents\0addActivityTag\0"
    "removeActivityTag\0splitChanged\0"
    "clearTeachers\0clearStudents\0"
    "clearActivityTags\0showYearsChanged\0"
    "showGroupsChanged\0showSubgroupsChanged\0"
    "addActivity\0help\0minDaysChanged\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AddActivityForm[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   94,    2, 0x0a,
       3,    0,   95,    2, 0x0a,
       4,    0,   96,    2, 0x0a,
       5,    0,   97,    2, 0x0a,
       6,    0,   98,    2, 0x0a,
       7,    0,   99,    2, 0x0a,
       8,    0,  100,    2, 0x0a,
       9,    0,  101,    2, 0x0a,
      10,    0,  102,    2, 0x0a,
      11,    0,  103,    2, 0x0a,
      12,    0,  104,    2, 0x0a,
      13,    0,  105,    2, 0x0a,
      14,    0,  106,    2, 0x0a,
      15,    0,  107,    2, 0x0a,
      16,    0,  108,    2, 0x0a,
      17,    0,  109,    2, 0x0a,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void AddActivityForm::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AddActivityForm *_t = static_cast<AddActivityForm *>(_o);
        switch (_id) {
        case 0: _t->addTeacher(); break;
        case 1: _t->removeTeacher(); break;
        case 2: _t->addStudents(); break;
        case 3: _t->removeStudents(); break;
        case 4: _t->addActivityTag(); break;
        case 5: _t->removeActivityTag(); break;
        case 6: _t->splitChanged(); break;
        case 7: _t->clearTeachers(); break;
        case 8: _t->clearStudents(); break;
        case 9: _t->clearActivityTags(); break;
        case 10: _t->showYearsChanged(); break;
        case 11: _t->showGroupsChanged(); break;
        case 12: _t->showSubgroupsChanged(); break;
        case 13: _t->addActivity(); break;
        case 14: _t->help(); break;
        case 15: _t->minDaysChanged(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject AddActivityForm::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_AddActivityForm.data,
      qt_meta_data_AddActivityForm,  qt_static_metacall, 0, 0}
};


const QMetaObject *AddActivityForm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AddActivityForm::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_AddActivityForm.stringdata))
        return static_cast<void*>(const_cast< AddActivityForm*>(this));
    if (!strcmp(_clname, "Ui::AddActivityForm_template"))
        return static_cast< Ui::AddActivityForm_template*>(const_cast< AddActivityForm*>(this));
    return QDialog::qt_metacast(_clname);
}

int AddActivityForm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 16;
    }
    return _id;
}
struct qt_meta_stringdata_SecondMinDaysDialog_t {
    QByteArrayData data[3];
    char stringdata[33];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_SecondMinDaysDialog_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_SecondMinDaysDialog_t qt_meta_stringdata_SecondMinDaysDialog = {
    {
QT_MOC_LITERAL(0, 0, 19),
QT_MOC_LITERAL(1, 20, 10),
QT_MOC_LITERAL(2, 31, 0)
    },
    "SecondMinDaysDialog\0yesPressed\0\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SecondMinDaysDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x0a,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void SecondMinDaysDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SecondMinDaysDialog *_t = static_cast<SecondMinDaysDialog *>(_o);
        switch (_id) {
        case 0: _t->yesPressed(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject SecondMinDaysDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_SecondMinDaysDialog.data,
      qt_meta_data_SecondMinDaysDialog,  qt_static_metacall, 0, 0}
};


const QMetaObject *SecondMinDaysDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SecondMinDaysDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SecondMinDaysDialog.stringdata))
        return static_cast<void*>(const_cast< SecondMinDaysDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int SecondMinDaysDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE

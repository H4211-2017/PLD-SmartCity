/****************************************************************************
** Meta object code from reading C++ file 'modifyactivityform.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/interface/modifyactivityform.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'modifyactivityform.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ModifyActivityForm_t {
    QByteArrayData data[17];
    char stringdata[223];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_ModifyActivityForm_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_ModifyActivityForm_t qt_meta_stringdata_ModifyActivityForm = {
    {
QT_MOC_LITERAL(0, 0, 18),
QT_MOC_LITERAL(1, 19, 2),
QT_MOC_LITERAL(2, 22, 0),
QT_MOC_LITERAL(3, 23, 6),
QT_MOC_LITERAL(4, 30, 10),
QT_MOC_LITERAL(5, 41, 13),
QT_MOC_LITERAL(6, 55, 11),
QT_MOC_LITERAL(7, 67, 14),
QT_MOC_LITERAL(8, 82, 13),
QT_MOC_LITERAL(9, 96, 13),
QT_MOC_LITERAL(10, 110, 17),
QT_MOC_LITERAL(11, 128, 14),
QT_MOC_LITERAL(12, 143, 17),
QT_MOC_LITERAL(13, 161, 16),
QT_MOC_LITERAL(14, 178, 17),
QT_MOC_LITERAL(15, 196, 20),
QT_MOC_LITERAL(16, 217, 4)
    },
    "ModifyActivityForm\0ok\0\0cancel\0addTeacher\0"
    "removeTeacher\0addStudents\0removeStudents\0"
    "clearTeachers\0clearStudents\0"
    "clearActivityTags\0addActivityTag\0"
    "removeActivityTag\0showYearsChanged\0"
    "showGroupsChanged\0showSubgroupsChanged\0"
    "help\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ModifyActivityForm[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   89,    2, 0x0a,
       3,    0,   90,    2, 0x0a,
       4,    0,   91,    2, 0x0a,
       5,    0,   92,    2, 0x0a,
       6,    0,   93,    2, 0x0a,
       7,    0,   94,    2, 0x0a,
       8,    0,   95,    2, 0x0a,
       9,    0,   96,    2, 0x0a,
      10,    0,   97,    2, 0x0a,
      11,    0,   98,    2, 0x0a,
      12,    0,   99,    2, 0x0a,
      13,    0,  100,    2, 0x0a,
      14,    0,  101,    2, 0x0a,
      15,    0,  102,    2, 0x0a,
      16,    0,  103,    2, 0x0a,

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

       0        // eod
};

void ModifyActivityForm::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ModifyActivityForm *_t = static_cast<ModifyActivityForm *>(_o);
        switch (_id) {
        case 0: _t->ok(); break;
        case 1: _t->cancel(); break;
        case 2: _t->addTeacher(); break;
        case 3: _t->removeTeacher(); break;
        case 4: _t->addStudents(); break;
        case 5: _t->removeStudents(); break;
        case 6: _t->clearTeachers(); break;
        case 7: _t->clearStudents(); break;
        case 8: _t->clearActivityTags(); break;
        case 9: _t->addActivityTag(); break;
        case 10: _t->removeActivityTag(); break;
        case 11: _t->showYearsChanged(); break;
        case 12: _t->showGroupsChanged(); break;
        case 13: _t->showSubgroupsChanged(); break;
        case 14: _t->help(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject ModifyActivityForm::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ModifyActivityForm.data,
      qt_meta_data_ModifyActivityForm,  qt_static_metacall, 0, 0}
};


const QMetaObject *ModifyActivityForm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ModifyActivityForm::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ModifyActivityForm.stringdata))
        return static_cast<void*>(const_cast< ModifyActivityForm*>(this));
    if (!strcmp(_clname, "Ui::ModifyActivityForm_template"))
        return static_cast< Ui::ModifyActivityForm_template*>(const_cast< ModifyActivityForm*>(this));
    return QDialog::qt_metacast(_clname);
}

int ModifyActivityForm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
    return _id;
}
QT_END_MOC_NAMESPACE

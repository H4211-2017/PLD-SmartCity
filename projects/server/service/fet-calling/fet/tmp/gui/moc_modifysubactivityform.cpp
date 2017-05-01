/****************************************************************************
** Meta object code from reading C++ file 'modifysubactivityform.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/interface/modifysubactivityform.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'modifysubactivityform.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ModifySubactivityForm_t {
    QByteArrayData data[17];
    char stringdata[226];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_ModifySubactivityForm_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_ModifySubactivityForm_t qt_meta_stringdata_ModifySubactivityForm = {
    {
QT_MOC_LITERAL(0, 0, 21),
QT_MOC_LITERAL(1, 22, 2),
QT_MOC_LITERAL(2, 25, 0),
QT_MOC_LITERAL(3, 26, 6),
QT_MOC_LITERAL(4, 33, 10),
QT_MOC_LITERAL(5, 44, 13),
QT_MOC_LITERAL(6, 58, 11),
QT_MOC_LITERAL(7, 70, 14),
QT_MOC_LITERAL(8, 85, 13),
QT_MOC_LITERAL(9, 99, 13),
QT_MOC_LITERAL(10, 113, 14),
QT_MOC_LITERAL(11, 128, 17),
QT_MOC_LITERAL(12, 146, 17),
QT_MOC_LITERAL(13, 164, 16),
QT_MOC_LITERAL(14, 181, 17),
QT_MOC_LITERAL(15, 199, 20),
QT_MOC_LITERAL(16, 220, 4)
    },
    "ModifySubactivityForm\0ok\0\0cancel\0"
    "addTeacher\0removeTeacher\0addStudents\0"
    "removeStudents\0clearTeachers\0clearStudents\0"
    "addActivityTag\0removeActivityTag\0"
    "clearActivityTags\0showYearsChanged\0"
    "showGroupsChanged\0showSubgroupsChanged\0"
    "help\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ModifySubactivityForm[] = {

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

void ModifySubactivityForm::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ModifySubactivityForm *_t = static_cast<ModifySubactivityForm *>(_o);
        switch (_id) {
        case 0: _t->ok(); break;
        case 1: _t->cancel(); break;
        case 2: _t->addTeacher(); break;
        case 3: _t->removeTeacher(); break;
        case 4: _t->addStudents(); break;
        case 5: _t->removeStudents(); break;
        case 6: _t->clearTeachers(); break;
        case 7: _t->clearStudents(); break;
        case 8: _t->addActivityTag(); break;
        case 9: _t->removeActivityTag(); break;
        case 10: _t->clearActivityTags(); break;
        case 11: _t->showYearsChanged(); break;
        case 12: _t->showGroupsChanged(); break;
        case 13: _t->showSubgroupsChanged(); break;
        case 14: _t->help(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject ModifySubactivityForm::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ModifySubactivityForm.data,
      qt_meta_data_ModifySubactivityForm,  qt_static_metacall, 0, 0}
};


const QMetaObject *ModifySubactivityForm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ModifySubactivityForm::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ModifySubactivityForm.stringdata))
        return static_cast<void*>(const_cast< ModifySubactivityForm*>(this));
    if (!strcmp(_clname, "Ui::ModifySubactivityForm_template"))
        return static_cast< Ui::ModifySubactivityForm_template*>(const_cast< ModifySubactivityForm*>(this));
    return QDialog::qt_metacast(_clname);
}

int ModifySubactivityForm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

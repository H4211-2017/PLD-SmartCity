/****************************************************************************
** Meta object code from reading C++ file 'groupsform.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/interface/groupsform.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'groupsform.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_GroupsForm_t {
    QByteArrayData data[16];
    char stringdata[183];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_GroupsForm_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_GroupsForm_t qt_meta_stringdata_GroupsForm = {
    {
QT_MOC_LITERAL(0, 0, 10),
QT_MOC_LITERAL(1, 11, 8),
QT_MOC_LITERAL(2, 20, 0),
QT_MOC_LITERAL(3, 21, 11),
QT_MOC_LITERAL(4, 33, 10),
QT_MOC_LITERAL(5, 44, 11),
QT_MOC_LITERAL(6, 56, 11),
QT_MOC_LITERAL(7, 68, 13),
QT_MOC_LITERAL(8, 82, 10),
QT_MOC_LITERAL(9, 93, 11),
QT_MOC_LITERAL(10, 105, 8),
QT_MOC_LITERAL(11, 114, 12),
QT_MOC_LITERAL(12, 127, 9),
QT_MOC_LITERAL(13, 137, 16),
QT_MOC_LITERAL(14, 154, 18),
QT_MOC_LITERAL(15, 173, 8)
    },
    "GroupsForm\0addGroup\0\0removeGroup\0"
    "purgeGroup\0modifyGroup\0moveGroupUp\0"
    "moveGroupDown\0sortGroups\0yearChanged\0"
    "yearName\0groupChanged\0groupName\0"
    "activateStudents\0deactivateStudents\0"
    "comments\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GroupsForm[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x0a,
       3,    0,   75,    2, 0x0a,
       4,    0,   76,    2, 0x0a,
       5,    0,   77,    2, 0x0a,
       6,    0,   78,    2, 0x0a,
       7,    0,   79,    2, 0x0a,
       8,    0,   80,    2, 0x0a,
       9,    1,   81,    2, 0x0a,
      11,    1,   84,    2, 0x0a,
      13,    0,   87,    2, 0x0a,
      14,    0,   88,    2, 0x0a,
      15,    0,   89,    2, 0x0a,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void GroupsForm::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        GroupsForm *_t = static_cast<GroupsForm *>(_o);
        switch (_id) {
        case 0: _t->addGroup(); break;
        case 1: _t->removeGroup(); break;
        case 2: _t->purgeGroup(); break;
        case 3: _t->modifyGroup(); break;
        case 4: _t->moveGroupUp(); break;
        case 5: _t->moveGroupDown(); break;
        case 6: _t->sortGroups(); break;
        case 7: _t->yearChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->groupChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: _t->activateStudents(); break;
        case 10: _t->deactivateStudents(); break;
        case 11: _t->comments(); break;
        default: ;
        }
    }
}

const QMetaObject GroupsForm::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_GroupsForm.data,
      qt_meta_data_GroupsForm,  qt_static_metacall, 0, 0}
};


const QMetaObject *GroupsForm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GroupsForm::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_GroupsForm.stringdata))
        return static_cast<void*>(const_cast< GroupsForm*>(this));
    if (!strcmp(_clname, "Ui::GroupsForm_template"))
        return static_cast< Ui::GroupsForm_template*>(const_cast< GroupsForm*>(this));
    return QDialog::qt_metacast(_clname);
}

int GroupsForm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}
QT_END_MOC_NAMESPACE

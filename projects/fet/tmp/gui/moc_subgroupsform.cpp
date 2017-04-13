/****************************************************************************
** Meta object code from reading C++ file 'subgroupsform.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/interface/subgroupsform.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'subgroupsform.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_SubgroupsForm_t {
    QByteArrayData data[18];
    char stringdata[236];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_SubgroupsForm_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_SubgroupsForm_t qt_meta_stringdata_SubgroupsForm = {
    {
QT_MOC_LITERAL(0, 0, 13),
QT_MOC_LITERAL(1, 14, 11),
QT_MOC_LITERAL(2, 26, 0),
QT_MOC_LITERAL(3, 27, 14),
QT_MOC_LITERAL(4, 42, 13),
QT_MOC_LITERAL(5, 56, 14),
QT_MOC_LITERAL(6, 71, 14),
QT_MOC_LITERAL(7, 86, 16),
QT_MOC_LITERAL(8, 103, 13),
QT_MOC_LITERAL(9, 117, 11),
QT_MOC_LITERAL(10, 129, 8),
QT_MOC_LITERAL(11, 138, 12),
QT_MOC_LITERAL(12, 151, 9),
QT_MOC_LITERAL(13, 161, 15),
QT_MOC_LITERAL(14, 177, 12),
QT_MOC_LITERAL(15, 190, 16),
QT_MOC_LITERAL(16, 207, 18),
QT_MOC_LITERAL(17, 226, 8)
    },
    "SubgroupsForm\0addSubgroup\0\0removeSubgroup\0"
    "purgeSubgroup\0modifySubgroup\0"
    "moveSubgroupUp\0moveSubgroupDown\0"
    "sortSubgroups\0yearChanged\0yearName\0"
    "groupChanged\0groupName\0subgroupChanged\0"
    "subgroupName\0activateStudents\0"
    "deactivateStudents\0comments\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SubgroupsForm[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x0a,
       3,    0,   80,    2, 0x0a,
       4,    0,   81,    2, 0x0a,
       5,    0,   82,    2, 0x0a,
       6,    0,   83,    2, 0x0a,
       7,    0,   84,    2, 0x0a,
       8,    0,   85,    2, 0x0a,
       9,    1,   86,    2, 0x0a,
      11,    1,   89,    2, 0x0a,
      13,    1,   92,    2, 0x0a,
      15,    0,   95,    2, 0x0a,
      16,    0,   96,    2, 0x0a,
      17,    0,   97,    2, 0x0a,

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
    QMetaType::Void, QMetaType::QString,   14,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void SubgroupsForm::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SubgroupsForm *_t = static_cast<SubgroupsForm *>(_o);
        switch (_id) {
        case 0: _t->addSubgroup(); break;
        case 1: _t->removeSubgroup(); break;
        case 2: _t->purgeSubgroup(); break;
        case 3: _t->modifySubgroup(); break;
        case 4: _t->moveSubgroupUp(); break;
        case 5: _t->moveSubgroupDown(); break;
        case 6: _t->sortSubgroups(); break;
        case 7: _t->yearChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->groupChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: _t->subgroupChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 10: _t->activateStudents(); break;
        case 11: _t->deactivateStudents(); break;
        case 12: _t->comments(); break;
        default: ;
        }
    }
}

const QMetaObject SubgroupsForm::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_SubgroupsForm.data,
      qt_meta_data_SubgroupsForm,  qt_static_metacall, 0, 0}
};


const QMetaObject *SubgroupsForm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SubgroupsForm::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SubgroupsForm.stringdata))
        return static_cast<void*>(const_cast< SubgroupsForm*>(this));
    if (!strcmp(_clname, "Ui::SubgroupsForm_template"))
        return static_cast< Ui::SubgroupsForm_template*>(const_cast< SubgroupsForm*>(this));
    return QDialog::qt_metacast(_clname);
}

int SubgroupsForm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}
QT_END_MOC_NAMESPACE

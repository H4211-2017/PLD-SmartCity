/****************************************************************************
** Meta object code from reading C++ file 'groupactivitiesininitialorderitemsform.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/interface/groupactivitiesininitialorderitemsform.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'groupactivitiesininitialorderitemsform.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_GroupActivitiesInInitialOrderItemsForm_t {
    QByteArrayData data[13];
    char stringdata[169];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_GroupActivitiesInInitialOrderItemsForm_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_GroupActivitiesInInitialOrderItemsForm_t qt_meta_stringdata_GroupActivitiesInInitialOrderItemsForm = {
    {
QT_MOC_LITERAL(0, 0, 38),
QT_MOC_LITERAL(1, 39, 11),
QT_MOC_LITERAL(2, 51, 0),
QT_MOC_LITERAL(3, 52, 5),
QT_MOC_LITERAL(4, 58, 7),
QT_MOC_LITERAL(5, 66, 10),
QT_MOC_LITERAL(6, 77, 10),
QT_MOC_LITERAL(7, 88, 4),
QT_MOC_LITERAL(8, 93, 13),
QT_MOC_LITERAL(9, 107, 19),
QT_MOC_LITERAL(10, 127, 12),
QT_MOC_LITERAL(11, 140, 14),
QT_MOC_LITERAL(12, 155, 12)
    },
    "GroupActivitiesInInitialOrderItemsForm\0"
    "itemChanged\0\0index\0addItem\0modifyItem\0"
    "removeItem\0help\0filterChanged\0"
    "sortItemsByComments\0activateItem\0"
    "deactivateItem\0itemComments\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GroupActivitiesInInitialOrderItemsForm[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x0a,
       4,    0,   67,    2, 0x0a,
       5,    0,   68,    2, 0x0a,
       6,    0,   69,    2, 0x0a,
       7,    0,   70,    2, 0x0a,
       8,    0,   71,    2, 0x0a,
       9,    0,   72,    2, 0x0a,
      10,    0,   73,    2, 0x0a,
      11,    0,   74,    2, 0x0a,
      12,    0,   75,    2, 0x0a,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
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

void GroupActivitiesInInitialOrderItemsForm::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        GroupActivitiesInInitialOrderItemsForm *_t = static_cast<GroupActivitiesInInitialOrderItemsForm *>(_o);
        switch (_id) {
        case 0: _t->itemChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->addItem(); break;
        case 2: _t->modifyItem(); break;
        case 3: _t->removeItem(); break;
        case 4: _t->help(); break;
        case 5: _t->filterChanged(); break;
        case 6: _t->sortItemsByComments(); break;
        case 7: _t->activateItem(); break;
        case 8: _t->deactivateItem(); break;
        case 9: _t->itemComments(); break;
        default: ;
        }
    }
}

const QMetaObject GroupActivitiesInInitialOrderItemsForm::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_GroupActivitiesInInitialOrderItemsForm.data,
      qt_meta_data_GroupActivitiesInInitialOrderItemsForm,  qt_static_metacall, 0, 0}
};


const QMetaObject *GroupActivitiesInInitialOrderItemsForm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GroupActivitiesInInitialOrderItemsForm::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_GroupActivitiesInInitialOrderItemsForm.stringdata))
        return static_cast<void*>(const_cast< GroupActivitiesInInitialOrderItemsForm*>(this));
    if (!strcmp(_clname, "Ui::GroupActivitiesInInitialOrderItemsForm_template"))
        return static_cast< Ui::GroupActivitiesInInitialOrderItemsForm_template*>(const_cast< GroupActivitiesInInitialOrderItemsForm*>(this));
    return QDialog::qt_metacast(_clname);
}

int GroupActivitiesInInitialOrderItemsForm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}
QT_END_MOC_NAMESPACE

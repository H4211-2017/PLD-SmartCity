/****************************************************************************
** Meta object code from reading C++ file 'activitiesform.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/interface/activitiesform.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'activitiesform.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ActivitiesForm_t {
    QByteArrayData data[10];
    char stringdata[133];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_ActivitiesForm_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_ActivitiesForm_t qt_meta_stringdata_ActivitiesForm = {
    {
QT_MOC_LITERAL(0, 0, 14),
QT_MOC_LITERAL(1, 15, 11),
QT_MOC_LITERAL(2, 27, 0),
QT_MOC_LITERAL(3, 28, 14),
QT_MOC_LITERAL(4, 43, 14),
QT_MOC_LITERAL(5, 58, 15),
QT_MOC_LITERAL(6, 74, 13),
QT_MOC_LITERAL(7, 88, 21),
QT_MOC_LITERAL(8, 110, 4),
QT_MOC_LITERAL(9, 115, 16)
    },
    "ActivitiesForm\0addActivity\0\0removeActivity\0"
    "modifyActivity\0activityChanged\0"
    "filterChanged\0studentsFilterChanged\0"
    "help\0activityComments\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ActivitiesForm[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x0a,
       3,    0,   55,    2, 0x0a,
       4,    0,   56,    2, 0x0a,
       5,    0,   57,    2, 0x0a,
       6,    0,   58,    2, 0x0a,
       7,    0,   59,    2, 0x0a,
       8,    0,   60,    2, 0x0a,
       9,    0,   61,    2, 0x0a,

 // slots: parameters
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

void ActivitiesForm::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ActivitiesForm *_t = static_cast<ActivitiesForm *>(_o);
        switch (_id) {
        case 0: _t->addActivity(); break;
        case 1: _t->removeActivity(); break;
        case 2: _t->modifyActivity(); break;
        case 3: _t->activityChanged(); break;
        case 4: _t->filterChanged(); break;
        case 5: _t->studentsFilterChanged(); break;
        case 6: _t->help(); break;
        case 7: _t->activityComments(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject ActivitiesForm::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ActivitiesForm.data,
      qt_meta_data_ActivitiesForm,  qt_static_metacall, 0, 0}
};


const QMetaObject *ActivitiesForm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ActivitiesForm::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ActivitiesForm.stringdata))
        return static_cast<void*>(const_cast< ActivitiesForm*>(this));
    if (!strcmp(_clname, "Ui::ActivitiesForm_template"))
        return static_cast< Ui::ActivitiesForm_template*>(const_cast< ActivitiesForm*>(this));
    return QDialog::qt_metacast(_clname);
}

int ActivitiesForm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
QT_END_MOC_NAMESPACE

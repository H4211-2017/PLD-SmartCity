/****************************************************************************
** Meta object code from reading C++ file 'modifystudentsgroupform.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/interface/modifystudentsgroupform.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'modifystudentsgroupform.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ModifyStudentsGroupForm_t {
    QByteArrayData data[4];
    char stringdata[36];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_ModifyStudentsGroupForm_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_ModifyStudentsGroupForm_t qt_meta_stringdata_ModifyStudentsGroupForm = {
    {
QT_MOC_LITERAL(0, 0, 23),
QT_MOC_LITERAL(1, 24, 2),
QT_MOC_LITERAL(2, 27, 0),
QT_MOC_LITERAL(3, 28, 6)
    },
    "ModifyStudentsGroupForm\0ok\0\0cancel\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ModifyStudentsGroupForm[] = {

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

void ModifyStudentsGroupForm::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ModifyStudentsGroupForm *_t = static_cast<ModifyStudentsGroupForm *>(_o);
        switch (_id) {
        case 0: _t->ok(); break;
        case 1: _t->cancel(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject ModifyStudentsGroupForm::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ModifyStudentsGroupForm.data,
      qt_meta_data_ModifyStudentsGroupForm,  qt_static_metacall, 0, 0}
};


const QMetaObject *ModifyStudentsGroupForm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ModifyStudentsGroupForm::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ModifyStudentsGroupForm.stringdata))
        return static_cast<void*>(const_cast< ModifyStudentsGroupForm*>(this));
    if (!strcmp(_clname, "Ui::ModifyStudentsGroupForm_template"))
        return static_cast< Ui::ModifyStudentsGroupForm_template*>(const_cast< ModifyStudentsGroupForm*>(this));
    return QDialog::qt_metacast(_clname);
}

int ModifyStudentsGroupForm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

/****************************************************************************
** Meta object code from reading C++ file 'modifyconstraintactivitytagpreferredroomsform.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/interface/modifyconstraintactivitytagpreferredroomsform.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'modifyconstraintactivitytagpreferredroomsform.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ModifyConstraintActivityTagPreferredRoomsForm_t {
    QByteArrayData data[7];
    char stringdata[83];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_ModifyConstraintActivityTagPreferredRoomsForm_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_ModifyConstraintActivityTagPreferredRoomsForm_t qt_meta_stringdata_ModifyConstraintActivityTagPreferredRoomsForm = {
    {
QT_MOC_LITERAL(0, 0, 45),
QT_MOC_LITERAL(1, 46, 7),
QT_MOC_LITERAL(2, 54, 0),
QT_MOC_LITERAL(3, 55, 10),
QT_MOC_LITERAL(4, 66, 2),
QT_MOC_LITERAL(5, 69, 6),
QT_MOC_LITERAL(6, 76, 5)
    },
    "ModifyConstraintActivityTagPreferredRoomsForm\0"
    "addRoom\0\0removeRoom\0ok\0cancel\0clear\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ModifyConstraintActivityTagPreferredRoomsForm[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x0a,
       3,    0,   40,    2, 0x0a,
       4,    0,   41,    2, 0x0a,
       5,    0,   42,    2, 0x0a,
       6,    0,   43,    2, 0x0a,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ModifyConstraintActivityTagPreferredRoomsForm::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ModifyConstraintActivityTagPreferredRoomsForm *_t = static_cast<ModifyConstraintActivityTagPreferredRoomsForm *>(_o);
        switch (_id) {
        case 0: _t->addRoom(); break;
        case 1: _t->removeRoom(); break;
        case 2: _t->ok(); break;
        case 3: _t->cancel(); break;
        case 4: _t->clear(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject ModifyConstraintActivityTagPreferredRoomsForm::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ModifyConstraintActivityTagPreferredRoomsForm.data,
      qt_meta_data_ModifyConstraintActivityTagPreferredRoomsForm,  qt_static_metacall, 0, 0}
};


const QMetaObject *ModifyConstraintActivityTagPreferredRoomsForm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ModifyConstraintActivityTagPreferredRoomsForm::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ModifyConstraintActivityTagPreferredRoomsForm.stringdata))
        return static_cast<void*>(const_cast< ModifyConstraintActivityTagPreferredRoomsForm*>(this));
    if (!strcmp(_clname, "Ui::ModifyConstraintActivityTagPreferredRoomsForm_template"))
        return static_cast< Ui::ModifyConstraintActivityTagPreferredRoomsForm_template*>(const_cast< ModifyConstraintActivityTagPreferredRoomsForm*>(this));
    return QDialog::qt_metacast(_clname);
}

int ModifyConstraintActivityTagPreferredRoomsForm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE

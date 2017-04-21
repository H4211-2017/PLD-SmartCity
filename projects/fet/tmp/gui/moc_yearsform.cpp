/****************************************************************************
** Meta object code from reading C++ file 'yearsform.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/interface/yearsform.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'yearsform.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_YearsForm_t {
    QByteArrayData data[13];
    char stringdata[144];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_YearsForm_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_YearsForm_t qt_meta_stringdata_YearsForm = {
    {
QT_MOC_LITERAL(0, 0, 9),
QT_MOC_LITERAL(1, 10, 7),
QT_MOC_LITERAL(2, 18, 0),
QT_MOC_LITERAL(3, 19, 10),
QT_MOC_LITERAL(4, 30, 10),
QT_MOC_LITERAL(5, 41, 10),
QT_MOC_LITERAL(6, 52, 12),
QT_MOC_LITERAL(7, 65, 9),
QT_MOC_LITERAL(8, 75, 11),
QT_MOC_LITERAL(9, 87, 16),
QT_MOC_LITERAL(10, 104, 18),
QT_MOC_LITERAL(11, 123, 10),
QT_MOC_LITERAL(12, 134, 8)
    },
    "YearsForm\0addYear\0\0removeYear\0modifyYear\0"
    "moveYearUp\0moveYearDown\0sortYears\0"
    "yearChanged\0activateStudents\0"
    "deactivateStudents\0divideYear\0comments\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_YearsForm[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x0a,
       3,    0,   70,    2, 0x0a,
       4,    0,   71,    2, 0x0a,
       5,    0,   72,    2, 0x0a,
       6,    0,   73,    2, 0x0a,
       7,    0,   74,    2, 0x0a,
       8,    0,   75,    2, 0x0a,
       9,    0,   76,    2, 0x0a,
      10,    0,   77,    2, 0x0a,
      11,    0,   78,    2, 0x0a,
      12,    0,   79,    2, 0x0a,

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

       0        // eod
};

void YearsForm::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        YearsForm *_t = static_cast<YearsForm *>(_o);
        switch (_id) {
        case 0: _t->addYear(); break;
        case 1: _t->removeYear(); break;
        case 2: _t->modifyYear(); break;
        case 3: _t->moveYearUp(); break;
        case 4: _t->moveYearDown(); break;
        case 5: _t->sortYears(); break;
        case 6: _t->yearChanged(); break;
        case 7: _t->activateStudents(); break;
        case 8: _t->deactivateStudents(); break;
        case 9: _t->divideYear(); break;
        case 10: _t->comments(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject YearsForm::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_YearsForm.data,
      qt_meta_data_YearsForm,  qt_static_metacall, 0, 0}
};


const QMetaObject *YearsForm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *YearsForm::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_YearsForm.stringdata))
        return static_cast<void*>(const_cast< YearsForm*>(this));
    if (!strcmp(_clname, "Ui::YearsForm_template"))
        return static_cast< Ui::YearsForm_template*>(const_cast< YearsForm*>(this));
    return QDialog::qt_metacast(_clname);
}

int YearsForm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}
QT_END_MOC_NAMESPACE

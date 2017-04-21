/****************************************************************************
** Meta object code from reading C++ file 'splityearform.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/interface/splityearform.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'splityearform.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_SplitYearForm_t {
    QByteArrayData data[13];
    char stringdata[150];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_SplitYearForm_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_SplitYearForm_t qt_meta_stringdata_SplitYearForm = {
    {
QT_MOC_LITERAL(0, 0, 13),
QT_MOC_LITERAL(1, 14, 15),
QT_MOC_LITERAL(2, 30, 0),
QT_MOC_LITERAL(3, 31, 1),
QT_MOC_LITERAL(4, 33, 2),
QT_MOC_LITERAL(5, 36, 25),
QT_MOC_LITERAL(6, 62, 10),
QT_MOC_LITERAL(7, 73, 13),
QT_MOC_LITERAL(8, 87, 19),
QT_MOC_LITERAL(9, 107, 13),
QT_MOC_LITERAL(10, 121, 16),
QT_MOC_LITERAL(11, 138, 4),
QT_MOC_LITERAL(12, 143, 5)
    },
    "SplitYearForm\0tabIndexChanged\0\0i\0ok\0"
    "numberOfCategoriesChanged\0addClicked\0"
    "modifyClicked\0modifyDoubleClicked\0"
    "removeClicked\0removeAllClicked\0help\0"
    "reset\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SplitYearForm[] = {

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
       8,    1,   71,    2, 0x0a,
       9,    0,   74,    2, 0x0a,
      10,    0,   75,    2, 0x0a,
      11,    0,   76,    2, 0x0a,
      12,    0,   77,    2, 0x0a,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void SplitYearForm::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SplitYearForm *_t = static_cast<SplitYearForm *>(_o);
        switch (_id) {
        case 0: _t->tabIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->ok(); break;
        case 2: _t->numberOfCategoriesChanged(); break;
        case 3: _t->addClicked(); break;
        case 4: _t->modifyClicked(); break;
        case 5: _t->modifyDoubleClicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->removeClicked(); break;
        case 7: _t->removeAllClicked(); break;
        case 8: _t->help(); break;
        case 9: _t->reset(); break;
        default: ;
        }
    }
}

const QMetaObject SplitYearForm::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_SplitYearForm.data,
      qt_meta_data_SplitYearForm,  qt_static_metacall, 0, 0}
};


const QMetaObject *SplitYearForm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SplitYearForm::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SplitYearForm.stringdata))
        return static_cast<void*>(const_cast< SplitYearForm*>(this));
    if (!strcmp(_clname, "Ui::SplitYearForm_template"))
        return static_cast< Ui::SplitYearForm_template*>(const_cast< SplitYearForm*>(this));
    return QDialog::qt_metacast(_clname);
}

int SplitYearForm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

/****************************************************************************
** Meta object code from reading C++ file 'activitytagsform.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/interface/activitytagsform.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'activitytagsform.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ActivityTagsForm_t {
    QByteArrayData data[16];
    char stringdata[251];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_ActivityTagsForm_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_ActivityTagsForm_t qt_meta_stringdata_ActivityTagsForm = {
    {
QT_MOC_LITERAL(0, 0, 16),
QT_MOC_LITERAL(1, 17, 14),
QT_MOC_LITERAL(2, 32, 0),
QT_MOC_LITERAL(3, 33, 17),
QT_MOC_LITERAL(4, 51, 17),
QT_MOC_LITERAL(5, 69, 17),
QT_MOC_LITERAL(6, 87, 19),
QT_MOC_LITERAL(7, 107, 16),
QT_MOC_LITERAL(8, 124, 18),
QT_MOC_LITERAL(9, 143, 5),
QT_MOC_LITERAL(10, 149, 19),
QT_MOC_LITERAL(11, 169, 21),
QT_MOC_LITERAL(12, 191, 20),
QT_MOC_LITERAL(13, 212, 23),
QT_MOC_LITERAL(14, 236, 8),
QT_MOC_LITERAL(15, 245, 4)
    },
    "ActivityTagsForm\0addActivityTag\0\0"
    "removeActivityTag\0renameActivityTag\0"
    "moveActivityTagUp\0moveActivityTagDown\0"
    "sortActivityTags\0activityTagChanged\0"
    "index\0activateActivityTag\0"
    "deactivateActivityTag\0printableActivityTag\0"
    "notPrintableActivityTag\0comments\0help\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ActivityTagsForm[] = {

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
       8,    1,   85,    2, 0x0a,
      10,    0,   88,    2, 0x0a,
      11,    0,   89,    2, 0x0a,
      12,    0,   90,    2, 0x0a,
      13,    0,   91,    2, 0x0a,
      14,    0,   92,    2, 0x0a,
      15,    0,   93,    2, 0x0a,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ActivityTagsForm::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ActivityTagsForm *_t = static_cast<ActivityTagsForm *>(_o);
        switch (_id) {
        case 0: _t->addActivityTag(); break;
        case 1: _t->removeActivityTag(); break;
        case 2: _t->renameActivityTag(); break;
        case 3: _t->moveActivityTagUp(); break;
        case 4: _t->moveActivityTagDown(); break;
        case 5: _t->sortActivityTags(); break;
        case 6: _t->activityTagChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->activateActivityTag(); break;
        case 8: _t->deactivateActivityTag(); break;
        case 9: _t->printableActivityTag(); break;
        case 10: _t->notPrintableActivityTag(); break;
        case 11: _t->comments(); break;
        case 12: _t->help(); break;
        default: ;
        }
    }
}

const QMetaObject ActivityTagsForm::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ActivityTagsForm.data,
      qt_meta_data_ActivityTagsForm,  qt_static_metacall, 0, 0}
};


const QMetaObject *ActivityTagsForm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ActivityTagsForm::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ActivityTagsForm.stringdata))
        return static_cast<void*>(const_cast< ActivityTagsForm*>(this));
    if (!strcmp(_clname, "Ui::ActivityTagsForm_template"))
        return static_cast< Ui::ActivityTagsForm_template*>(const_cast< ActivityTagsForm*>(this));
    return QDialog::qt_metacast(_clname);
}

int ActivityTagsForm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

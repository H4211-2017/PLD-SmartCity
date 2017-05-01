/****************************************************************************
** Meta object code from reading C++ file 'statisticsprintform.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/interface/statisticsprintform.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'statisticsprintform.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_StartStatisticsPrint_t {
    QByteArrayData data[1];
    char stringdata[22];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_StartStatisticsPrint_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_StartStatisticsPrint_t qt_meta_stringdata_StartStatisticsPrint = {
    {
QT_MOC_LITERAL(0, 0, 20)
    },
    "StartStatisticsPrint\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_StartStatisticsPrint[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void StartStatisticsPrint::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject StartStatisticsPrint::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_StartStatisticsPrint.data,
      qt_meta_data_StartStatisticsPrint,  qt_static_metacall, 0, 0}
};


const QMetaObject *StartStatisticsPrint::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *StartStatisticsPrint::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_StartStatisticsPrint.stringdata))
        return static_cast<void*>(const_cast< StartStatisticsPrint*>(this));
    return QObject::qt_metacast(_clname);
}

int StartStatisticsPrint::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
struct qt_meta_stringdata_StatisticsPrintForm_t {
    QByteArrayData data[14];
    char stringdata[187];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_StatisticsPrintForm_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_StatisticsPrintForm_t qt_meta_stringdata_StatisticsPrintForm = {
    {
QT_MOC_LITERAL(0, 0, 19),
QT_MOC_LITERAL(1, 20, 9),
QT_MOC_LITERAL(2, 30, 0),
QT_MOC_LITERAL(3, 31, 11),
QT_MOC_LITERAL(4, 43, 15),
QT_MOC_LITERAL(5, 59, 21),
QT_MOC_LITERAL(6, 81, 8),
QT_MOC_LITERAL(7, 90, 5),
QT_MOC_LITERAL(8, 96, 16),
QT_MOC_LITERAL(9, 113, 17),
QT_MOC_LITERAL(10, 131, 9),
QT_MOC_LITERAL(11, 141, 7),
QT_MOC_LITERAL(12, 149, 17),
QT_MOC_LITERAL(13, 167, 18)
    },
    "StatisticsPrintForm\0selectAll\0\0"
    "unselectAll\0updateNamesList\0"
    "updateHTMLprintString\0printAll\0print\0"
    "printPreviewFull\0updatePreviewFull\0"
    "QPrinter*\0printer\0printPreviewSmall\0"
    "updatePreviewSmall\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_StatisticsPrintForm[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x08,
       3,    0,   60,    2, 0x08,
       4,    0,   61,    2, 0x08,
       5,    1,   62,    2, 0x08,
       7,    0,   65,    2, 0x08,
       8,    0,   66,    2, 0x08,
       9,    1,   67,    2, 0x08,
      12,    0,   70,    2, 0x08,
      13,    1,   71,    2, 0x08,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::QString, QMetaType::Bool,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 10,   11,

       0        // eod
};

void StatisticsPrintForm::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        StatisticsPrintForm *_t = static_cast<StatisticsPrintForm *>(_o);
        switch (_id) {
        case 0: _t->selectAll(); break;
        case 1: _t->unselectAll(); break;
        case 2: _t->updateNamesList(); break;
        case 3: { QString _r = _t->updateHTMLprintString((*reinterpret_cast< bool(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 4: _t->print(); break;
        case 5: _t->printPreviewFull(); break;
        case 6: _t->updatePreviewFull((*reinterpret_cast< QPrinter*(*)>(_a[1]))); break;
        case 7: _t->printPreviewSmall(); break;
        case 8: _t->updatePreviewSmall((*reinterpret_cast< QPrinter*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject StatisticsPrintForm::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_StatisticsPrintForm.data,
      qt_meta_data_StatisticsPrintForm,  qt_static_metacall, 0, 0}
};


const QMetaObject *StatisticsPrintForm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *StatisticsPrintForm::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_StatisticsPrintForm.stringdata))
        return static_cast<void*>(const_cast< StatisticsPrintForm*>(this));
    return QDialog::qt_metacast(_clname);
}

int StatisticsPrintForm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
QT_END_MOC_NAMESPACE

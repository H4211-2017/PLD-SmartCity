/****************************************************************************
** Meta object code from reading C++ file 'timetableprintform.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/interface/timetableprintform.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'timetableprintform.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_StartTimetablePrint_t {
    QByteArrayData data[1];
    char stringdata[21];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_StartTimetablePrint_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_StartTimetablePrint_t qt_meta_stringdata_StartTimetablePrint = {
    {
QT_MOC_LITERAL(0, 0, 19)
    },
    "StartTimetablePrint\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_StartTimetablePrint[] = {

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

void StartTimetablePrint::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject StartTimetablePrint::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_StartTimetablePrint.data,
      qt_meta_data_StartTimetablePrint,  qt_static_metacall, 0, 0}
};


const QMetaObject *StartTimetablePrint::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *StartTimetablePrint::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_StartTimetablePrint.stringdata))
        return static_cast<void*>(const_cast< StartTimetablePrint*>(this));
    return QObject::qt_metacast(_clname);
}

int StartTimetablePrint::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
struct qt_meta_stringdata_TimetablePrintForm_t {
    QByteArrayData data[14];
    char stringdata[186];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_TimetablePrintForm_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_TimetablePrintForm_t qt_meta_stringdata_TimetablePrintForm = {
    {
QT_MOC_LITERAL(0, 0, 18),
QT_MOC_LITERAL(1, 19, 9),
QT_MOC_LITERAL(2, 29, 0),
QT_MOC_LITERAL(3, 30, 11),
QT_MOC_LITERAL(4, 42, 15),
QT_MOC_LITERAL(5, 58, 21),
QT_MOC_LITERAL(6, 80, 8),
QT_MOC_LITERAL(7, 89, 5),
QT_MOC_LITERAL(8, 95, 16),
QT_MOC_LITERAL(9, 112, 17),
QT_MOC_LITERAL(10, 130, 9),
QT_MOC_LITERAL(11, 140, 7),
QT_MOC_LITERAL(12, 148, 17),
QT_MOC_LITERAL(13, 166, 18)
    },
    "TimetablePrintForm\0selectAll\0\0unselectAll\0"
    "updateNamesList\0updateHtmlPrintString\0"
    "printAll\0print\0printPreviewFull\0"
    "updatePreviewFull\0QPrinter*\0printer\0"
    "printPreviewSmall\0updatePreviewSmall\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TimetablePrintForm[] = {

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

void TimetablePrintForm::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TimetablePrintForm *_t = static_cast<TimetablePrintForm *>(_o);
        switch (_id) {
        case 0: _t->selectAll(); break;
        case 1: _t->unselectAll(); break;
        case 2: _t->updateNamesList(); break;
        case 3: { QString _r = _t->updateHtmlPrintString((*reinterpret_cast< bool(*)>(_a[1])));
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

const QMetaObject TimetablePrintForm::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_TimetablePrintForm.data,
      qt_meta_data_TimetablePrintForm,  qt_static_metacall, 0, 0}
};


const QMetaObject *TimetablePrintForm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TimetablePrintForm::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_TimetablePrintForm.stringdata))
        return static_cast<void*>(const_cast< TimetablePrintForm*>(this));
    return QDialog::qt_metacast(_clname);
}

int TimetablePrintForm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

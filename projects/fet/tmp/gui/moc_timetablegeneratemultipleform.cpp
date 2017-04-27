/****************************************************************************
** Meta object code from reading C++ file 'timetablegeneratemultipleform.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/interface/timetablegeneratemultipleform.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'timetablegeneratemultipleform.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_GenerateMultipleThread_t {
    QByteArrayData data[8];
    char stringdata[95];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_GenerateMultipleThread_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_GenerateMultipleThread_t qt_meta_stringdata_GenerateMultipleThread = {
    {
QT_MOC_LITERAL(0, 0, 22),
QT_MOC_LITERAL(1, 23, 16),
QT_MOC_LITERAL(2, 40, 0),
QT_MOC_LITERAL(3, 41, 9),
QT_MOC_LITERAL(4, 51, 18),
QT_MOC_LITERAL(5, 70, 11),
QT_MOC_LITERAL(6, 82, 2),
QT_MOC_LITERAL(7, 85, 8)
    },
    "GenerateMultipleThread\0timetableStarted\0"
    "\0timetable\0timetableGenerated\0description\0"
    "ok\0finished\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GenerateMultipleThread[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06,
       4,    3,   32,    2, 0x06,
       7,    0,   39,    2, 0x06,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int, QMetaType::QString, QMetaType::Bool,    3,    5,    6,
    QMetaType::Void,

       0        // eod
};

void GenerateMultipleThread::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        GenerateMultipleThread *_t = static_cast<GenerateMultipleThread *>(_o);
        switch (_id) {
        case 0: _t->timetableStarted((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->timetableGenerated((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 2: _t->finished(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (GenerateMultipleThread::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GenerateMultipleThread::timetableStarted)) {
                *result = 0;
            }
        }
        {
            typedef void (GenerateMultipleThread::*_t)(int , const QString & , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GenerateMultipleThread::timetableGenerated)) {
                *result = 1;
            }
        }
        {
            typedef void (GenerateMultipleThread::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GenerateMultipleThread::finished)) {
                *result = 2;
            }
        }
    }
}

const QMetaObject GenerateMultipleThread::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_GenerateMultipleThread.data,
      qt_meta_data_GenerateMultipleThread,  qt_static_metacall, 0, 0}
};


const QMetaObject *GenerateMultipleThread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GenerateMultipleThread::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_GenerateMultipleThread.stringdata))
        return static_cast<void*>(const_cast< GenerateMultipleThread*>(this));
    return QThread::qt_metacast(_clname);
}

int GenerateMultipleThread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void GenerateMultipleThread::timetableStarted(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void GenerateMultipleThread::timetableGenerated(int _t1, const QString & _t2, bool _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void GenerateMultipleThread::finished()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}
struct qt_meta_stringdata_TimetableGenerateMultipleForm_t {
    QByteArrayData data[14];
    char stringdata[149];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_TimetableGenerateMultipleForm_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_TimetableGenerateMultipleForm_t qt_meta_stringdata_TimetableGenerateMultipleForm = {
    {
QT_MOC_LITERAL(0, 0, 29),
QT_MOC_LITERAL(1, 30, 4),
QT_MOC_LITERAL(2, 35, 0),
QT_MOC_LITERAL(3, 36, 5),
QT_MOC_LITERAL(4, 42, 4),
QT_MOC_LITERAL(5, 47, 12),
QT_MOC_LITERAL(6, 60, 16),
QT_MOC_LITERAL(7, 77, 9),
QT_MOC_LITERAL(8, 87, 18),
QT_MOC_LITERAL(9, 106, 11),
QT_MOC_LITERAL(10, 118, 2),
QT_MOC_LITERAL(11, 121, 8),
QT_MOC_LITERAL(12, 130, 14),
QT_MOC_LITERAL(13, 145, 2)
    },
    "TimetableGenerateMultipleForm\0help\0\0"
    "start\0stop\0closePressed\0timetableStarted\0"
    "timetable\0timetableGenerated\0description\0"
    "ok\0finished\0activityPlaced\0na\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TimetableGenerateMultipleForm[] = {

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
       6,    1,   58,    2, 0x08,
       8,    3,   61,    2, 0x08,
      11,    0,   68,    2, 0x08,
      12,    1,   69,    2, 0x08,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Int, QMetaType::QString, QMetaType::Bool,    7,    9,   10,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   13,

       0        // eod
};

void TimetableGenerateMultipleForm::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TimetableGenerateMultipleForm *_t = static_cast<TimetableGenerateMultipleForm *>(_o);
        switch (_id) {
        case 0: _t->help(); break;
        case 1: _t->start(); break;
        case 2: _t->stop(); break;
        case 3: _t->closePressed(); break;
        case 4: _t->timetableStarted((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->timetableGenerated((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 6: _t->finished(); break;
        case 7: _t->activityPlaced((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject TimetableGenerateMultipleForm::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_TimetableGenerateMultipleForm.data,
      qt_meta_data_TimetableGenerateMultipleForm,  qt_static_metacall, 0, 0}
};


const QMetaObject *TimetableGenerateMultipleForm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TimetableGenerateMultipleForm::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_TimetableGenerateMultipleForm.stringdata))
        return static_cast<void*>(const_cast< TimetableGenerateMultipleForm*>(this));
    if (!strcmp(_clname, "Ui::TimetableGenerateMultipleForm_template"))
        return static_cast< Ui::TimetableGenerateMultipleForm_template*>(const_cast< TimetableGenerateMultipleForm*>(this));
    return QDialog::qt_metacast(_clname);
}

int TimetableGenerateMultipleForm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

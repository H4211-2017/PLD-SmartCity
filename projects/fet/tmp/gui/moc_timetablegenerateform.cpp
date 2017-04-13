/****************************************************************************
** Meta object code from reading C++ file 'timetablegenerateform.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/interface/timetablegenerateform.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'timetablegenerateform.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_GenerateThread_t {
    QByteArrayData data[4];
    char stringdata[47];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_GenerateThread_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_GenerateThread_t qt_meta_stringdata_GenerateThread = {
    {
QT_MOC_LITERAL(0, 0, 14),
QT_MOC_LITERAL(1, 15, 18),
QT_MOC_LITERAL(2, 34, 0),
QT_MOC_LITERAL(3, 35, 10)
    },
    "GenerateThread\0generationComputed\0\0"
    "generation\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GenerateThread[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x06,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,

       0        // eod
};

void GenerateThread::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        GenerateThread *_t = static_cast<GenerateThread *>(_o);
        switch (_id) {
        case 0: _t->generationComputed((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (GenerateThread::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GenerateThread::generationComputed)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject GenerateThread::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_GenerateThread.data,
      qt_meta_data_GenerateThread,  qt_static_metacall, 0, 0}
};


const QMetaObject *GenerateThread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GenerateThread::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_GenerateThread.stringdata))
        return static_cast<void*>(const_cast< GenerateThread*>(this));
    return QThread::qt_metacast(_clname);
}

int GenerateThread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void GenerateThread::generationComputed(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_TimetableGenerateForm_t {
    QByteArrayData data[15];
    char stringdata[174];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_TimetableGenerateForm_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_TimetableGenerateForm_t qt_meta_stringdata_TimetableGenerateForm = {
    {
QT_MOC_LITERAL(0, 0, 21),
QT_MOC_LITERAL(1, 22, 5),
QT_MOC_LITERAL(2, 28, 0),
QT_MOC_LITERAL(3, 29, 4),
QT_MOC_LITERAL(4, 34, 11),
QT_MOC_LITERAL(5, 46, 5),
QT_MOC_LITERAL(6, 52, 12),
QT_MOC_LITERAL(7, 65, 4),
QT_MOC_LITERAL(8, 70, 17),
QT_MOC_LITERAL(9, 88, 14),
QT_MOC_LITERAL(10, 103, 2),
QT_MOC_LITERAL(11, 106, 18),
QT_MOC_LITERAL(12, 125, 17),
QT_MOC_LITERAL(13, 143, 13),
QT_MOC_LITERAL(14, 157, 15)
    },
    "TimetableGenerateForm\0start\0\0stop\0"
    "stopHighest\0write\0closePressed\0help\0"
    "writeHighestStage\0activityPlaced\0na\0"
    "simulationFinished\0impossibleToSolve\0"
    "seeImpossible\0seeInitialOrder\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TimetableGenerateForm[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x0a,
       3,    0,   75,    2, 0x0a,
       4,    0,   76,    2, 0x0a,
       5,    0,   77,    2, 0x0a,
       6,    0,   78,    2, 0x0a,
       7,    0,   79,    2, 0x0a,
       8,    0,   80,    2, 0x0a,
       9,    1,   81,    2, 0x08,
      11,    0,   84,    2, 0x08,
      12,    0,   85,    2, 0x08,
      13,    0,   86,    2, 0x08,
      14,    0,   87,    2, 0x08,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void TimetableGenerateForm::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TimetableGenerateForm *_t = static_cast<TimetableGenerateForm *>(_o);
        switch (_id) {
        case 0: _t->start(); break;
        case 1: _t->stop(); break;
        case 2: _t->stopHighest(); break;
        case 3: _t->write(); break;
        case 4: _t->closePressed(); break;
        case 5: _t->help(); break;
        case 6: _t->writeHighestStage(); break;
        case 7: _t->activityPlaced((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->simulationFinished(); break;
        case 9: _t->impossibleToSolve(); break;
        case 10: _t->seeImpossible(); break;
        case 11: _t->seeInitialOrder(); break;
        default: ;
        }
    }
}

const QMetaObject TimetableGenerateForm::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_TimetableGenerateForm.data,
      qt_meta_data_TimetableGenerateForm,  qt_static_metacall, 0, 0}
};


const QMetaObject *TimetableGenerateForm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TimetableGenerateForm::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_TimetableGenerateForm.stringdata))
        return static_cast<void*>(const_cast< TimetableGenerateForm*>(this));
    if (!strcmp(_clname, "Ui::TimetableGenerateForm_template"))
        return static_cast< Ui::TimetableGenerateForm_template*>(const_cast< TimetableGenerateForm*>(this));
    return QDialog::qt_metacast(_clname);
}

int TimetableGenerateForm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}
QT_END_MOC_NAMESPACE

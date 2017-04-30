/****************************************************************************
** Meta object code from reading C++ file 'activityplanningform.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/interface/activityplanningform.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'activityplanningform.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ActivityPlanningForm_t {
    QByteArrayData data[15];
    char stringdata[307];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_ActivityPlanningForm_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_ActivityPlanningForm_t qt_meta_stringdata_ActivityPlanningForm = {
    {
QT_MOC_LITERAL(0, 0, 20),
QT_MOC_LITERAL(1, 21, 22),
QT_MOC_LITERAL(2, 44, 0),
QT_MOC_LITERAL(3, 45, 5),
QT_MOC_LITERAL(4, 51, 20),
QT_MOC_LITERAL(5, 72, 38),
QT_MOC_LITERAL(6, 111, 36),
QT_MOC_LITERAL(7, 148, 36),
QT_MOC_LITERAL(8, 185, 12),
QT_MOC_LITERAL(9, 198, 30),
QT_MOC_LITERAL(10, 229, 21),
QT_MOC_LITERAL(11, 251, 18),
QT_MOC_LITERAL(12, 270, 16),
QT_MOC_LITERAL(13, 287, 9),
QT_MOC_LITERAL(14, 297, 8)
    },
    "ActivityPlanningForm\0activitiesCellSelected\0"
    "\0index\0teachersCellSelected\0"
    "activitiesTableHorizontalHeaderClicked\0"
    "activitiesTableVerticalHeaderClicked\0"
    "teachersTableHorizontalHeaderClicked\0"
    "updateTables\0updateTables_Students_Subjects\0"
    "updateTables_Teachers\0updateTablesVisual\0"
    "pseudoActivities\0deleteAll\0showHide\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ActivityPlanningForm[] = {

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
       1,    1,   74,    2, 0x08,
       4,    1,   77,    2, 0x08,
       5,    1,   80,    2, 0x08,
       6,    1,   83,    2, 0x08,
       7,    1,   86,    2, 0x08,
       8,    1,   89,    2, 0x08,
       9,    0,   92,    2, 0x08,
      10,    0,   93,    2, 0x08,
      11,    1,   94,    2, 0x08,
      12,    0,   97,    2, 0x08,
      13,    0,   98,    2, 0x08,
      14,    0,   99,    2, 0x08,

 // slots: parameters
    QMetaType::Void, QMetaType::QModelIndex,    3,
    QMetaType::Void, QMetaType::QModelIndex,    3,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ActivityPlanningForm::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ActivityPlanningForm *_t = static_cast<ActivityPlanningForm *>(_o);
        switch (_id) {
        case 0: _t->activitiesCellSelected((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 1: _t->teachersCellSelected((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 2: _t->activitiesTableHorizontalHeaderClicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->activitiesTableVerticalHeaderClicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->teachersTableHorizontalHeaderClicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->updateTables((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->updateTables_Students_Subjects(); break;
        case 7: _t->updateTables_Teachers(); break;
        case 8: _t->updateTablesVisual((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->pseudoActivities(); break;
        case 10: _t->deleteAll(); break;
        case 11: _t->showHide(); break;
        default: ;
        }
    }
}

const QMetaObject ActivityPlanningForm::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ActivityPlanningForm.data,
      qt_meta_data_ActivityPlanningForm,  qt_static_metacall, 0, 0}
};


const QMetaObject *ActivityPlanningForm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ActivityPlanningForm::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ActivityPlanningForm.stringdata))
        return static_cast<void*>(const_cast< ActivityPlanningForm*>(this));
    return QDialog::qt_metacast(_clname);
}

int ActivityPlanningForm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PlanningCommunicationSpinBox_t {
    QByteArrayData data[5];
    char stringdata[67];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_PlanningCommunicationSpinBox_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_PlanningCommunicationSpinBox_t qt_meta_stringdata_PlanningCommunicationSpinBox = {
    {
QT_MOC_LITERAL(0, 0, 28),
QT_MOC_LITERAL(1, 29, 12),
QT_MOC_LITERAL(2, 42, 0),
QT_MOC_LITERAL(3, 43, 8),
QT_MOC_LITERAL(4, 52, 13)
    },
    "PlanningCommunicationSpinBox\0valueChanged\0"
    "\0newValue\0increaseValue\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PlanningCommunicationSpinBox[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06,

 // slots: name, argc, parameters, tag, flags
       4,    0,   27,    2, 0x0a,

 // signals: parameters
    QMetaType::Int, QMetaType::Int,    3,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void PlanningCommunicationSpinBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PlanningCommunicationSpinBox *_t = static_cast<PlanningCommunicationSpinBox *>(_o);
        switch (_id) {
        case 0: { int _r = _t->valueChanged((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 1: _t->increaseValue(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef int (PlanningCommunicationSpinBox::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PlanningCommunicationSpinBox::valueChanged)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject PlanningCommunicationSpinBox::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PlanningCommunicationSpinBox.data,
      qt_meta_data_PlanningCommunicationSpinBox,  qt_static_metacall, 0, 0}
};


const QMetaObject *PlanningCommunicationSpinBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PlanningCommunicationSpinBox::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PlanningCommunicationSpinBox.stringdata))
        return static_cast<void*>(const_cast< PlanningCommunicationSpinBox*>(this));
    return QObject::qt_metacast(_clname);
}

int PlanningCommunicationSpinBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
int PlanningCommunicationSpinBox::valueChanged(int _t1)
{
    int _t0 = int();
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(&_t0)), const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
    return _t0;
}
QT_END_MOC_NAMESPACE

/****************************************************************************
** Meta object code from reading C++ file 'teachersform.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/interface/teachersform.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'teachersform.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_TeachersForm_t {
    QByteArrayData data[15];
    char stringdata[199];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_TeachersForm_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_TeachersForm_t qt_meta_stringdata_TeachersForm = {
    {
QT_MOC_LITERAL(0, 0, 12),
QT_MOC_LITERAL(1, 13, 10),
QT_MOC_LITERAL(2, 24, 0),
QT_MOC_LITERAL(3, 25, 13),
QT_MOC_LITERAL(4, 39, 13),
QT_MOC_LITERAL(5, 53, 19),
QT_MOC_LITERAL(6, 73, 17),
QT_MOC_LITERAL(7, 91, 13),
QT_MOC_LITERAL(8, 105, 15),
QT_MOC_LITERAL(9, 121, 12),
QT_MOC_LITERAL(10, 134, 14),
QT_MOC_LITERAL(11, 149, 5),
QT_MOC_LITERAL(12, 155, 15),
QT_MOC_LITERAL(13, 171, 17),
QT_MOC_LITERAL(14, 189, 8)
    },
    "TeachersForm\0addTeacher\0\0removeTeacher\0"
    "renameTeacher\0targetNumberOfHours\0"
    "qualifiedSubjects\0moveTeacherUp\0"
    "moveTeacherDown\0sortTeachers\0"
    "teacherChanged\0index\0activateTeacher\0"
    "deactivateTeacher\0comments\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TeachersForm[] = {

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
       9,    0,   81,    2, 0x0a,
      10,    1,   82,    2, 0x0a,
      12,    0,   85,    2, 0x0a,
      13,    0,   86,    2, 0x0a,
      14,    0,   87,    2, 0x0a,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void TeachersForm::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TeachersForm *_t = static_cast<TeachersForm *>(_o);
        switch (_id) {
        case 0: _t->addTeacher(); break;
        case 1: _t->removeTeacher(); break;
        case 2: _t->renameTeacher(); break;
        case 3: _t->targetNumberOfHours(); break;
        case 4: _t->qualifiedSubjects(); break;
        case 5: _t->moveTeacherUp(); break;
        case 6: _t->moveTeacherDown(); break;
        case 7: _t->sortTeachers(); break;
        case 8: _t->teacherChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->activateTeacher(); break;
        case 10: _t->deactivateTeacher(); break;
        case 11: _t->comments(); break;
        default: ;
        }
    }
}

const QMetaObject TeachersForm::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_TeachersForm.data,
      qt_meta_data_TeachersForm,  qt_static_metacall, 0, 0}
};


const QMetaObject *TeachersForm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TeachersForm::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_TeachersForm.stringdata))
        return static_cast<void*>(const_cast< TeachersForm*>(this));
    if (!strcmp(_clname, "Ui::TeachersForm_template"))
        return static_cast< Ui::TeachersForm_template*>(const_cast< TeachersForm*>(this));
    return QDialog::qt_metacast(_clname);
}

int TeachersForm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

/****************************************************************************
** Meta object code from reading C++ file 'people.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../NotesDSS/people.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'people.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_people_t {
    QByteArrayData data[10];
    char stringdata[57];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_people_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_people_t qt_meta_stringdata_people = {
    {
QT_MOC_LITERAL(0, 0, 6),
QT_MOC_LITERAL(1, 7, 10),
QT_MOC_LITERAL(2, 18, 0),
QT_MOC_LITERAL(3, 19, 4),
QT_MOC_LITERAL(4, 24, 8),
QT_MOC_LITERAL(5, 33, 3),
QT_MOC_LITERAL(6, 37, 4),
QT_MOC_LITERAL(7, 42, 3),
QT_MOC_LITERAL(8, 46, 4),
QT_MOC_LITERAL(9, 51, 4)
    },
    "people\0makeStatus\0\0text\0makeFace\0add\0"
    "edit\0del\0save\0load\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_people[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x0a,
       4,    1,   52,    2, 0x0a,
       5,    0,   55,    2, 0x0a,
       6,    0,   56,    2, 0x0a,
       7,    0,   57,    2, 0x0a,
       8,    0,   58,    2, 0x0a,
       9,    0,   59,    2, 0x0a,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void people::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        people *_t = static_cast<people *>(_o);
        switch (_id) {
        case 0: _t->makeStatus((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->makeFace((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->add(); break;
        case 3: _t->edit(); break;
        case 4: _t->del(); break;
        case 5: _t->save(); break;
        case 6: _t->load(); break;
        default: ;
        }
    }
}

const QMetaObject people::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_people.data,
      qt_meta_data_people,  qt_static_metacall, 0, 0}
};


const QMetaObject *people::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *people::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_people.stringdata))
        return static_cast<void*>(const_cast< people*>(this));
    return QWidget::qt_metacast(_clname);
}

int people::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_END_MOC_NAMESPACE

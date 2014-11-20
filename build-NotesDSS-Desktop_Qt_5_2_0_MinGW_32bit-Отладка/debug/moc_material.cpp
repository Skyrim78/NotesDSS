/****************************************************************************
** Meta object code from reading C++ file 'material.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../NotesDSS/material.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'material.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_material_t {
    QByteArrayData data[14];
    char stringdata[99];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_material_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_material_t qt_meta_stringdata_material = {
    {
QT_MOC_LITERAL(0, 0, 8),
QT_MOC_LITERAL(1, 9, 10),
QT_MOC_LITERAL(2, 20, 0),
QT_MOC_LITERAL(3, 21, 4),
QT_MOC_LITERAL(4, 26, 4),
QT_MOC_LITERAL(5, 31, 4),
QT_MOC_LITERAL(6, 36, 4),
QT_MOC_LITERAL(7, 41, 8),
QT_MOC_LITERAL(8, 50, 10),
QT_MOC_LITERAL(9, 61, 9),
QT_MOC_LITERAL(10, 71, 6),
QT_MOC_LITERAL(11, 78, 10),
QT_MOC_LITERAL(12, 89, 3),
QT_MOC_LITERAL(13, 93, 4)
    },
    "material\0makeStatus\0\0text\0load\0edit\0"
    "save\0readFile\0removeLine\0clearLine\0"
    "import\0expandName\0vid\0line\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_material[] = {

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
       1,    1,   59,    2, 0x0a,
       4,    0,   62,    2, 0x0a,
       5,    0,   63,    2, 0x0a,
       6,    0,   64,    2, 0x0a,
       7,    0,   65,    2, 0x0a,
       8,    0,   66,    2, 0x0a,
       9,    0,   67,    2, 0x0a,
      10,    0,   68,    2, 0x0a,
      11,    2,   69,    2, 0x0a,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::QString, QMetaType::Int, QMetaType::QString,   12,   13,

       0        // eod
};

void material::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        material *_t = static_cast<material *>(_o);
        switch (_id) {
        case 0: _t->makeStatus((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->load(); break;
        case 2: _t->edit(); break;
        case 3: _t->save(); break;
        case 4: _t->readFile(); break;
        case 5: _t->removeLine(); break;
        case 6: _t->clearLine(); break;
        case 7: _t->import(); break;
        case 8: { QString _r = _t->expandName((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObject material::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_material.data,
      qt_meta_data_material,  qt_static_metacall, 0, 0}
};


const QMetaObject *material::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *material::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_material.stringdata))
        return static_cast<void*>(const_cast< material*>(this));
    return QWidget::qt_metacast(_clname);
}

int material::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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

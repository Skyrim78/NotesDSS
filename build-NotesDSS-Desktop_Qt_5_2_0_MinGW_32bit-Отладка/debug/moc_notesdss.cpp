/****************************************************************************
** Meta object code from reading C++ file 'notesdss.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../NotesDSS/notesdss.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'notesdss.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_NotesDSS_t {
    QByteArrayData data[13];
    char stringdata[130];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_NotesDSS_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_NotesDSS_t qt_meta_stringdata_NotesDSS = {
    {
QT_MOC_LITERAL(0, 0, 8),
QT_MOC_LITERAL(1, 9, 11),
QT_MOC_LITERAL(2, 21, 0),
QT_MOC_LITERAL(3, 22, 12),
QT_MOC_LITERAL(4, 35, 9),
QT_MOC_LITERAL(5, 45, 10),
QT_MOC_LITERAL(6, 56, 4),
QT_MOC_LITERAL(7, 61, 8),
QT_MOC_LITERAL(8, 70, 6),
QT_MOC_LITERAL(9, 77, 11),
QT_MOC_LITERAL(10, 89, 11),
QT_MOC_LITERAL(11, 101, 12),
QT_MOC_LITERAL(12, 114, 14)
    },
    "NotesDSS\0readSetting\0\0writeSetting\0"
    "connectDB\0openWidget\0name\0QWidget*\0"
    "widget\0unitsWidget\0firmsWidget\0"
    "peopleWidget\0materialWidget\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_NotesDSS[] = {

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
       5,    2,   57,    2, 0x0a,
       9,    0,   62,    2, 0x0a,
      10,    0,   63,    2, 0x0a,
      11,    0,   64,    2, 0x0a,
      12,    0,   65,    2, 0x0a,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 7,    6,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void NotesDSS::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        NotesDSS *_t = static_cast<NotesDSS *>(_o);
        switch (_id) {
        case 0: _t->readSetting(); break;
        case 1: _t->writeSetting(); break;
        case 2: _t->connectDB(); break;
        case 3: _t->openWidget((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QWidget*(*)>(_a[2]))); break;
        case 4: _t->unitsWidget(); break;
        case 5: _t->firmsWidget(); break;
        case 6: _t->peopleWidget(); break;
        case 7: _t->materialWidget(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QWidget* >(); break;
            }
            break;
        }
    }
}

const QMetaObject NotesDSS::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_NotesDSS.data,
      qt_meta_data_NotesDSS,  qt_static_metacall, 0, 0}
};


const QMetaObject *NotesDSS::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *NotesDSS::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_NotesDSS.stringdata))
        return static_cast<void*>(const_cast< NotesDSS*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int NotesDSS::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}
QT_END_MOC_NAMESPACE

/****************************************************************************
** Meta object code from reading C++ file 'qgeoroutereply.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qgeoroutereply.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgeoroutereply.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QGeoRouteReply_t {
    QByteArrayData data[6];
    char stringdata[66];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_QGeoRouteReply_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_QGeoRouteReply_t qt_meta_stringdata_QGeoRouteReply = {
    {
QT_MOC_LITERAL(0, 0, 14),
QT_MOC_LITERAL(1, 15, 8),
QT_MOC_LITERAL(2, 24, 0),
QT_MOC_LITERAL(3, 25, 5),
QT_MOC_LITERAL(4, 31, 21),
QT_MOC_LITERAL(5, 53, 11)
    },
    "QGeoRouteReply\0finished\0\0error\0"
    "QGeoRouteReply::Error\0errorString\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QGeoRouteReply[] = {

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
       1,    0,   29,    2, 0x06,
       3,    2,   30,    2, 0x06,
       3,    1,   35,    2, 0x26,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4, QMetaType::QString,    3,    5,
    QMetaType::Void, 0x80000000 | 4,    3,

       0        // eod
};

void QGeoRouteReply::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QGeoRouteReply *_t = static_cast<QGeoRouteReply *>(_o);
        switch (_id) {
        case 0: _t->finished(); break;
        case 1: _t->error((*reinterpret_cast< QGeoRouteReply::Error(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 2: _t->error((*reinterpret_cast< QGeoRouteReply::Error(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QGeoRouteReply::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QGeoRouteReply::finished)) {
                *result = 0;
            }
        }
        {
            typedef void (QGeoRouteReply::*_t)(QGeoRouteReply::Error , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QGeoRouteReply::error)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject QGeoRouteReply::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QGeoRouteReply.data,
      qt_meta_data_QGeoRouteReply,  qt_static_metacall, 0, 0}
};


const QMetaObject *QGeoRouteReply::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QGeoRouteReply::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QGeoRouteReply.stringdata))
        return static_cast<void*>(const_cast< QGeoRouteReply*>(this));
    return QObject::qt_metacast(_clname);
}

int QGeoRouteReply::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void QGeoRouteReply::finished()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void QGeoRouteReply::error(QGeoRouteReply::Error _t1, const QString & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE

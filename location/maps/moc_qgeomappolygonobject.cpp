/****************************************************************************
** Meta object code from reading C++ file 'qgeomappolygonobject.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qgeomappolygonobject.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgeomappolygonobject.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QGeoMapPolygonObject_t {
    QByteArrayData data[9];
    char stringdata[96];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_QGeoMapPolygonObject_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_QGeoMapPolygonObject_t qt_meta_stringdata_QGeoMapPolygonObject = {
    {
QT_MOC_LITERAL(0, 0, 20),
QT_MOC_LITERAL(1, 21, 11),
QT_MOC_LITERAL(2, 33, 0),
QT_MOC_LITERAL(3, 34, 21),
QT_MOC_LITERAL(4, 56, 4),
QT_MOC_LITERAL(5, 61, 10),
QT_MOC_LITERAL(6, 72, 3),
QT_MOC_LITERAL(7, 76, 12),
QT_MOC_LITERAL(8, 89, 5)
    },
    "QGeoMapPolygonObject\0pathChanged\0\0"
    "QList<QGeoCoordinate>\0path\0penChanged\0"
    "pen\0brushChanged\0brush\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QGeoMapPolygonObject[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       3,   38, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06,
       5,    1,   32,    2, 0x06,
       7,    1,   35,    2, 0x06,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::QPen,    6,
    QMetaType::Void, QMetaType::QBrush,    8,

 // properties: name, type, flags
       4, 0x80000000 | 3, 0x0049510b,
       6, QMetaType::QPen, 0x00495103,
       8, QMetaType::QBrush, 0x00495103,

 // properties: notify_signal_id
       0,
       1,
       2,

       0        // eod
};

void QGeoMapPolygonObject::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QGeoMapPolygonObject *_t = static_cast<QGeoMapPolygonObject *>(_o);
        switch (_id) {
        case 0: _t->pathChanged((*reinterpret_cast< const QList<QGeoCoordinate>(*)>(_a[1]))); break;
        case 1: _t->penChanged((*reinterpret_cast< const QPen(*)>(_a[1]))); break;
        case 2: _t->brushChanged((*reinterpret_cast< const QBrush(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QGeoMapPolygonObject::*_t)(const QList<QGeoCoordinate> & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QGeoMapPolygonObject::pathChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (QGeoMapPolygonObject::*_t)(const QPen & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QGeoMapPolygonObject::penChanged)) {
                *result = 1;
            }
        }
        {
            typedef void (QGeoMapPolygonObject::*_t)(const QBrush & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QGeoMapPolygonObject::brushChanged)) {
                *result = 2;
            }
        }
    }
}

const QMetaObject QGeoMapPolygonObject::staticMetaObject = {
    { &QGeoMapObject::staticMetaObject, qt_meta_stringdata_QGeoMapPolygonObject.data,
      qt_meta_data_QGeoMapPolygonObject,  qt_static_metacall, 0, 0}
};


const QMetaObject *QGeoMapPolygonObject::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QGeoMapPolygonObject::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QGeoMapPolygonObject.stringdata))
        return static_cast<void*>(const_cast< QGeoMapPolygonObject*>(this));
    return QGeoMapObject::qt_metacast(_clname);
}

int QGeoMapPolygonObject::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGeoMapObject::qt_metacall(_c, _id, _a);
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
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QList<QGeoCoordinate>*>(_v) = path(); break;
        case 1: *reinterpret_cast< QPen*>(_v) = pen(); break;
        case 2: *reinterpret_cast< QBrush*>(_v) = brush(); break;
        }
        _id -= 3;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setPath(*reinterpret_cast< QList<QGeoCoordinate>*>(_v)); break;
        case 1: setPen(*reinterpret_cast< QPen*>(_v)); break;
        case 2: setBrush(*reinterpret_cast< QBrush*>(_v)); break;
        }
        _id -= 3;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QGeoMapPolygonObject::pathChanged(const QList<QGeoCoordinate> & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QGeoMapPolygonObject::penChanged(const QPen & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QGeoMapPolygonObject::brushChanged(const QBrush & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE

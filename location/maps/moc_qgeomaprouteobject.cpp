/****************************************************************************
** Meta object code from reading C++ file 'qgeomaprouteobject.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qgeomaprouteobject.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgeomaprouteobject.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QGeoMapRouteObject_t {
    QByteArrayData data[9];
    char stringdata[96];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_QGeoMapRouteObject_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_QGeoMapRouteObject_t qt_meta_stringdata_QGeoMapRouteObject = {
    {
QT_MOC_LITERAL(0, 0, 18),
QT_MOC_LITERAL(1, 19, 12),
QT_MOC_LITERAL(2, 32, 0),
QT_MOC_LITERAL(3, 33, 9),
QT_MOC_LITERAL(4, 43, 5),
QT_MOC_LITERAL(5, 49, 10),
QT_MOC_LITERAL(6, 60, 3),
QT_MOC_LITERAL(7, 64, 18),
QT_MOC_LITERAL(8, 83, 11)
    },
    "QGeoMapRouteObject\0routeChanged\0\0"
    "QGeoRoute\0route\0penChanged\0pen\0"
    "detailLevelChanged\0detailLevel\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QGeoMapRouteObject[] = {

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
    QMetaType::Void, QMetaType::UInt,    8,

 // properties: name, type, flags
       4, 0x80000000 | 3, 0x0049510b,
       6, QMetaType::QPen, 0x00495103,
       8, QMetaType::UInt, 0x00495103,

 // properties: notify_signal_id
       0,
       1,
       2,

       0        // eod
};

void QGeoMapRouteObject::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QGeoMapRouteObject *_t = static_cast<QGeoMapRouteObject *>(_o);
        switch (_id) {
        case 0: _t->routeChanged((*reinterpret_cast< const QGeoRoute(*)>(_a[1]))); break;
        case 1: _t->penChanged((*reinterpret_cast< const QPen(*)>(_a[1]))); break;
        case 2: _t->detailLevelChanged((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QGeoMapRouteObject::*_t)(const QGeoRoute & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QGeoMapRouteObject::routeChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (QGeoMapRouteObject::*_t)(const QPen & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QGeoMapRouteObject::penChanged)) {
                *result = 1;
            }
        }
        {
            typedef void (QGeoMapRouteObject::*_t)(quint32 );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QGeoMapRouteObject::detailLevelChanged)) {
                *result = 2;
            }
        }
    }
}

const QMetaObject QGeoMapRouteObject::staticMetaObject = {
    { &QGeoMapObject::staticMetaObject, qt_meta_stringdata_QGeoMapRouteObject.data,
      qt_meta_data_QGeoMapRouteObject,  qt_static_metacall, 0, 0}
};


const QMetaObject *QGeoMapRouteObject::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QGeoMapRouteObject::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QGeoMapRouteObject.stringdata))
        return static_cast<void*>(const_cast< QGeoMapRouteObject*>(this));
    return QGeoMapObject::qt_metacast(_clname);
}

int QGeoMapRouteObject::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
        case 0: *reinterpret_cast< QGeoRoute*>(_v) = route(); break;
        case 1: *reinterpret_cast< QPen*>(_v) = pen(); break;
        case 2: *reinterpret_cast< quint32*>(_v) = detailLevel(); break;
        }
        _id -= 3;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setRoute(*reinterpret_cast< QGeoRoute*>(_v)); break;
        case 1: setPen(*reinterpret_cast< QPen*>(_v)); break;
        case 2: setDetailLevel(*reinterpret_cast< quint32*>(_v)); break;
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
void QGeoMapRouteObject::routeChanged(const QGeoRoute & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QGeoMapRouteObject::penChanged(const QPen & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QGeoMapRouteObject::detailLevelChanged(quint32 _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
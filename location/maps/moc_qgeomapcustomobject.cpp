/****************************************************************************
** Meta object code from reading C++ file 'qgeomapcustomobject.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qgeomapcustomobject.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgeomapcustomobject.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QGeoMapCustomObject_t {
    QByteArrayData data[8];
    char stringdata[105];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_QGeoMapCustomObject_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_QGeoMapCustomObject_t qt_meta_stringdata_QGeoMapCustomObject = {
    {
QT_MOC_LITERAL(0, 0, 19),
QT_MOC_LITERAL(1, 20, 13),
QT_MOC_LITERAL(2, 34, 0),
QT_MOC_LITERAL(3, 35, 19),
QT_MOC_LITERAL(4, 55, 14),
QT_MOC_LITERAL(5, 70, 12),
QT_MOC_LITERAL(6, 83, 13),
QT_MOC_LITERAL(7, 97, 6)
    },
    "QGeoMapCustomObject\0triggerUpdate\0\0"
    "graphicsItemChanged\0QGraphicsItem*\0"
    "graphicsItem\0offsetChanged\0offset\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QGeoMapCustomObject[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       2,   36, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x06,
       3,    1,   30,    2, 0x06,
       6,    1,   33,    2, 0x06,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::QPoint,    7,

 // properties: name, type, flags
       5, 0x80000000 | 4, 0x0049510b,
       7, QMetaType::QPoint, 0x00495103,

 // properties: notify_signal_id
       1,
       2,

       0        // eod
};

void QGeoMapCustomObject::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QGeoMapCustomObject *_t = static_cast<QGeoMapCustomObject *>(_o);
        switch (_id) {
        case 0: _t->triggerUpdate(); break;
        case 1: _t->graphicsItemChanged((*reinterpret_cast< QGraphicsItem*(*)>(_a[1]))); break;
        case 2: _t->offsetChanged((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGraphicsItem* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QGeoMapCustomObject::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QGeoMapCustomObject::triggerUpdate)) {
                *result = 0;
            }
        }
        {
            typedef void (QGeoMapCustomObject::*_t)(QGraphicsItem * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QGeoMapCustomObject::graphicsItemChanged)) {
                *result = 1;
            }
        }
        {
            typedef void (QGeoMapCustomObject::*_t)(const QPoint & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QGeoMapCustomObject::offsetChanged)) {
                *result = 2;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGraphicsItem* >(); break;
        }
    }

}

const QMetaObject QGeoMapCustomObject::staticMetaObject = {
    { &QGeoMapObject::staticMetaObject, qt_meta_stringdata_QGeoMapCustomObject.data,
      qt_meta_data_QGeoMapCustomObject,  qt_static_metacall, 0, 0}
};


const QMetaObject *QGeoMapCustomObject::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QGeoMapCustomObject::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QGeoMapCustomObject.stringdata))
        return static_cast<void*>(const_cast< QGeoMapCustomObject*>(this));
    return QGeoMapObject::qt_metacast(_clname);
}

int QGeoMapCustomObject::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QGraphicsItem**>(_v) = graphicsItem(); break;
        case 1: *reinterpret_cast< QPoint*>(_v) = offset(); break;
        }
        _id -= 2;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setGraphicsItem(*reinterpret_cast< QGraphicsItem**>(_v)); break;
        case 1: setOffset(*reinterpret_cast< QPoint*>(_v)); break;
        }
        _id -= 2;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QGeoMapCustomObject::triggerUpdate()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void QGeoMapCustomObject::graphicsItemChanged(QGraphicsItem * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QGeoMapCustomObject::offsetChanged(const QPoint & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE

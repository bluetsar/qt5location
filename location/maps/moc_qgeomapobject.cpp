/****************************************************************************
** Meta object code from reading C++ file 'qgeomapobject.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qgeomapobject.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgeomapobject.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QGeoMapObject_t {
    QByteArrayData data[19];
    char stringdata[263];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_QGeoMapObject_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_QGeoMapObject_t qt_meta_stringdata_QGeoMapObject = {
    {
QT_MOC_LITERAL(0, 0, 13),
QT_MOC_LITERAL(1, 14, 13),
QT_MOC_LITERAL(2, 28, 0),
QT_MOC_LITERAL(3, 29, 6),
QT_MOC_LITERAL(4, 36, 14),
QT_MOC_LITERAL(5, 51, 7),
QT_MOC_LITERAL(6, 59, 15),
QT_MOC_LITERAL(7, 75, 8),
QT_MOC_LITERAL(8, 84, 13),
QT_MOC_LITERAL(9, 98, 14),
QT_MOC_LITERAL(10, 113, 6),
QT_MOC_LITERAL(11, 120, 12),
QT_MOC_LITERAL(12, 133, 29),
QT_MOC_LITERAL(13, 163, 5),
QT_MOC_LITERAL(14, 169, 20),
QT_MOC_LITERAL(15, 190, 28),
QT_MOC_LITERAL(16, 219, 13),
QT_MOC_LITERAL(17, 233, 14),
QT_MOC_LITERAL(18, 248, 13)
    },
    "QGeoMapObject\0zValueChanged\0\0zValue\0"
    "visibleChanged\0visible\0selectedChanged\0"
    "selected\0originChanged\0QGeoCoordinate\0"
    "origin\0unitsChanged\0QGeoMapObject::CoordinateUnit\0"
    "units\0transformTypeChanged\0"
    "QGeoMapObject::TransformType\0transformType\0"
    "CoordinateUnit\0TransformType\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QGeoMapObject[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       6,   62, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06,
       4,    1,   47,    2, 0x06,
       6,    1,   50,    2, 0x06,
       8,    1,   53,    2, 0x06,
      11,    1,   56,    2, 0x06,
      14,    1,   59,    2, 0x06,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void, 0x80000000 | 15,   16,

 // properties: name, type, flags
       3, QMetaType::Int, 0x00495103,
       5, QMetaType::Bool, 0x00495103,
       7, QMetaType::Bool, 0x00495103,
      10, 0x80000000 | 9, 0x00495009,
      13, 0x80000000 | 17, 0x00495009,
      16, 0x80000000 | 18, 0x00495009,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       4,
       5,

       0        // eod
};

void QGeoMapObject::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QGeoMapObject *_t = static_cast<QGeoMapObject *>(_o);
        switch (_id) {
        case 0: _t->zValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->visibleChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->selectedChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->originChanged((*reinterpret_cast< QGeoCoordinate(*)>(_a[1]))); break;
        case 4: _t->unitsChanged((*reinterpret_cast< QGeoMapObject::CoordinateUnit(*)>(_a[1]))); break;
        case 5: _t->transformTypeChanged((*reinterpret_cast< QGeoMapObject::TransformType(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QGeoMapObject::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QGeoMapObject::zValueChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (QGeoMapObject::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QGeoMapObject::visibleChanged)) {
                *result = 1;
            }
        }
        {
            typedef void (QGeoMapObject::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QGeoMapObject::selectedChanged)) {
                *result = 2;
            }
        }
        {
            typedef void (QGeoMapObject::*_t)(QGeoCoordinate );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QGeoMapObject::originChanged)) {
                *result = 3;
            }
        }
        {
            typedef void (QGeoMapObject::*_t)(QGeoMapObject::CoordinateUnit );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QGeoMapObject::unitsChanged)) {
                *result = 4;
            }
        }
        {
            typedef void (QGeoMapObject::*_t)(QGeoMapObject::TransformType );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QGeoMapObject::transformTypeChanged)) {
                *result = 5;
            }
        }
    }
}

const QMetaObject QGeoMapObject::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QGeoMapObject.data,
      qt_meta_data_QGeoMapObject,  qt_static_metacall, 0, 0}
};


const QMetaObject *QGeoMapObject::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QGeoMapObject::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QGeoMapObject.stringdata))
        return static_cast<void*>(const_cast< QGeoMapObject*>(this));
    return QObject::qt_metacast(_clname);
}

int QGeoMapObject::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = zValue(); break;
        case 1: *reinterpret_cast< bool*>(_v) = isVisible(); break;
        case 2: *reinterpret_cast< bool*>(_v) = isSelected(); break;
        case 3: *reinterpret_cast< QGeoCoordinate*>(_v) = origin(); break;
        case 4: *reinterpret_cast< CoordinateUnit*>(_v) = units(); break;
        case 5: *reinterpret_cast< TransformType*>(_v) = transformType(); break;
        }
        _id -= 6;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setZValue(*reinterpret_cast< int*>(_v)); break;
        case 1: setVisible(*reinterpret_cast< bool*>(_v)); break;
        case 2: setSelected(*reinterpret_cast< bool*>(_v)); break;
        }
        _id -= 6;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 6;
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QGeoMapObject::zValueChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QGeoMapObject::visibleChanged(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QGeoMapObject::selectedChanged(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QGeoMapObject::originChanged(QGeoCoordinate _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QGeoMapObject::unitsChanged(QGeoMapObject::CoordinateUnit _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QGeoMapObject::transformTypeChanged(QGeoMapObject::TransformType _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_END_MOC_NAMESPACE

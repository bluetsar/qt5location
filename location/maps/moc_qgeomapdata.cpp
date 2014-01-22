/****************************************************************************
** Meta object code from reading C++ file 'qgeomapdata.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qgeomapdata.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgeomapdata.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QGeoMapData_t {
    QByteArrayData data[26];
    char stringdata[360];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_QGeoMapData_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_QGeoMapData_t qt_meta_stringdata_QGeoMapData = {
    {
QT_MOC_LITERAL(0, 0, 11),
QT_MOC_LITERAL(1, 12, 17),
QT_MOC_LITERAL(2, 30, 0),
QT_MOC_LITERAL(3, 31, 10),
QT_MOC_LITERAL(4, 42, 16),
QT_MOC_LITERAL(5, 59, 9),
QT_MOC_LITERAL(6, 69, 13),
QT_MOC_LITERAL(7, 83, 14),
QT_MOC_LITERAL(8, 98, 10),
QT_MOC_LITERAL(9, 109, 14),
QT_MOC_LITERAL(10, 124, 24),
QT_MOC_LITERAL(11, 149, 7),
QT_MOC_LITERAL(12, 157, 23),
QT_MOC_LITERAL(13, 181, 33),
QT_MOC_LITERAL(14, 215, 16),
QT_MOC_LITERAL(15, 232, 16),
QT_MOC_LITERAL(16, 249, 6),
QT_MOC_LITERAL(17, 256, 14),
QT_MOC_LITERAL(18, 271, 7),
QT_MOC_LITERAL(19, 279, 11),
QT_MOC_LITERAL(20, 291, 4),
QT_MOC_LITERAL(21, 296, 6),
QT_MOC_LITERAL(22, 303, 11),
QT_MOC_LITERAL(23, 315, 11),
QT_MOC_LITERAL(24, 327, 15),
QT_MOC_LITERAL(25, 343, 15)
    },
    "QGeoMapData\0windowSizeChanged\0\0"
    "windowSize\0zoomLevelChanged\0zoomLevel\0"
    "centerChanged\0QGeoCoordinate\0coordinate\0"
    "mapTypeChanged\0QGraphicsGeoMap::MapType\0"
    "mapType\0connectivityModeChanged\0"
    "QGraphicsGeoMap::ConnectivityMode\0"
    "connectivityMode\0updateMapDisplay\0"
    "target\0bearingChanged\0bearing\0tiltChanged\0"
    "tilt\0center\0minimumTilt\0maximumTilt\0"
    "supportsTilting\0supportsBearing\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QGeoMapData[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
      11,   84, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       9,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x06,
       4,    1,   62,    2, 0x06,
       6,    1,   65,    2, 0x06,
       9,    1,   68,    2, 0x06,
      12,    1,   71,    2, 0x06,
      15,    1,   74,    2, 0x06,
      15,    0,   77,    2, 0x26,
      17,    1,   78,    2, 0x06,
      19,    1,   81,    2, 0x06,

 // signals: parameters
    QMetaType::Void, QMetaType::QSizeF,    3,
    QMetaType::Void, QMetaType::QReal,    5,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void, QMetaType::QRectF,   16,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QReal,   18,
    QMetaType::Void, QMetaType::QReal,   20,

 // properties: name, type, flags
       3, QMetaType::QSizeF, 0x00495103,
       5, QMetaType::QReal, 0x00495103,
      11, 0x80000000 | 10, 0x0049510b,
      14, 0x80000000 | 13, 0x0049510b,
      21, 0x80000000 | 7, 0x0049510b,
      20, QMetaType::QReal, 0x00495103,
      22, QMetaType::QReal, 0x00095401,
      23, QMetaType::QReal, 0x00095401,
      24, QMetaType::Bool, 0x00095401,
      18, QMetaType::QReal, 0x00495103,
      25, QMetaType::Bool, 0x00095401,

 // properties: notify_signal_id
       0,
       1,
       3,
       4,
       2,
       8,
       0,
       0,
       0,
       7,
       0,

       0        // eod
};

void QGeoMapData::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QGeoMapData *_t = static_cast<QGeoMapData *>(_o);
        switch (_id) {
        case 0: _t->windowSizeChanged((*reinterpret_cast< const QSizeF(*)>(_a[1]))); break;
        case 1: _t->zoomLevelChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 2: _t->centerChanged((*reinterpret_cast< const QGeoCoordinate(*)>(_a[1]))); break;
        case 3: _t->mapTypeChanged((*reinterpret_cast< QGraphicsGeoMap::MapType(*)>(_a[1]))); break;
        case 4: _t->connectivityModeChanged((*reinterpret_cast< QGraphicsGeoMap::ConnectivityMode(*)>(_a[1]))); break;
        case 5: _t->updateMapDisplay((*reinterpret_cast< const QRectF(*)>(_a[1]))); break;
        case 6: _t->updateMapDisplay(); break;
        case 7: _t->bearingChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 8: _t->tiltChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QGeoMapData::*_t)(const QSizeF & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QGeoMapData::windowSizeChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (QGeoMapData::*_t)(qreal );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QGeoMapData::zoomLevelChanged)) {
                *result = 1;
            }
        }
        {
            typedef void (QGeoMapData::*_t)(const QGeoCoordinate & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QGeoMapData::centerChanged)) {
                *result = 2;
            }
        }
        {
            typedef void (QGeoMapData::*_t)(QGraphicsGeoMap::MapType );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QGeoMapData::mapTypeChanged)) {
                *result = 3;
            }
        }
        {
            typedef void (QGeoMapData::*_t)(QGraphicsGeoMap::ConnectivityMode );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QGeoMapData::connectivityModeChanged)) {
                *result = 4;
            }
        }
        {
            typedef void (QGeoMapData::*_t)(const QRectF & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QGeoMapData::updateMapDisplay)) {
                *result = 5;
            }
        }
        {
            typedef void (QGeoMapData::*_t)(qreal );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QGeoMapData::bearingChanged)) {
                *result = 7;
            }
        }
        {
            typedef void (QGeoMapData::*_t)(qreal );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QGeoMapData::tiltChanged)) {
                *result = 8;
            }
        }
    }
}

static const QMetaObject *qt_meta_extradata_QGeoMapData[] = {
        &QGraphicsGeoMap::staticMetaObject,
    0
};

const QMetaObject QGeoMapData::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QGeoMapData.data,
      qt_meta_data_QGeoMapData,  qt_static_metacall, qt_meta_extradata_QGeoMapData, 0}
};


const QMetaObject *QGeoMapData::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QGeoMapData::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QGeoMapData.stringdata))
        return static_cast<void*>(const_cast< QGeoMapData*>(this));
    return QObject::qt_metacast(_clname);
}

int QGeoMapData::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QSizeF*>(_v) = windowSize(); break;
        case 1: *reinterpret_cast< qreal*>(_v) = zoomLevel(); break;
        case 2: *reinterpret_cast< QGraphicsGeoMap::MapType*>(_v) = mapType(); break;
        case 3: *reinterpret_cast< QGraphicsGeoMap::ConnectivityMode*>(_v) = connectivityMode(); break;
        case 4: *reinterpret_cast< QGeoCoordinate*>(_v) = center(); break;
        case 5: *reinterpret_cast< qreal*>(_v) = tilt(); break;
        case 6: *reinterpret_cast< qreal*>(_v) = minimumTilt(); break;
        case 7: *reinterpret_cast< qreal*>(_v) = maximumTilt(); break;
        case 8: *reinterpret_cast< bool*>(_v) = supportsTilting(); break;
        case 9: *reinterpret_cast< qreal*>(_v) = bearing(); break;
        case 10: *reinterpret_cast< bool*>(_v) = supportsBearing(); break;
        }
        _id -= 11;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setWindowSize(*reinterpret_cast< QSizeF*>(_v)); break;
        case 1: setZoomLevel(*reinterpret_cast< qreal*>(_v)); break;
        case 2: setMapType(*reinterpret_cast< QGraphicsGeoMap::MapType*>(_v)); break;
        case 3: setConnectivityMode(*reinterpret_cast< QGraphicsGeoMap::ConnectivityMode*>(_v)); break;
        case 4: setCenter(*reinterpret_cast< QGeoCoordinate*>(_v)); break;
        case 5: setTilt(*reinterpret_cast< qreal*>(_v)); break;
        case 9: setBearing(*reinterpret_cast< qreal*>(_v)); break;
        }
        _id -= 11;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 11;
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QGeoMapData::windowSizeChanged(const QSizeF & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QGeoMapData::zoomLevelChanged(qreal _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QGeoMapData::centerChanged(const QGeoCoordinate & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QGeoMapData::mapTypeChanged(QGraphicsGeoMap::MapType _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QGeoMapData::connectivityModeChanged(QGraphicsGeoMap::ConnectivityMode _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QGeoMapData::updateMapDisplay(const QRectF & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 7
void QGeoMapData::bearingChanged(qreal _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void QGeoMapData::tiltChanged(qreal _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}
QT_END_MOC_NAMESPACE

/****************************************************************************
** Meta object code from reading C++ file 'qgeoroutingmanager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qgeoroutingmanager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgeoroutingmanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QGeoRoutingManager_t {
    QByteArrayData data[8];
    char stringdata[92];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_QGeoRoutingManager_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_QGeoRoutingManager_t qt_meta_stringdata_QGeoRoutingManager = {
    {
QT_MOC_LITERAL(0, 0, 18),
QT_MOC_LITERAL(1, 19, 8),
QT_MOC_LITERAL(2, 28, 0),
QT_MOC_LITERAL(3, 29, 15),
QT_MOC_LITERAL(4, 45, 5),
QT_MOC_LITERAL(5, 51, 5),
QT_MOC_LITERAL(6, 57, 21),
QT_MOC_LITERAL(7, 79, 11)
    },
    "QGeoRoutingManager\0finished\0\0"
    "QGeoRouteReply*\0reply\0error\0"
    "QGeoRouteReply::Error\0errorString\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QGeoRoutingManager[] = {

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
       1,    1,   29,    2, 0x06,
       5,    3,   32,    2, 0x06,
       5,    2,   39,    2, 0x26,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 6, QMetaType::QString,    4,    5,    7,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 6,    4,    5,

       0        // eod
};

void QGeoRoutingManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QGeoRoutingManager *_t = static_cast<QGeoRoutingManager *>(_o);
        switch (_id) {
        case 0: _t->finished((*reinterpret_cast< QGeoRouteReply*(*)>(_a[1]))); break;
        case 1: _t->error((*reinterpret_cast< QGeoRouteReply*(*)>(_a[1])),(*reinterpret_cast< QGeoRouteReply::Error(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 2: _t->error((*reinterpret_cast< QGeoRouteReply*(*)>(_a[1])),(*reinterpret_cast< QGeoRouteReply::Error(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGeoRouteReply* >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGeoRouteReply* >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGeoRouteReply* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QGeoRoutingManager::*_t)(QGeoRouteReply * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QGeoRoutingManager::finished)) {
                *result = 0;
            }
        }
        {
            typedef void (QGeoRoutingManager::*_t)(QGeoRouteReply * , QGeoRouteReply::Error , QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QGeoRoutingManager::error)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject QGeoRoutingManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QGeoRoutingManager.data,
      qt_meta_data_QGeoRoutingManager,  qt_static_metacall, 0, 0}
};


const QMetaObject *QGeoRoutingManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QGeoRoutingManager::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QGeoRoutingManager.stringdata))
        return static_cast<void*>(const_cast< QGeoRoutingManager*>(this));
    return QObject::qt_metacast(_clname);
}

int QGeoRoutingManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void QGeoRoutingManager::finished(QGeoRouteReply * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QGeoRoutingManager::error(QGeoRouteReply * _t1, QGeoRouteReply::Error _t2, QString _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
/****************************************************************************
** Meta object code from reading C++ file 'qgeotiledmapdata.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "tiled/qgeotiledmapdata.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgeotiledmapdata.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QGeoTiledMapData_t {
    QByteArrayData data[11];
    char stringdata[140];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_QGeoTiledMapData_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_QGeoTiledMapData_t qt_meta_stringdata_QGeoTiledMapData = {
    {
QT_MOC_LITERAL(0, 0, 16),
QT_MOC_LITERAL(1, 17, 15),
QT_MOC_LITERAL(2, 33, 0),
QT_MOC_LITERAL(3, 34, 12),
QT_MOC_LITERAL(4, 47, 13),
QT_MOC_LITERAL(5, 61, 18),
QT_MOC_LITERAL(6, 80, 5),
QT_MOC_LITERAL(7, 86, 9),
QT_MOC_LITERAL(8, 96, 24),
QT_MOC_LITERAL(9, 121, 5),
QT_MOC_LITERAL(10, 127, 11)
    },
    "QGeoTiledMapData\0processRequests\0\0"
    "tileFinished\0replyFinished\0"
    "QGeoTiledMapReply*\0reply\0tileError\0"
    "QGeoTiledMapReply::Error\0error\0"
    "errorString\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QGeoTiledMapData[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x08,
       3,    0,   35,    2, 0x08,
       4,    1,   36,    2, 0x08,
       7,    2,   39,    2, 0x08,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 8, QMetaType::QString,    9,   10,

       0        // eod
};

void QGeoTiledMapData::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QGeoTiledMapData *_t = static_cast<QGeoTiledMapData *>(_o);
        switch (_id) {
        case 0: _t->processRequests(); break;
        case 1: _t->tileFinished(); break;
        case 2: _t->replyFinished((*reinterpret_cast< QGeoTiledMapReply*(*)>(_a[1]))); break;
        case 3: _t->tileError((*reinterpret_cast< QGeoTiledMapReply::Error(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGeoTiledMapReply* >(); break;
            }
            break;
        }
    }
}

const QMetaObject QGeoTiledMapData::staticMetaObject = {
    { &QGeoMapData::staticMetaObject, qt_meta_stringdata_QGeoTiledMapData.data,
      qt_meta_data_QGeoTiledMapData,  qt_static_metacall, 0, 0}
};


const QMetaObject *QGeoTiledMapData::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QGeoTiledMapData::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QGeoTiledMapData.stringdata))
        return static_cast<void*>(const_cast< QGeoTiledMapData*>(this));
    return QGeoMapData::qt_metacast(_clname);
}

int QGeoTiledMapData::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGeoMapData::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE

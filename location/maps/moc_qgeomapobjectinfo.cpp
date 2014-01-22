/****************************************************************************
** Meta object code from reading C++ file 'qgeomapobjectinfo.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qgeomapobjectinfo.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgeomapobjectinfo.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QGeoMapObjectInfo_t {
    QByteArrayData data[23];
    char stringdata[319];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_QGeoMapObjectInfo_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_QGeoMapObjectInfo_t qt_meta_stringdata_QGeoMapObjectInfo = {
    {
QT_MOC_LITERAL(0, 0, 17),
QT_MOC_LITERAL(1, 18, 17),
QT_MOC_LITERAL(2, 36, 0),
QT_MOC_LITERAL(3, 37, 10),
QT_MOC_LITERAL(4, 48, 16),
QT_MOC_LITERAL(5, 65, 9),
QT_MOC_LITERAL(6, 75, 13),
QT_MOC_LITERAL(7, 89, 14),
QT_MOC_LITERAL(8, 104, 10),
QT_MOC_LITERAL(9, 115, 13),
QT_MOC_LITERAL(10, 129, 6),
QT_MOC_LITERAL(11, 136, 14),
QT_MOC_LITERAL(12, 151, 7),
QT_MOC_LITERAL(13, 159, 15),
QT_MOC_LITERAL(14, 175, 8),
QT_MOC_LITERAL(15, 184, 13),
QT_MOC_LITERAL(16, 198, 6),
QT_MOC_LITERAL(17, 205, 12),
QT_MOC_LITERAL(18, 218, 29),
QT_MOC_LITERAL(19, 248, 5),
QT_MOC_LITERAL(20, 254, 20),
QT_MOC_LITERAL(21, 275, 28),
QT_MOC_LITERAL(22, 304, 13)
    },
    "QGeoMapObjectInfo\0windowSizeChanged\0"
    "\0windowSize\0zoomLevelChanged\0zoomLevel\0"
    "centerChanged\0QGeoCoordinate\0coordinate\0"
    "zValueChanged\0zValue\0visibleChanged\0"
    "visible\0selectedChanged\0selected\0"
    "originChanged\0origin\0unitsChanged\0"
    "QGeoMapObject::CoordinateUnit\0units\0"
    "transformTypeChanged\0QGeoMapObject::TransformType\0"
    "transformType\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QGeoMapObjectInfo[] = {

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
       4,    1,   62,    2, 0x0a,
       6,    1,   65,    2, 0x0a,
       9,    1,   68,    2, 0x0a,
      11,    1,   71,    2, 0x0a,
      13,    1,   74,    2, 0x0a,
      15,    1,   77,    2, 0x0a,
      17,    1,   80,    2, 0x0a,
      20,    1,   83,    2, 0x0a,

 // slots: parameters
    QMetaType::Void, QMetaType::QSizeF,    3,
    QMetaType::Void, QMetaType::QReal,    5,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::Bool,   12,
    QMetaType::Void, QMetaType::Bool,   14,
    QMetaType::Void, 0x80000000 | 7,   16,
    QMetaType::Void, 0x80000000 | 18,   19,
    QMetaType::Void, 0x80000000 | 21,   22,

       0        // eod
};

void QGeoMapObjectInfo::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QGeoMapObjectInfo *_t = static_cast<QGeoMapObjectInfo *>(_o);
        switch (_id) {
        case 0: _t->windowSizeChanged((*reinterpret_cast< const QSizeF(*)>(_a[1]))); break;
        case 1: _t->zoomLevelChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 2: _t->centerChanged((*reinterpret_cast< const QGeoCoordinate(*)>(_a[1]))); break;
        case 3: _t->zValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->visibleChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->selectedChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->originChanged((*reinterpret_cast< const QGeoCoordinate(*)>(_a[1]))); break;
        case 7: _t->unitsChanged((*reinterpret_cast< QGeoMapObject::CoordinateUnit(*)>(_a[1]))); break;
        case 8: _t->transformTypeChanged((*reinterpret_cast< QGeoMapObject::TransformType(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject QGeoMapObjectInfo::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QGeoMapObjectInfo.data,
      qt_meta_data_QGeoMapObjectInfo,  qt_static_metacall, 0, 0}
};


const QMetaObject *QGeoMapObjectInfo::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QGeoMapObjectInfo::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QGeoMapObjectInfo.stringdata))
        return static_cast<void*>(const_cast< QGeoMapObjectInfo*>(this));
    return QObject::qt_metacast(_clname);
}

int QGeoMapObjectInfo::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
    return _id;
}
QT_END_MOC_NAMESPACE

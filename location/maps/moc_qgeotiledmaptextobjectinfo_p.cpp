/****************************************************************************
** Meta object code from reading C++ file 'qgeotiledmaptextobjectinfo_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "tiled/qgeotiledmaptextobjectinfo_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgeotiledmaptextobjectinfo_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QGeoTiledMapTextObjectInfo_t {
    QByteArrayData data[15];
    char stringdata[159];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_QGeoTiledMapTextObjectInfo_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_QGeoTiledMapTextObjectInfo_t qt_meta_stringdata_QGeoTiledMapTextObjectInfo = {
    {
QT_MOC_LITERAL(0, 0, 26),
QT_MOC_LITERAL(1, 27, 11),
QT_MOC_LITERAL(2, 39, 0),
QT_MOC_LITERAL(3, 40, 4),
QT_MOC_LITERAL(4, 45, 11),
QT_MOC_LITERAL(5, 57, 4),
QT_MOC_LITERAL(6, 62, 10),
QT_MOC_LITERAL(7, 73, 3),
QT_MOC_LITERAL(8, 77, 12),
QT_MOC_LITERAL(9, 90, 5),
QT_MOC_LITERAL(10, 96, 13),
QT_MOC_LITERAL(11, 110, 6),
QT_MOC_LITERAL(12, 117, 16),
QT_MOC_LITERAL(13, 134, 13),
QT_MOC_LITERAL(14, 148, 9)
    },
    "QGeoTiledMapTextObjectInfo\0textChanged\0"
    "\0text\0fontChanged\0font\0penChanged\0pen\0"
    "brushChanged\0brush\0offsetChanged\0"
    "offset\0alignmentChanged\0Qt::Alignment\0"
    "alignment\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QGeoTiledMapTextObjectInfo[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x0a,
       4,    1,   47,    2, 0x0a,
       6,    1,   50,    2, 0x0a,
       8,    1,   53,    2, 0x0a,
      10,    1,   56,    2, 0x0a,
      12,    1,   59,    2, 0x0a,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QFont,    5,
    QMetaType::Void, QMetaType::QPen,    7,
    QMetaType::Void, QMetaType::QBrush,    9,
    QMetaType::Void, QMetaType::QPoint,   11,
    QMetaType::Void, 0x80000000 | 13,   14,

       0        // eod
};

void QGeoTiledMapTextObjectInfo::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QGeoTiledMapTextObjectInfo *_t = static_cast<QGeoTiledMapTextObjectInfo *>(_o);
        switch (_id) {
        case 0: _t->textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->fontChanged((*reinterpret_cast< const QFont(*)>(_a[1]))); break;
        case 2: _t->penChanged((*reinterpret_cast< const QPen(*)>(_a[1]))); break;
        case 3: _t->brushChanged((*reinterpret_cast< const QBrush(*)>(_a[1]))); break;
        case 4: _t->offsetChanged((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 5: _t->alignmentChanged((*reinterpret_cast< Qt::Alignment(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject QGeoTiledMapTextObjectInfo::staticMetaObject = {
    { &QGeoTiledMapObjectInfo::staticMetaObject, qt_meta_stringdata_QGeoTiledMapTextObjectInfo.data,
      qt_meta_data_QGeoTiledMapTextObjectInfo,  qt_static_metacall, 0, 0}
};


const QMetaObject *QGeoTiledMapTextObjectInfo::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QGeoTiledMapTextObjectInfo::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QGeoTiledMapTextObjectInfo.stringdata))
        return static_cast<void*>(const_cast< QGeoTiledMapTextObjectInfo*>(this));
    return QGeoTiledMapObjectInfo::qt_metacast(_clname);
}

int QGeoTiledMapTextObjectInfo::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGeoTiledMapObjectInfo::qt_metacall(_c, _id, _a);
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
    return _id;
}
QT_END_MOC_NAMESPACE

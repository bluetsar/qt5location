/****************************************************************************
** Meta object code from reading C++ file 'qgeomaptextobject.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qgeomaptextobject.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgeomaptextobject.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QGeoMapTextObject_t {
    QByteArrayData data[18];
    char stringdata[194];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_QGeoMapTextObject_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_QGeoMapTextObject_t qt_meta_stringdata_QGeoMapTextObject = {
    {
QT_MOC_LITERAL(0, 0, 17),
QT_MOC_LITERAL(1, 18, 17),
QT_MOC_LITERAL(2, 36, 0),
QT_MOC_LITERAL(3, 37, 14),
QT_MOC_LITERAL(4, 52, 10),
QT_MOC_LITERAL(5, 63, 11),
QT_MOC_LITERAL(6, 75, 4),
QT_MOC_LITERAL(7, 80, 11),
QT_MOC_LITERAL(8, 92, 4),
QT_MOC_LITERAL(9, 97, 10),
QT_MOC_LITERAL(10, 108, 3),
QT_MOC_LITERAL(11, 112, 12),
QT_MOC_LITERAL(12, 125, 5),
QT_MOC_LITERAL(13, 131, 13),
QT_MOC_LITERAL(14, 145, 6),
QT_MOC_LITERAL(15, 152, 16),
QT_MOC_LITERAL(16, 169, 13),
QT_MOC_LITERAL(17, 183, 9)
    },
    "QGeoMapTextObject\0coordinateChanged\0"
    "\0QGeoCoordinate\0coordinate\0textChanged\0"
    "text\0fontChanged\0font\0penChanged\0pen\0"
    "brushChanged\0brush\0offsetChanged\0"
    "offset\0alignmentChanged\0Qt::Alignment\0"
    "alignment\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QGeoMapTextObject[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       7,   70, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x06,
       5,    1,   52,    2, 0x06,
       7,    1,   55,    2, 0x06,
       9,    1,   58,    2, 0x06,
      11,    1,   61,    2, 0x06,
      13,    1,   64,    2, 0x06,
      15,    1,   67,    2, 0x06,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QFont,    8,
    QMetaType::Void, QMetaType::QPen,   10,
    QMetaType::Void, QMetaType::QBrush,   12,
    QMetaType::Void, QMetaType::QPoint,   14,
    QMetaType::Void, 0x80000000 | 16,   17,

 // properties: name, type, flags
       4, 0x80000000 | 3, 0x0049510b,
       6, QMetaType::QString, 0x00495103,
       8, QMetaType::QFont, 0x00495103,
      10, QMetaType::QPen, 0x00495103,
      12, QMetaType::QBrush, 0x00495103,
      14, QMetaType::QPoint, 0x00495103,
      17, 0x80000000 | 16, 0x0049510b,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       4,
       5,
       6,

       0        // eod
};

void QGeoMapTextObject::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QGeoMapTextObject *_t = static_cast<QGeoMapTextObject *>(_o);
        switch (_id) {
        case 0: _t->coordinateChanged((*reinterpret_cast< const QGeoCoordinate(*)>(_a[1]))); break;
        case 1: _t->textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->fontChanged((*reinterpret_cast< const QFont(*)>(_a[1]))); break;
        case 3: _t->penChanged((*reinterpret_cast< const QPen(*)>(_a[1]))); break;
        case 4: _t->brushChanged((*reinterpret_cast< const QBrush(*)>(_a[1]))); break;
        case 5: _t->offsetChanged((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 6: _t->alignmentChanged((*reinterpret_cast< Qt::Alignment(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGeoCoordinate >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QGeoMapTextObject::*_t)(const QGeoCoordinate & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QGeoMapTextObject::coordinateChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (QGeoMapTextObject::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QGeoMapTextObject::textChanged)) {
                *result = 1;
            }
        }
        {
            typedef void (QGeoMapTextObject::*_t)(const QFont & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QGeoMapTextObject::fontChanged)) {
                *result = 2;
            }
        }
        {
            typedef void (QGeoMapTextObject::*_t)(const QPen & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QGeoMapTextObject::penChanged)) {
                *result = 3;
            }
        }
        {
            typedef void (QGeoMapTextObject::*_t)(const QBrush & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QGeoMapTextObject::brushChanged)) {
                *result = 4;
            }
        }
        {
            typedef void (QGeoMapTextObject::*_t)(const QPoint & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QGeoMapTextObject::offsetChanged)) {
                *result = 5;
            }
        }
        {
            typedef void (QGeoMapTextObject::*_t)(Qt::Alignment );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QGeoMapTextObject::alignmentChanged)) {
                *result = 6;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGeoCoordinate >(); break;
        }
    }

}

const QMetaObject QGeoMapTextObject::staticMetaObject = {
    { &QGeoMapObject::staticMetaObject, qt_meta_stringdata_QGeoMapTextObject.data,
      qt_meta_data_QGeoMapTextObject,  qt_static_metacall, 0, 0}
};


const QMetaObject *QGeoMapTextObject::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QGeoMapTextObject::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QGeoMapTextObject.stringdata))
        return static_cast<void*>(const_cast< QGeoMapTextObject*>(this));
    return QGeoMapObject::qt_metacast(_clname);
}

int QGeoMapTextObject::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGeoMapObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QGeoCoordinate*>(_v) = coordinate(); break;
        case 1: *reinterpret_cast< QString*>(_v) = text(); break;
        case 2: *reinterpret_cast< QFont*>(_v) = font(); break;
        case 3: *reinterpret_cast< QPen*>(_v) = pen(); break;
        case 4: *reinterpret_cast< QBrush*>(_v) = brush(); break;
        case 5: *reinterpret_cast< QPoint*>(_v) = offset(); break;
        case 6: *reinterpret_cast< Qt::Alignment*>(_v) = alignment(); break;
        }
        _id -= 7;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setCoordinate(*reinterpret_cast< QGeoCoordinate*>(_v)); break;
        case 1: setText(*reinterpret_cast< QString*>(_v)); break;
        case 2: setFont(*reinterpret_cast< QFont*>(_v)); break;
        case 3: setPen(*reinterpret_cast< QPen*>(_v)); break;
        case 4: setBrush(*reinterpret_cast< QBrush*>(_v)); break;
        case 5: setOffset(*reinterpret_cast< QPoint*>(_v)); break;
        case 6: setAlignment(*reinterpret_cast< Qt::Alignment*>(_v)); break;
        }
        _id -= 7;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 7;
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QGeoMapTextObject::coordinateChanged(const QGeoCoordinate & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QGeoMapTextObject::textChanged(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QGeoMapTextObject::fontChanged(const QFont & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QGeoMapTextObject::penChanged(const QPen & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QGeoMapTextObject::brushChanged(const QBrush & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QGeoMapTextObject::offsetChanged(const QPoint & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void QGeoMapTextObject::alignmentChanged(Qt::Alignment _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}
QT_END_MOC_NAMESPACE

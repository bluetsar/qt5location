/****************************************************************************
** Meta object code from reading C++ file 'qlandmarkabstractrequest.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../landmarks/qlandmarkabstractrequest.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qlandmarkabstractrequest.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QLandmarkAbstractRequest_t {
    QByteArrayData data[10];
    char stringdata[133];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_QLandmarkAbstractRequest_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_QLandmarkAbstractRequest_t qt_meta_stringdata_QLandmarkAbstractRequest = {
    {
QT_MOC_LITERAL(0, 0, 24),
QT_MOC_LITERAL(1, 25, 16),
QT_MOC_LITERAL(2, 42, 0),
QT_MOC_LITERAL(3, 43, 12),
QT_MOC_LITERAL(4, 56, 31),
QT_MOC_LITERAL(5, 88, 8),
QT_MOC_LITERAL(6, 97, 5),
QT_MOC_LITERAL(7, 103, 6),
QT_MOC_LITERAL(8, 110, 15),
QT_MOC_LITERAL(9, 126, 5)
    },
    "QLandmarkAbstractRequest\0resultsAvailable\0"
    "\0stateChanged\0QLandmarkAbstractRequest::State\0"
    "newState\0start\0cancel\0waitForFinished\0"
    "msecs\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QLandmarkAbstractRequest[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06,
       3,    1,   45,    2, 0x06,

 // slots: name, argc, parameters, tag, flags
       6,    0,   48,    2, 0x0a,
       7,    0,   49,    2, 0x0a,
       8,    1,   50,    2, 0x0a,
       8,    0,   53,    2, 0x2a,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,

 // slots: parameters
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Bool, QMetaType::Int,    9,
    QMetaType::Bool,

       0        // eod
};

void QLandmarkAbstractRequest::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QLandmarkAbstractRequest *_t = static_cast<QLandmarkAbstractRequest *>(_o);
        switch (_id) {
        case 0: _t->resultsAvailable(); break;
        case 1: _t->stateChanged((*reinterpret_cast< QLandmarkAbstractRequest::State(*)>(_a[1]))); break;
        case 2: { bool _r = _t->start();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 3: { bool _r = _t->cancel();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 4: { bool _r = _t->waitForFinished((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 5: { bool _r = _t->waitForFinished();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QLandmarkAbstractRequest::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QLandmarkAbstractRequest::resultsAvailable)) {
                *result = 0;
            }
        }
        {
            typedef void (QLandmarkAbstractRequest::*_t)(QLandmarkAbstractRequest::State );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QLandmarkAbstractRequest::stateChanged)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject QLandmarkAbstractRequest::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QLandmarkAbstractRequest.data,
      qt_meta_data_QLandmarkAbstractRequest,  qt_static_metacall, 0, 0}
};


const QMetaObject *QLandmarkAbstractRequest::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QLandmarkAbstractRequest::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QLandmarkAbstractRequest.stringdata))
        return static_cast<void*>(const_cast< QLandmarkAbstractRequest*>(this));
    return QObject::qt_metacast(_clname);
}

int QLandmarkAbstractRequest::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
    return _id;
}

// SIGNAL 0
void QLandmarkAbstractRequest::resultsAvailable()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void QLandmarkAbstractRequest::stateChanged(QLandmarkAbstractRequest::State _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE

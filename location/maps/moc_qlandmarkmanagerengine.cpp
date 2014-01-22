/****************************************************************************
** Meta object code from reading C++ file 'qlandmarkmanagerengine.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../landmarks/qlandmarkmanagerengine.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qlandmarkmanagerengine.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QLandmarkManagerEngine_t {
    QByteArrayData data[13];
    char stringdata[208];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_QLandmarkManagerEngine_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_QLandmarkManagerEngine_t qt_meta_stringdata_QLandmarkManagerEngine = {
    {
QT_MOC_LITERAL(0, 0, 22),
QT_MOC_LITERAL(1, 23, 11),
QT_MOC_LITERAL(2, 35, 0),
QT_MOC_LITERAL(3, 36, 14),
QT_MOC_LITERAL(4, 51, 18),
QT_MOC_LITERAL(5, 70, 11),
QT_MOC_LITERAL(6, 82, 16),
QT_MOC_LITERAL(7, 99, 16),
QT_MOC_LITERAL(8, 116, 15),
QT_MOC_LITERAL(9, 132, 26),
QT_MOC_LITERAL(10, 159, 11),
QT_MOC_LITERAL(11, 171, 17),
QT_MOC_LITERAL(12, 189, 17)
    },
    "QLandmarkManagerEngine\0dataChanged\0\0"
    "landmarksAdded\0QList<QLandmarkId>\0"
    "landmarkIds\0landmarksChanged\0"
    "landmarksRemoved\0categoriesAdded\0"
    "QList<QLandmarkCategoryId>\0categoryIds\0"
    "categoriesChanged\0categoriesRemoved\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QLandmarkManagerEngine[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06,
       3,    1,   50,    2, 0x06,
       6,    1,   53,    2, 0x06,
       7,    1,   56,    2, 0x06,
       8,    1,   59,    2, 0x06,
      11,    1,   62,    2, 0x06,
      12,    1,   65,    2, 0x06,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, 0x80000000 | 9,   10,

       0        // eod
};

void QLandmarkManagerEngine::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QLandmarkManagerEngine *_t = static_cast<QLandmarkManagerEngine *>(_o);
        switch (_id) {
        case 0: _t->dataChanged(); break;
        case 1: _t->landmarksAdded((*reinterpret_cast< const QList<QLandmarkId>(*)>(_a[1]))); break;
        case 2: _t->landmarksChanged((*reinterpret_cast< const QList<QLandmarkId>(*)>(_a[1]))); break;
        case 3: _t->landmarksRemoved((*reinterpret_cast< const QList<QLandmarkId>(*)>(_a[1]))); break;
        case 4: _t->categoriesAdded((*reinterpret_cast< const QList<QLandmarkCategoryId>(*)>(_a[1]))); break;
        case 5: _t->categoriesChanged((*reinterpret_cast< const QList<QLandmarkCategoryId>(*)>(_a[1]))); break;
        case 6: _t->categoriesRemoved((*reinterpret_cast< const QList<QLandmarkCategoryId>(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QLandmarkManagerEngine::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QLandmarkManagerEngine::dataChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (QLandmarkManagerEngine::*_t)(const QList<QLandmarkId> & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QLandmarkManagerEngine::landmarksAdded)) {
                *result = 1;
            }
        }
        {
            typedef void (QLandmarkManagerEngine::*_t)(const QList<QLandmarkId> & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QLandmarkManagerEngine::landmarksChanged)) {
                *result = 2;
            }
        }
        {
            typedef void (QLandmarkManagerEngine::*_t)(const QList<QLandmarkId> & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QLandmarkManagerEngine::landmarksRemoved)) {
                *result = 3;
            }
        }
        {
            typedef void (QLandmarkManagerEngine::*_t)(const QList<QLandmarkCategoryId> & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QLandmarkManagerEngine::categoriesAdded)) {
                *result = 4;
            }
        }
        {
            typedef void (QLandmarkManagerEngine::*_t)(const QList<QLandmarkCategoryId> & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QLandmarkManagerEngine::categoriesChanged)) {
                *result = 5;
            }
        }
        {
            typedef void (QLandmarkManagerEngine::*_t)(const QList<QLandmarkCategoryId> & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QLandmarkManagerEngine::categoriesRemoved)) {
                *result = 6;
            }
        }
    }
}

const QMetaObject QLandmarkManagerEngine::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QLandmarkManagerEngine.data,
      qt_meta_data_QLandmarkManagerEngine,  qt_static_metacall, 0, 0}
};


const QMetaObject *QLandmarkManagerEngine::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QLandmarkManagerEngine::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QLandmarkManagerEngine.stringdata))
        return static_cast<void*>(const_cast< QLandmarkManagerEngine*>(this));
    return QObject::qt_metacast(_clname);
}

int QLandmarkManagerEngine::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void QLandmarkManagerEngine::dataChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void QLandmarkManagerEngine::landmarksAdded(const QList<QLandmarkId> & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QLandmarkManagerEngine::landmarksChanged(const QList<QLandmarkId> & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QLandmarkManagerEngine::landmarksRemoved(const QList<QLandmarkId> & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QLandmarkManagerEngine::categoriesAdded(const QList<QLandmarkCategoryId> & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QLandmarkManagerEngine::categoriesChanged(const QList<QLandmarkCategoryId> & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void QLandmarkManagerEngine::categoriesRemoved(const QList<QLandmarkCategoryId> & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}
QT_END_MOC_NAMESPACE

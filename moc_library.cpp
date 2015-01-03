/****************************************************************************
** Meta object code from reading C++ file 'library.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "library.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'library.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Library_t {
    QByteArrayData data[10];
    char stringdata[133];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Library_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Library_t qt_meta_stringdata_Library = {
    {
QT_MOC_LITERAL(0, 0, 7),
QT_MOC_LITERAL(1, 8, 17),
QT_MOC_LITERAL(2, 26, 0),
QT_MOC_LITERAL(3, 27, 22),
QT_MOC_LITERAL(4, 50, 4),
QT_MOC_LITERAL(5, 55, 19),
QT_MOC_LITERAL(6, 75, 30),
QT_MOC_LITERAL(7, 106, 8),
QT_MOC_LITERAL(8, 115, 13),
QT_MOC_LITERAL(9, 129, 3)
    },
    "Library\0addSongToPlaylist\0\0"
    "QHash<QString,QString>\0hash\0"
    "addArtistToPlaylist\0QList<QHash<QString,QString> >\0"
    "hashList\0addToPlaylist\0idx"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Library[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,
       5,    1,   32,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    1,   35,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,

 // slots: parameters
    QMetaType::Void, QMetaType::QModelIndex,    9,

       0        // eod
};

void Library::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Library *_t = static_cast<Library *>(_o);
        switch (_id) {
        case 0: _t->addSongToPlaylist((*reinterpret_cast< const QHash<QString,QString>(*)>(_a[1]))); break;
        case 1: _t->addArtistToPlaylist((*reinterpret_cast< const QList<QHash<QString,QString> >(*)>(_a[1]))); break;
        case 2: _t->addToPlaylist((*reinterpret_cast< QModelIndex(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Library::*_t)(const QHash<QString,QString> );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Library::addSongToPlaylist)) {
                *result = 0;
            }
        }
        {
            typedef void (Library::*_t)(const QList<QHash<QString,QString> > );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Library::addArtistToPlaylist)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject Library::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Library.data,
      qt_meta_data_Library,  qt_static_metacall, 0, 0}
};


const QMetaObject *Library::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Library::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Library.stringdata))
        return static_cast<void*>(const_cast< Library*>(this));
    return QWidget::qt_metacast(_clname);
}

int Library::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void Library::addSongToPlaylist(const QHash<QString,QString> _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Library::addArtistToPlaylist(const QList<QHash<QString,QString> > _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE

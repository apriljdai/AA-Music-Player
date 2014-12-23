/****************************************************************************
** Meta object code from reading C++ file 'libraryModel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "libraryModel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'libraryModel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_LibraryModel_t {
    QByteArrayData data[9];
    char stringdata[139];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LibraryModel_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LibraryModel_t qt_meta_stringdata_LibraryModel = {
    {
QT_MOC_LITERAL(0, 0, 12),
QT_MOC_LITERAL(1, 13, 22),
QT_MOC_LITERAL(2, 36, 0),
QT_MOC_LITERAL(3, 37, 20),
QT_MOC_LITERAL(4, 58, 11),
QT_MOC_LITERAL(5, 70, 22),
QT_MOC_LITERAL(6, 93, 22),
QT_MOC_LITERAL(7, 116, 7),
QT_MOC_LITERAL(8, 124, 14)
    },
    "LibraryModel\0libraryMetaDataChanged\0"
    "\0addMusicFromPlaylist\0absFilePath\0"
    "playlistMetaDataChange\0QHash<QString,QString>\0"
    "newHash\0refreshLibrary"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LibraryModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,   34,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   41,    2, 0x08 /* Private */,
       5,    1,   44,    2, 0x08 /* Private */,
       8,    0,   47,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::QString, QMetaType::QString,    2,    2,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void,

       0        // eod
};

void LibraryModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        LibraryModel *_t = static_cast<LibraryModel *>(_o);
        switch (_id) {
        case 0: _t->libraryMetaDataChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 1: _t->addMusicFromPlaylist((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->playlistMetaDataChange((*reinterpret_cast< QHash<QString,QString>(*)>(_a[1]))); break;
        case 3: _t->refreshLibrary(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (LibraryModel::*_t)(int , QString , QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&LibraryModel::libraryMetaDataChanged)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject LibraryModel::staticMetaObject = {
    { &QAbstractItemModel::staticMetaObject, qt_meta_stringdata_LibraryModel.data,
      qt_meta_data_LibraryModel,  qt_static_metacall, 0, 0}
};


const QMetaObject *LibraryModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LibraryModel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_LibraryModel.stringdata))
        return static_cast<void*>(const_cast< LibraryModel*>(this));
    return QAbstractItemModel::qt_metacast(_clname);
}

int LibraryModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractItemModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void LibraryModel::libraryMetaDataChanged(int _t1, QString _t2, QString _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE

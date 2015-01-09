/****************************************************************************
** Meta object code from reading C++ file 'playlistlibrarymodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "playlistlibrarymodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'playlistlibrarymodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_PlaylistLibraryModel_t {
    QByteArrayData data[11];
    char stringdata[141];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PlaylistLibraryModel_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PlaylistLibraryModel_t qt_meta_stringdata_PlaylistLibraryModel = {
    {
QT_MOC_LITERAL(0, 0, 20),
QT_MOC_LITERAL(1, 21, 17),
QT_MOC_LITERAL(2, 39, 0),
QT_MOC_LITERAL(3, 40, 12),
QT_MOC_LITERAL(4, 53, 15),
QT_MOC_LITERAL(5, 69, 9),
QT_MOC_LITERAL(6, 79, 8),
QT_MOC_LITERAL(7, 88, 7),
QT_MOC_LITERAL(8, 96, 23),
QT_MOC_LITERAL(9, 120, 11),
QT_MOC_LITERAL(10, 132, 8)
    },
    "PlaylistLibraryModel\0playlistItemAdded\0"
    "\0loadPlaylist\0addToModelAndDB\0QFileInfo\0"
    "fileInfo\0refresh\0addNewlyCreatedPlaylist\0"
    "absFilePath\0fileName"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PlaylistLibraryModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x06 /* Public */,
       3,    1,   40,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   43,    2, 0x08 /* Private */,
       7,    0,   46,    2, 0x08 /* Private */,
       8,    2,   47,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    9,   10,

       0        // eod
};

void PlaylistLibraryModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PlaylistLibraryModel *_t = static_cast<PlaylistLibraryModel *>(_o);
        switch (_id) {
        case 0: _t->playlistItemAdded(); break;
        case 1: _t->loadPlaylist((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->addToModelAndDB((*reinterpret_cast< QFileInfo(*)>(_a[1]))); break;
        case 3: _t->refresh(); break;
        case 4: _t->addNewlyCreatedPlaylist((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QFileInfo >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (PlaylistLibraryModel::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PlaylistLibraryModel::playlistItemAdded)) {
                *result = 0;
            }
        }
        {
            typedef void (PlaylistLibraryModel::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PlaylistLibraryModel::loadPlaylist)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject PlaylistLibraryModel::staticMetaObject = {
    { &QStandardItemModel::staticMetaObject, qt_meta_stringdata_PlaylistLibraryModel.data,
      qt_meta_data_PlaylistLibraryModel,  qt_static_metacall, 0, 0}
};


const QMetaObject *PlaylistLibraryModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PlaylistLibraryModel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PlaylistLibraryModel.stringdata))
        return static_cast<void*>(const_cast< PlaylistLibraryModel*>(this));
    return QStandardItemModel::qt_metacast(_clname);
}

int PlaylistLibraryModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QStandardItemModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void PlaylistLibraryModel::playlistItemAdded()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void PlaylistLibraryModel::loadPlaylist(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE

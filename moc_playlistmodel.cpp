/****************************************************************************
** Meta object code from reading C++ file 'playlistmodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "playlistmodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'playlistmodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_PlaylistModel_t {
    QByteArrayData data[26];
    char stringdata[361];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PlaylistModel_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PlaylistModel_t qt_meta_stringdata_PlaylistModel = {
    {
QT_MOC_LITERAL(0, 0, 13),
QT_MOC_LITERAL(1, 14, 19),
QT_MOC_LITERAL(2, 34, 0),
QT_MOC_LITERAL(3, 35, 18),
QT_MOC_LITERAL(4, 54, 9),
QT_MOC_LITERAL(5, 64, 18),
QT_MOC_LITERAL(6, 83, 20),
QT_MOC_LITERAL(7, 104, 14),
QT_MOC_LITERAL(8, 119, 22),
QT_MOC_LITERAL(9, 142, 22),
QT_MOC_LITERAL(10, 165, 19),
QT_MOC_LITERAL(11, 185, 15),
QT_MOC_LITERAL(12, 201, 13),
QT_MOC_LITERAL(13, 215, 16),
QT_MOC_LITERAL(14, 232, 5),
QT_MOC_LITERAL(15, 238, 3),
QT_MOC_LITERAL(16, 242, 14),
QT_MOC_LITERAL(17, 257, 11),
QT_MOC_LITERAL(18, 269, 14),
QT_MOC_LITERAL(19, 284, 5),
QT_MOC_LITERAL(20, 290, 22),
QT_MOC_LITERAL(21, 313, 8),
QT_MOC_LITERAL(22, 322, 4),
QT_MOC_LITERAL(23, 327, 4),
QT_MOC_LITERAL(24, 332, 16),
QT_MOC_LITERAL(25, 349, 11)
    },
    "PlaylistModel\0changePlaylistLabel\0\0"
    "playlistFileOpened\0QFileInfo\0"
    "newPlaylistCreated\0mediaAddedToPlaylist\0"
    "mediaAvailable\0playlistMetaDataChange\0"
    "QHash<QString,QString>\0currentIndexChanged\0"
    "curMediaRemoved\0resetPlaylist\0"
    "beginRemoveItems\0start\0end\0endRemoveItems\0"
    "changeItems\0changeMetaData\0index\0"
    "libraryMetaDataChanged\0dataType\0arg1\0"
    "arg2\0loadPlaylistItem\0absFilePath"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PlaylistModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       9,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   89,    2, 0x06 /* Public */,
       3,    1,   92,    2, 0x06 /* Public */,
       5,    2,   95,    2, 0x06 /* Public */,
       6,    1,  100,    2, 0x06 /* Public */,
       7,    0,  103,    2, 0x06 /* Public */,
       8,    1,  104,    2, 0x06 /* Public */,
      10,    1,  107,    2, 0x06 /* Public */,
      11,    1,  110,    2, 0x06 /* Public */,
      12,    0,  113,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      13,    2,  114,    2, 0x08 /* Private */,
      16,    0,  119,    2, 0x08 /* Private */,
      17,    2,  120,    2, 0x08 /* Private */,
      18,    1,  125,    2, 0x08 /* Private */,
      20,    3,  128,    2, 0x08 /* Private */,
      24,    1,  135,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, 0x80000000 | 4,    2,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    2,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   14,   15,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   14,   15,
    QMetaType::Void, QMetaType::QModelIndex,   19,
    QMetaType::Void, QMetaType::Int, QMetaType::QString, QMetaType::QString,   21,   22,   23,
    QMetaType::Void, QMetaType::QString,   25,

       0        // eod
};

void PlaylistModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PlaylistModel *_t = static_cast<PlaylistModel *>(_o);
        switch (_id) {
        case 0: _t->changePlaylistLabel((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->playlistFileOpened((*reinterpret_cast< QFileInfo(*)>(_a[1]))); break;
        case 2: _t->newPlaylistCreated((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 3: _t->mediaAddedToPlaylist((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->mediaAvailable(); break;
        case 5: _t->playlistMetaDataChange((*reinterpret_cast< QHash<QString,QString>(*)>(_a[1]))); break;
        case 6: _t->currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->curMediaRemoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->resetPlaylist(); break;
        case 9: _t->beginRemoveItems((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 10: _t->endRemoveItems(); break;
        case 11: _t->changeItems((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 12: _t->changeMetaData((*reinterpret_cast< QModelIndex(*)>(_a[1]))); break;
        case 13: _t->libraryMetaDataChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 14: _t->loadPlaylistItem((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
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
            typedef void (PlaylistModel::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PlaylistModel::changePlaylistLabel)) {
                *result = 0;
            }
        }
        {
            typedef void (PlaylistModel::*_t)(QFileInfo );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PlaylistModel::playlistFileOpened)) {
                *result = 1;
            }
        }
        {
            typedef void (PlaylistModel::*_t)(QString , QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PlaylistModel::newPlaylistCreated)) {
                *result = 2;
            }
        }
        {
            typedef void (PlaylistModel::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PlaylistModel::mediaAddedToPlaylist)) {
                *result = 3;
            }
        }
        {
            typedef void (PlaylistModel::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PlaylistModel::mediaAvailable)) {
                *result = 4;
            }
        }
        {
            typedef void (PlaylistModel::*_t)(QHash<QString,QString> );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PlaylistModel::playlistMetaDataChange)) {
                *result = 5;
            }
        }
        {
            typedef void (PlaylistModel::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PlaylistModel::currentIndexChanged)) {
                *result = 6;
            }
        }
        {
            typedef void (PlaylistModel::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PlaylistModel::curMediaRemoved)) {
                *result = 7;
            }
        }
        {
            typedef void (PlaylistModel::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PlaylistModel::resetPlaylist)) {
                *result = 8;
            }
        }
    }
}

const QMetaObject PlaylistModel::staticMetaObject = {
    { &QAbstractTableModel::staticMetaObject, qt_meta_stringdata_PlaylistModel.data,
      qt_meta_data_PlaylistModel,  qt_static_metacall, 0, 0}
};


const QMetaObject *PlaylistModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PlaylistModel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PlaylistModel.stringdata))
        return static_cast<void*>(const_cast< PlaylistModel*>(this));
    return QAbstractTableModel::qt_metacast(_clname);
}

int PlaylistModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractTableModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    }
    return _id;
}

// SIGNAL 0
void PlaylistModel::changePlaylistLabel(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void PlaylistModel::playlistFileOpened(QFileInfo _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void PlaylistModel::newPlaylistCreated(QString _t1, QString _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void PlaylistModel::mediaAddedToPlaylist(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void PlaylistModel::mediaAvailable()
{
    QMetaObject::activate(this, &staticMetaObject, 4, 0);
}

// SIGNAL 5
void PlaylistModel::playlistMetaDataChange(QHash<QString,QString> _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void PlaylistModel::currentIndexChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void PlaylistModel::curMediaRemoved(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void PlaylistModel::resetPlaylist()
{
    QMetaObject::activate(this, &staticMetaObject, 8, 0);
}
QT_END_MOC_NAMESPACE

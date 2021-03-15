/****************************************************************************
** Meta object code from reading C++ file 'video.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../QtProject/video.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'video.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Video_t {
    QByteArrayData data[29];
    char stringdata0[262];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Video_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Video_t qt_meta_stringdata_Video = {
    {
QT_MOC_LITERAL(0, 0, 5), // "Video"
QT_MOC_LITERAL(1, 6, 11), // "acceptVideo"
QT_MOC_LITERAL(2, 18, 0), // ""
QT_MOC_LITERAL(3, 19, 6), // "Video*"
QT_MOC_LITERAL(4, 26, 5), // "addMe"
QT_MOC_LITERAL(5, 32, 11), // "rejectVideo"
QT_MOC_LITERAL(6, 44, 8), // "deleteMe"
QT_MOC_LITERAL(7, 53, 8), // "errorMsg"
QT_MOC_LITERAL(8, 62, 11), // "getMetadata"
QT_MOC_LITERAL(9, 74, 8), // "filename"
QT_MOC_LITERAL(10, 83, 18), // "takeScreenCaptures"
QT_MOC_LITERAL(11, 102, 2), // "Db"
QT_MOC_LITERAL(12, 105, 5), // "cache"
QT_MOC_LITERAL(13, 111, 16), // "processThumbnail"
QT_MOC_LITERAL(14, 128, 7), // "QImage&"
QT_MOC_LITERAL(15, 136, 9), // "thumbnail"
QT_MOC_LITERAL(16, 146, 6), // "hashes"
QT_MOC_LITERAL(17, 153, 12), // "computePhash"
QT_MOC_LITERAL(18, 166, 8), // "uint64_t"
QT_MOC_LITERAL(19, 175, 7), // "cv::Mat"
QT_MOC_LITERAL(20, 183, 5), // "input"
QT_MOC_LITERAL(21, 189, 13), // "minimizeImage"
QT_MOC_LITERAL(22, 203, 5), // "image"
QT_MOC_LITERAL(23, 209, 10), // "msToHHMMSS"
QT_MOC_LITERAL(24, 220, 7), // "int64_t"
QT_MOC_LITERAL(25, 228, 4), // "time"
QT_MOC_LITERAL(26, 233, 9), // "captureAt"
QT_MOC_LITERAL(27, 243, 7), // "percent"
QT_MOC_LITERAL(28, 251, 10) // "ofDuration"

    },
    "Video\0acceptVideo\0\0Video*\0addMe\0"
    "rejectVideo\0deleteMe\0errorMsg\0getMetadata\0"
    "filename\0takeScreenCaptures\0Db\0cache\0"
    "processThumbnail\0QImage&\0thumbnail\0"
    "hashes\0computePhash\0uint64_t\0cv::Mat\0"
    "input\0minimizeImage\0image\0msToHHMMSS\0"
    "int64_t\0time\0captureAt\0percent\0"
    "ofDuration"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Video[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x06 /* Public */,
       5,    2,   67,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    1,   72,    2, 0x08 /* Private */,
      10,    1,   75,    2, 0x08 /* Private */,
      13,    2,   78,    2, 0x08 /* Private */,
      17,    1,   83,    2, 0x08 /* Private */,
      21,    1,   86,    2, 0x08 /* Private */,
      23,    1,   89,    2, 0x08 /* Private */,
      26,    2,   92,    2, 0x0a /* Public */,
      26,    1,   97,    2, 0x2a /* Public | MethodCloned */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3, QMetaType::QString,    6,    7,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Int, 0x80000000 | 11,   12,
    QMetaType::Void, 0x80000000 | 14, QMetaType::Int,   15,   16,
    0x80000000 | 18, 0x80000000 | 19,   20,
    QMetaType::QImage, QMetaType::QImage,   22,
    QMetaType::QString, 0x80000000 | 24,   25,
    QMetaType::QImage, QMetaType::Int, QMetaType::Int,   27,   28,
    QMetaType::QImage, QMetaType::Int,   27,

       0        // eod
};

void Video::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Video *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->acceptVideo((*reinterpret_cast< Video*(*)>(_a[1]))); break;
        case 1: _t->rejectVideo((*reinterpret_cast< Video*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 2: _t->getMetadata((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: { int _r = _t->takeScreenCaptures((*reinterpret_cast< const Db(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 4: _t->processThumbnail((*reinterpret_cast< QImage(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2]))); break;
        case 5: { uint64_t _r = _t->computePhash((*reinterpret_cast< const cv::Mat(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< uint64_t*>(_a[0]) = std::move(_r); }  break;
        case 6: { QImage _r = _t->minimizeImage((*reinterpret_cast< const QImage(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QImage*>(_a[0]) = std::move(_r); }  break;
        case 7: { QString _r = _t->msToHHMMSS((*reinterpret_cast< const int64_t(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 8: { QImage _r = _t->captureAt((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QImage*>(_a[0]) = std::move(_r); }  break;
        case 9: { QImage _r = _t->captureAt((*reinterpret_cast< const int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QImage*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Video* >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Video* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Video::*)(Video * ) const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Video::acceptVideo)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Video::*)(Video * , QString ) const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Video::rejectVideo)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Video::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_Video.data,
    qt_meta_data_Video,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Video::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Video::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Video.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QRunnable"))
        return static_cast< QRunnable*>(this);
    return QObject::qt_metacast(_clname);
}

int Video::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void Video::acceptVideo(Video * _t1)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(const_cast< Video *>(this), &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Video::rejectVideo(Video * _t1, QString _t2)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(const_cast< Video *>(this), &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

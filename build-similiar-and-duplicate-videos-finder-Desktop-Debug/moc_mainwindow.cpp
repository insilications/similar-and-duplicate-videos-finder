/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../QtProject/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[44];
    char stringdata0[673];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 20), // "deleteTemporaryFiles"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 10), // "closeEvent"
QT_MOC_LITERAL(4, 44, 12), // "QCloseEvent*"
QT_MOC_LITERAL(5, 57, 5), // "event"
QT_MOC_LITERAL(6, 63, 14), // "dragEnterEvent"
QT_MOC_LITERAL(7, 78, 16), // "QDragEnterEvent*"
QT_MOC_LITERAL(8, 95, 9), // "dropEvent"
QT_MOC_LITERAL(9, 105, 11), // "QDropEvent*"
QT_MOC_LITERAL(10, 117, 14), // "loadExtensions"
QT_MOC_LITERAL(11, 132, 12), // "detectffmpeg"
QT_MOC_LITERAL(12, 145, 17), // "setComparisonMode"
QT_MOC_LITERAL(13, 163, 4), // "mode"
QT_MOC_LITERAL(14, 168, 29), // "on_selectThumbnails_activated"
QT_MOC_LITERAL(15, 198, 5), // "index"
QT_MOC_LITERAL(16, 204, 22), // "on_selectPhash_clicked"
QT_MOC_LITERAL(17, 227, 7), // "checked"
QT_MOC_LITERAL(18, 235, 21), // "on_selectSSIM_clicked"
QT_MOC_LITERAL(19, 257, 27), // "on_blocksizeCombo_activated"
QT_MOC_LITERAL(20, 285, 35), // "on_differentDurationCombo_act..."
QT_MOC_LITERAL(21, 321, 30), // "on_sameDurationCombo_activated"
QT_MOC_LITERAL(22, 352, 31), // "on_thresholdSlider_valueChanged"
QT_MOC_LITERAL(23, 384, 5), // "value"
QT_MOC_LITERAL(24, 390, 18), // "calculateThreshold"
QT_MOC_LITERAL(25, 409, 24), // "on_browseFolders_clicked"
QT_MOC_LITERAL(26, 434, 29), // "on_directoryBox_returnPressed"
QT_MOC_LITERAL(27, 464, 25), // "on_findDuplicates_clicked"
QT_MOC_LITERAL(28, 490, 10), // "findVideos"
QT_MOC_LITERAL(29, 501, 5), // "QDir&"
QT_MOC_LITERAL(30, 507, 3), // "dir"
QT_MOC_LITERAL(31, 511, 16), // "sortVideosBySize"
QT_MOC_LITERAL(32, 528, 15), // "QVector<Video*>"
QT_MOC_LITERAL(33, 544, 13), // "processVideos"
QT_MOC_LITERAL(34, 558, 12), // "videoSummary"
QT_MOC_LITERAL(35, 571, 16), // "addStatusMessage"
QT_MOC_LITERAL(36, 588, 7), // "message"
QT_MOC_LITERAL(37, 596, 8), // "addVideo"
QT_MOC_LITERAL(38, 605, 6), // "Video*"
QT_MOC_LITERAL(39, 612, 5), // "addMe"
QT_MOC_LITERAL(40, 618, 11), // "removeVideo"
QT_MOC_LITERAL(41, 630, 8), // "deleteMe"
QT_MOC_LITERAL(42, 639, 8), // "errorMsg"
QT_MOC_LITERAL(43, 648, 24) // "on_actionAbout_triggered"

    },
    "MainWindow\0deleteTemporaryFiles\0\0"
    "closeEvent\0QCloseEvent*\0event\0"
    "dragEnterEvent\0QDragEnterEvent*\0"
    "dropEvent\0QDropEvent*\0loadExtensions\0"
    "detectffmpeg\0setComparisonMode\0mode\0"
    "on_selectThumbnails_activated\0index\0"
    "on_selectPhash_clicked\0checked\0"
    "on_selectSSIM_clicked\0on_blocksizeCombo_activated\0"
    "on_differentDurationCombo_activated\0"
    "on_sameDurationCombo_activated\0"
    "on_thresholdSlider_valueChanged\0value\0"
    "calculateThreshold\0on_browseFolders_clicked\0"
    "on_directoryBox_returnPressed\0"
    "on_findDuplicates_clicked\0findVideos\0"
    "QDir&\0dir\0sortVideosBySize\0QVector<Video*>\0"
    "processVideos\0videoSummary\0addStatusMessage\0"
    "message\0addVideo\0Video*\0addMe\0removeVideo\0"
    "deleteMe\0errorMsg\0on_actionAbout_triggered"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      26,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  144,    2, 0x08 /* Private */,
       3,    1,  145,    2, 0x08 /* Private */,
       6,    1,  148,    2, 0x08 /* Private */,
       8,    1,  151,    2, 0x08 /* Private */,
      10,    0,  154,    2, 0x08 /* Private */,
      11,    0,  155,    2, 0x08 /* Private */,
      12,    1,  156,    2, 0x08 /* Private */,
      14,    1,  159,    2, 0x08 /* Private */,
      16,    1,  162,    2, 0x08 /* Private */,
      18,    1,  165,    2, 0x08 /* Private */,
      19,    1,  168,    2, 0x08 /* Private */,
      20,    1,  171,    2, 0x08 /* Private */,
      21,    1,  174,    2, 0x08 /* Private */,
      22,    1,  177,    2, 0x08 /* Private */,
      24,    1,  180,    2, 0x08 /* Private */,
      25,    0,  183,    2, 0x08 /* Private */,
      26,    0,  184,    2, 0x08 /* Private */,
      27,    0,  185,    2, 0x08 /* Private */,
      28,    1,  186,    2, 0x08 /* Private */,
      31,    0,  189,    2, 0x08 /* Private */,
      33,    0,  190,    2, 0x08 /* Private */,
      34,    0,  191,    2, 0x08 /* Private */,
      35,    1,  192,    2, 0x08 /* Private */,
      37,    1,  195,    2, 0x08 /* Private */,
      40,    2,  198,    2, 0x08 /* Private */,
      43,    0,  203,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 7,    5,
    QMetaType::Void, 0x80000000 | 9,    5,
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void, QMetaType::Int,   15,
    QMetaType::Void, QMetaType::Bool,   17,
    QMetaType::Void, QMetaType::Bool,   17,
    QMetaType::Void, QMetaType::Int,   15,
    QMetaType::Void, QMetaType::Int,   15,
    QMetaType::Void, QMetaType::Int,   15,
    QMetaType::Void, QMetaType::Int,   23,
    QMetaType::Void, QMetaType::Int,   23,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 29,   30,
    0x80000000 | 32,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   36,
    QMetaType::Void, 0x80000000 | 38,   39,
    QMetaType::Void, 0x80000000 | 38, QMetaType::QString,   41,   42,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->deleteTemporaryFiles(); break;
        case 1: _t->closeEvent((*reinterpret_cast< QCloseEvent*(*)>(_a[1]))); break;
        case 2: _t->dragEnterEvent((*reinterpret_cast< QDragEnterEvent*(*)>(_a[1]))); break;
        case 3: _t->dropEvent((*reinterpret_cast< QDropEvent*(*)>(_a[1]))); break;
        case 4: _t->loadExtensions(); break;
        case 5: { bool _r = _t->detectffmpeg();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 6: _t->setComparisonMode((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 7: _t->on_selectThumbnails_activated((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 8: _t->on_selectPhash_clicked((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 9: _t->on_selectSSIM_clicked((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 10: _t->on_blocksizeCombo_activated((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 11: _t->on_differentDurationCombo_activated((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 12: _t->on_sameDurationCombo_activated((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 13: _t->on_thresholdSlider_valueChanged((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 14: _t->calculateThreshold((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 15: _t->on_browseFolders_clicked(); break;
        case 16: _t->on_directoryBox_returnPressed(); break;
        case 17: _t->on_findDuplicates_clicked(); break;
        case 18: _t->findVideos((*reinterpret_cast< QDir(*)>(_a[1]))); break;
        case 19: { QVector<Video*> _r = _t->sortVideosBySize();
            if (_a[0]) *reinterpret_cast< QVector<Video*>*>(_a[0]) = std::move(_r); }  break;
        case 20: _t->processVideos(); break;
        case 21: _t->videoSummary(); break;
        case 22: _t->addStatusMessage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 23: _t->addVideo((*reinterpret_cast< Video*(*)>(_a[1]))); break;
        case 24: _t->removeVideo((*reinterpret_cast< Video*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 25: _t->on_actionAbout_triggered(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 23:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Video* >(); break;
            }
            break;
        case 24:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Video* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MainWindow.data,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 26)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 26;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 26)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 26;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

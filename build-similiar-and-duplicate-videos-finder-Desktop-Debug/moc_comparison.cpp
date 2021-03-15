/****************************************************************************
** Meta object code from reading C++ file 'comparison.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../QtProject/comparison.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'comparison.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Comparison_t {
    QByteArrayData data[67];
    char stringdata0[928];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Comparison_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Comparison_t qt_meta_stringdata_Comparison = {
    {
QT_MOC_LITERAL(0, 0, 10), // "Comparison"
QT_MOC_LITERAL(1, 11, 17), // "sendStatusMessage"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 7), // "message"
QT_MOC_LITERAL(4, 38, 20), // "switchComparisonMode"
QT_MOC_LITERAL(5, 59, 4), // "mode"
QT_MOC_LITERAL(6, 64, 21), // "adjustThresholdSlider"
QT_MOC_LITERAL(7, 86, 5), // "value"
QT_MOC_LITERAL(8, 92, 20), // "reportMatchingVideos"
QT_MOC_LITERAL(9, 113, 13), // "confirmToExit"
QT_MOC_LITERAL(10, 127, 20), // "on_prevVideo_clicked"
QT_MOC_LITERAL(11, 148, 20), // "on_nextVideo_clicked"
QT_MOC_LITERAL(12, 169, 15), // "bothVideosMatch"
QT_MOC_LITERAL(13, 185, 12), // "const Video*"
QT_MOC_LITERAL(14, 198, 4), // "left"
QT_MOC_LITERAL(15, 203, 5), // "right"
QT_MOC_LITERAL(16, 209, 15), // "phashSimilarity"
QT_MOC_LITERAL(17, 225, 7), // "nthHash"
QT_MOC_LITERAL(18, 233, 9), // "showVideo"
QT_MOC_LITERAL(19, 243, 4), // "side"
QT_MOC_LITERAL(20, 248, 16), // "readableDuration"
QT_MOC_LITERAL(21, 265, 7), // "int64_t"
QT_MOC_LITERAL(22, 273, 12), // "milliseconds"
QT_MOC_LITERAL(23, 286, 16), // "readableFileSize"
QT_MOC_LITERAL(24, 303, 8), // "filesize"
QT_MOC_LITERAL(25, 312, 15), // "readableBitRate"
QT_MOC_LITERAL(26, 328, 4), // "kbps"
QT_MOC_LITERAL(27, 333, 25), // "highlightBetterProperties"
QT_MOC_LITERAL(28, 359, 8), // "updateUI"
QT_MOC_LITERAL(29, 368, 16), // "comparisonsSoFar"
QT_MOC_LITERAL(30, 385, 22), // "on_selectPhash_clicked"
QT_MOC_LITERAL(31, 408, 7), // "checked"
QT_MOC_LITERAL(32, 416, 21), // "on_selectSSIM_clicked"
QT_MOC_LITERAL(33, 438, 20), // "on_leftImage_clicked"
QT_MOC_LITERAL(34, 459, 21), // "on_rightImage_clicked"
QT_MOC_LITERAL(35, 481, 23), // "on_leftFileName_clicked"
QT_MOC_LITERAL(36, 505, 24), // "on_rightFileName_clicked"
QT_MOC_LITERAL(37, 530, 15), // "openFileManager"
QT_MOC_LITERAL(38, 546, 8), // "filename"
QT_MOC_LITERAL(39, 555, 21), // "on_leftDelete_clicked"
QT_MOC_LITERAL(40, 577, 22), // "on_rightDelete_clicked"
QT_MOC_LITERAL(41, 600, 11), // "deleteVideo"
QT_MOC_LITERAL(42, 612, 15), // "auto_trash_mode"
QT_MOC_LITERAL(43, 628, 19), // "on_leftMove_clicked"
QT_MOC_LITERAL(44, 648, 20), // "on_rightMove_clicked"
QT_MOC_LITERAL(45, 669, 9), // "moveVideo"
QT_MOC_LITERAL(46, 679, 4), // "from"
QT_MOC_LITERAL(47, 684, 2), // "to"
QT_MOC_LITERAL(48, 687, 24), // "on_swapFilenames_clicked"
QT_MOC_LITERAL(49, 712, 31), // "on_thresholdSlider_valueChanged"
QT_MOC_LITERAL(50, 744, 11), // "resizeEvent"
QT_MOC_LITERAL(51, 756, 13), // "QResizeEvent*"
QT_MOC_LITERAL(52, 770, 5), // "event"
QT_MOC_LITERAL(53, 776, 10), // "wheelEvent"
QT_MOC_LITERAL(54, 787, 12), // "QWheelEvent*"
QT_MOC_LITERAL(55, 800, 5), // "sigma"
QT_MOC_LITERAL(56, 806, 7), // "cv::Mat"
QT_MOC_LITERAL(57, 814, 1), // "m"
QT_MOC_LITERAL(58, 816, 1), // "i"
QT_MOC_LITERAL(59, 818, 1), // "j"
QT_MOC_LITERAL(60, 820, 10), // "block_size"
QT_MOC_LITERAL(61, 831, 10), // "covariance"
QT_MOC_LITERAL(62, 842, 2), // "m0"
QT_MOC_LITERAL(63, 845, 2), // "m1"
QT_MOC_LITERAL(64, 848, 4), // "ssim"
QT_MOC_LITERAL(65, 853, 34), // "on_identicalFilesAutoTrash_cl..."
QT_MOC_LITERAL(66, 888, 39) // "on_autoDelOnlySizeDiffersButt..."

    },
    "Comparison\0sendStatusMessage\0\0message\0"
    "switchComparisonMode\0mode\0"
    "adjustThresholdSlider\0value\0"
    "reportMatchingVideos\0confirmToExit\0"
    "on_prevVideo_clicked\0on_nextVideo_clicked\0"
    "bothVideosMatch\0const Video*\0left\0"
    "right\0phashSimilarity\0nthHash\0showVideo\0"
    "side\0readableDuration\0int64_t\0"
    "milliseconds\0readableFileSize\0filesize\0"
    "readableBitRate\0kbps\0highlightBetterProperties\0"
    "updateUI\0comparisonsSoFar\0"
    "on_selectPhash_clicked\0checked\0"
    "on_selectSSIM_clicked\0on_leftImage_clicked\0"
    "on_rightImage_clicked\0on_leftFileName_clicked\0"
    "on_rightFileName_clicked\0openFileManager\0"
    "filename\0on_leftDelete_clicked\0"
    "on_rightDelete_clicked\0deleteVideo\0"
    "auto_trash_mode\0on_leftMove_clicked\0"
    "on_rightMove_clicked\0moveVideo\0from\0"
    "to\0on_swapFilenames_clicked\0"
    "on_thresholdSlider_valueChanged\0"
    "resizeEvent\0QResizeEvent*\0event\0"
    "wheelEvent\0QWheelEvent*\0sigma\0cv::Mat\0"
    "m\0i\0j\0block_size\0covariance\0m0\0m1\0"
    "ssim\0on_identicalFilesAutoTrash_clicked\0"
    "on_autoDelOnlySizeDiffersButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Comparison[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      39,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  209,    2, 0x06 /* Public */,
       4,    1,  212,    2, 0x06 /* Public */,
       6,    1,  215,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    0,  218,    2, 0x0a /* Public */,
       9,    0,  219,    2, 0x08 /* Private */,
      10,    0,  220,    2, 0x08 /* Private */,
      11,    0,  221,    2, 0x08 /* Private */,
      12,    2,  222,    2, 0x08 /* Private */,
      16,    3,  227,    2, 0x08 /* Private */,
      18,    1,  234,    2, 0x08 /* Private */,
      20,    1,  237,    2, 0x08 /* Private */,
      23,    1,  240,    2, 0x08 /* Private */,
      25,    1,  243,    2, 0x08 /* Private */,
      27,    0,  246,    2, 0x08 /* Private */,
      28,    0,  247,    2, 0x08 /* Private */,
      29,    0,  248,    2, 0x08 /* Private */,
      30,    1,  249,    2, 0x08 /* Private */,
      32,    1,  252,    2, 0x08 /* Private */,
      33,    0,  255,    2, 0x08 /* Private */,
      34,    0,  256,    2, 0x08 /* Private */,
      35,    0,  257,    2, 0x08 /* Private */,
      36,    0,  258,    2, 0x08 /* Private */,
      37,    1,  259,    2, 0x08 /* Private */,
      39,    0,  262,    2, 0x08 /* Private */,
      40,    0,  263,    2, 0x08 /* Private */,
      41,    2,  264,    2, 0x08 /* Private */,
      41,    1,  269,    2, 0x28 /* Private | MethodCloned */,
      43,    0,  272,    2, 0x08 /* Private */,
      44,    0,  273,    2, 0x08 /* Private */,
      45,    2,  274,    2, 0x08 /* Private */,
      48,    0,  279,    2, 0x08 /* Private */,
      49,    1,  280,    2, 0x08 /* Private */,
      50,    1,  283,    2, 0x08 /* Private */,
      53,    1,  286,    2, 0x08 /* Private */,
      55,    4,  289,    2, 0x08 /* Private */,
      61,    5,  298,    2, 0x08 /* Private */,
      64,    3,  309,    2, 0x08 /* Private */,
      65,    0,  316,    2, 0x08 /* Private */,
      66,    0,  317,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    7,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool, 0x80000000 | 13, 0x80000000 | 13,   14,   15,
    QMetaType::Int, 0x80000000 | 13, 0x80000000 | 13, QMetaType::Int,   14,   15,   17,
    QMetaType::Void, QMetaType::QString,   19,
    QMetaType::QString, 0x80000000 | 21,   22,
    QMetaType::QString, 0x80000000 | 21,   24,
    QMetaType::QString, QMetaType::Double,   26,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Int,
    QMetaType::Void, QMetaType::Bool,   31,
    QMetaType::Void, QMetaType::Bool,   31,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   38,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Bool,   19,   42,
    QMetaType::Void, QMetaType::Int,   19,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   46,   47,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, 0x80000000 | 51,   52,
    QMetaType::Void, 0x80000000 | 54,   52,
    QMetaType::Double, 0x80000000 | 56, QMetaType::Int, QMetaType::Int, QMetaType::Int,   57,   58,   59,   60,
    QMetaType::Double, 0x80000000 | 56, 0x80000000 | 56, QMetaType::Int, QMetaType::Int, QMetaType::Int,   62,   63,   58,   59,   60,
    QMetaType::Double, 0x80000000 | 56, 0x80000000 | 56, QMetaType::Int,   62,   63,   60,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Comparison::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Comparison *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sendStatusMessage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->switchComparisonMode((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 2: _t->adjustThresholdSlider((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 3: _t->reportMatchingVideos(); break;
        case 4: _t->confirmToExit(); break;
        case 5: _t->on_prevVideo_clicked(); break;
        case 6: _t->on_nextVideo_clicked(); break;
        case 7: { bool _r = _t->bothVideosMatch((*reinterpret_cast< const Video*(*)>(_a[1])),(*reinterpret_cast< const Video*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 8: { int _r = _t->phashSimilarity((*reinterpret_cast< const Video*(*)>(_a[1])),(*reinterpret_cast< const Video*(*)>(_a[2])),(*reinterpret_cast< const int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 9: _t->showVideo((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 10: { QString _r = _t->readableDuration((*reinterpret_cast< const int64_t(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 11: { QString _r = _t->readableFileSize((*reinterpret_cast< const int64_t(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 12: { QString _r = _t->readableBitRate((*reinterpret_cast< const double(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 13: _t->highlightBetterProperties(); break;
        case 14: _t->updateUI(); break;
        case 15: { int _r = _t->comparisonsSoFar();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 16: _t->on_selectPhash_clicked((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 17: _t->on_selectSSIM_clicked((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 18: _t->on_leftImage_clicked(); break;
        case 19: _t->on_rightImage_clicked(); break;
        case 20: _t->on_leftFileName_clicked(); break;
        case 21: _t->on_rightFileName_clicked(); break;
        case 22: _t->openFileManager((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 23: _t->on_leftDelete_clicked(); break;
        case 24: _t->on_rightDelete_clicked(); break;
        case 25: _t->deleteVideo((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< const bool(*)>(_a[2]))); break;
        case 26: _t->deleteVideo((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 27: _t->on_leftMove_clicked(); break;
        case 28: _t->on_rightMove_clicked(); break;
        case 29: _t->moveVideo((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 30: _t->on_swapFilenames_clicked(); break;
        case 31: _t->on_thresholdSlider_valueChanged((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 32: _t->resizeEvent((*reinterpret_cast< QResizeEvent*(*)>(_a[1]))); break;
        case 33: _t->wheelEvent((*reinterpret_cast< QWheelEvent*(*)>(_a[1]))); break;
        case 34: { double _r = _t->sigma((*reinterpret_cast< const cv::Mat(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2])),(*reinterpret_cast< const int(*)>(_a[3])),(*reinterpret_cast< const int(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = std::move(_r); }  break;
        case 35: { double _r = _t->covariance((*reinterpret_cast< const cv::Mat(*)>(_a[1])),(*reinterpret_cast< const cv::Mat(*)>(_a[2])),(*reinterpret_cast< const int(*)>(_a[3])),(*reinterpret_cast< const int(*)>(_a[4])),(*reinterpret_cast< const int(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = std::move(_r); }  break;
        case 36: { double _r = _t->ssim((*reinterpret_cast< const cv::Mat(*)>(_a[1])),(*reinterpret_cast< const cv::Mat(*)>(_a[2])),(*reinterpret_cast< const int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = std::move(_r); }  break;
        case 37: _t->on_identicalFilesAutoTrash_clicked(); break;
        case 38: _t->on_autoDelOnlySizeDiffersButton_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Comparison::*)(const QString & ) const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Comparison::sendStatusMessage)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Comparison::*)(const int & ) const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Comparison::switchComparisonMode)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Comparison::*)(const int & ) const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Comparison::adjustThresholdSlider)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Comparison::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_Comparison.data,
    qt_meta_data_Comparison,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Comparison::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Comparison::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Comparison.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int Comparison::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 39)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 39;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 39)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 39;
    }
    return _id;
}

// SIGNAL 0
void Comparison::sendStatusMessage(const QString & _t1)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(const_cast< Comparison *>(this), &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Comparison::switchComparisonMode(const int & _t1)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(const_cast< Comparison *>(this), &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Comparison::adjustThresholdSlider(const int & _t1)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(const_cast< Comparison *>(this), &staticMetaObject, 2, _a);
}
struct qt_meta_stringdata_ClickableLabel_t {
    QByteArrayData data[3];
    char stringdata0[24];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ClickableLabel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ClickableLabel_t qt_meta_stringdata_ClickableLabel = {
    {
QT_MOC_LITERAL(0, 0, 14), // "ClickableLabel"
QT_MOC_LITERAL(1, 15, 7), // "clicked"
QT_MOC_LITERAL(2, 23, 0) // ""

    },
    "ClickableLabel\0clicked\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ClickableLabel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,

       0        // eod
};

void ClickableLabel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ClickableLabel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ClickableLabel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ClickableLabel::clicked)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject ClickableLabel::staticMetaObject = { {
    QMetaObject::SuperData::link<QLabel::staticMetaObject>(),
    qt_meta_stringdata_ClickableLabel.data,
    qt_meta_data_ClickableLabel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ClickableLabel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ClickableLabel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ClickableLabel.stringdata0))
        return static_cast<void*>(this);
    return QLabel::qt_metacast(_clname);
}

int ClickableLabel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLabel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void ClickableLabel::clicked()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

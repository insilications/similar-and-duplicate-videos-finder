#ifndef VIDEO_H
#define VIDEO_H

#include "db.h"
#include "prefs.h"
#include <opencv2/imgproc.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <QBuffer>
#include <QDebug> //generic includes go here as video.h is used by many files
#include <QProcess>
#include <QRunnable>
#include <QTemporaryDir>

extern "C" {
#include <libavcodec/avcodec.h>
#include <libavfilter/avfilter.h>
#include <libavfilter/buffersink.h>
#include <libavfilter/buffersrc.h>
#include <libavformat/avformat.h>
#include <libavutil/imgutils.h>
#include <libswscale/swscale.h>
}

class Video : public QObject, public QRunnable
{
    Q_OBJECT

public:
    Video(const Prefs &prefsParam, const QString &ffmpegPathParam, const QString &filenameParam);
    void run();

    QString filename;
    int64_t size = 0;
    QDateTime modified;
    int64_t duration = 0;
    int bitrate = 0;
    double framerate = 0;
    QString codec;
    QString audio;
    short width = 0;
    short height = 0;
    QByteArray thumbnail;
    cv::Mat grayThumb [2];
    uint64_t hash [2] = { 0, 0 };

private slots:
    void getMetadata(const QString &filename);
    int takeScreenCaptures(const Db &cache);
    void processThumbnail(QImage &thumbnail, const int &hashes);
    uint64_t computePhash(const cv::Mat &input) const;
    QImage minimizeImage(const QImage &image) const;
    QString msToHHMMSS(const int64_t &time) const;

public slots:
    QImage captureAt(const int &percent, const int &ofDuration=100) const;

signals:
    void acceptVideo(Video *addMe) const;
    void rejectVideo(Video *deleteMe, QString errorMsg) const;

private:
    QString _ffmpegPath;

    static Prefs _prefs;
    static int _jpegQuality;

    enum _returnValues { _success, _failure };

    static constexpr int _okJpegQuality      = 60;
    static constexpr int _lowJpegQuality     = 25;
    static constexpr int _hugeAmountVideos   = 200000;
    static constexpr int _goBackwardsPercent = 6;       //if capture fails, retry but omit this much from end
    static constexpr int _videoStillUsable   = 90;      //90% of video duration is considered usable
    static constexpr int _thumbnailMaxWidth  = 448;     //small size to save memory and cache space
    static constexpr int _thumbnailMaxHeight = 336;
    static constexpr int _pHashSize          = 32;      //phash generated from 32x32 image
    static constexpr int _ssimSize           = 16;      //larger than 16x16 seems to have slower comparison
    static constexpr int _almostBlackBitmap  = 1500;    //monochrome thumbnail if less shades of gray than this
};

#endif // VIDEO_H

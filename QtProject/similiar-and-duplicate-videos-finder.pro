TARGET = "Similiar and duplicate videos finder"
TEMPLATE = app

QT += core gui widgets sql

HEADERS += \
    ffmpeg.h \
    mainwindow.h \
    prefs.h \
    video.h \
    thumbnail.h \
    db.h \
    comparison.h

SOURCES += \
    mainwindow.cpp \
    video.cpp \
    db.cpp \
    comparison.cpp \
    ssim.cpp

FORMS += \
    mainwindow.ui \
    comparison.ui


LIBS += \
    /usr/lib64/libopencv_core.so \
    /usr/lib64/libopencv_imgproc.so \
    /usr/lib64/libavcodec.so \
    /usr/lib64/libavdevice.so \
    /usr/lib64/libavfilter.so \
    /usr/lib64/libavformat.so \
    /usr/lib64/libavutil.so \
    /usr/lib64/libpostproc.so \
    /usr/lib64/libswresample.so \
    /usr/lib64/libswscale.so \
    -L/opt/nvidia/lib64/ \
    -L/opt/cuda/lib64/

INCLUDEPATH += "/usr/include/opencv4"

QMAKE_CFLAGS = -g -Og -march=native -mtune=native -fPIC -Wpedantic -Wall -Wextra -pthread -static-libstdc++ -static-libgcc -std=c17
QMAKE_CXXFLAGS = -g -Og -march=native -mtune=native -fPIC -Wpedantic -Wall -Wextra -pthread -static-libstdc++ -static-libgcc -std=c++17
QMAKE_LFLAGS = -g -Og -march=native -mtune=native -fPIC -Wpedantic -Wall -Wextra -fuse-ld=lld -pthread -static-libstdc++ -static-libgcc
QMAKE_LDLAGS = -g -Og -march=native -mtune=native -fPIC -Wpedantic -Wall -Wextra -fuse-ld=lld -pthread -static-libstdc++ -static-libgcc
CFLAGS = -g -Og -march=native -mtune=native -fPIC -Wpedantic -Wall -Wextra -pthread -static-libstdc++ -static-libgcc -std=c17
CXXFLAGS = -g -Og -march=native -mtune=native -fPIC -Wpedantic -Wall -Wextra -pthread -static-libstdc++ -static-libgcc -std=c++17
LFLAGS = -g -Og -march=native -mtune=native -fPIC -Wpedantic -Wall -Wextra -fuse-ld=lld -pthread -static-libstdc++ -static-libgcc
LDLAGS = -g -Og -march=native -mtune=native -fPIC -Wpedantic -Wall -Wextra -fuse-ld=lld -pthread -static-libstdc++ -static-libgcc
QMAKE_CFLAGS_ISYSTEM = -I
CCACHE_DISABLE=1

# Other things
RC_ICONS = icon16.ico
ICON = AppIcon.icns

QMAKE_TARGET_PRODUCT = \"\\\"$$TARGET\\\"\"
QMAKE_TARGET_DESCRIPTION = \"\\\"$$TARGET\\\"\"
QMAKE_TARGET_COPYRIGHT = "Copyright \\251 2018-2019 Kristian Koskim\\344ki"

DEFINES += APP_NAME=\"\\\"$$TARGET\\\"\"
DEFINES += APP_COPYRIGHT=\"\\\"$$QMAKE_TARGET_COPYRIGHT\\\"\"

DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x100000 # 0x[major][minor]00 set to higher than current version (v10.0.0) to have all deprecated functions removed

#How to compile this program:
    #Qt5.xx (https://www.qt.io/) MingW-32 is the default compiler and was used for the development of the program
    #If compilation fails, click on the computer icon in lower left corner of Qt Creator and select a kit

    #OpenCV 3.xx (32 bit) (https://www.opencv.org/)
    #Compiling OpenCV with MingW can be hard, so download binaries from https://github.com/huihut/OpenCV-MinGW-Build
    #put OpenCV \bin folder in source folder (only libopencv_core and libopencv_imgproc dll files are needed)
    #put OpenCV \opencv2 folder in source folder (contains the header files)
    #add path to \bin folder: Projects -> Build Environment -> Details -> Path -> C:\the_full_Qt_path\program\bin
    #The program will crash on start if the path to \bin was not set or the OpenCV DLL files are not in \bin

    #FFmpeg 4.xx (https://ffmpeg.org/)
    #ffmpeg.exe must be in same folder where the program executable is generated (or any folder in %PATH%)

    #extensions.ini must be in folder where the program executable is generated

RESOURCES += \
    files.qrc

DISTFILES +=

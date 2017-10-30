#-------------------------------------------------
#
# Project created by QtCreator 2017-09-13T14:16:40
#
#-------------------------------------------------

QT       += core gui network opengl
CONFIG +=qml c++11
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = client
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
        main.cpp \
        mainwindow.cpp \
    client.cpp \
    videohandler.cpp

HEADERS += \
        mainwindow.h \
    client.h \
    common.h \
    config.h \
    protocol.h \
    yuvrender.h \
    camera.h \
    protocol.h \
    videohandler.h \
    videosrc.h

FORMS += \
        mainwindow.ui

#QMAKE_LIBDIR+="C:/Users/root/Desktop/opencv-2.4.9/opencv/build/x64/vc12/lib/"
#DEPENDPATH+="C:/Users/root/Desktop/opencv-2.4.9/opencv/build/x64/vc12/bin/"
win32{
INCLUDEPATH +="C:\Users\root\Desktop\opencv-2.4.9\opencv\build\include"
LIBS+="C:\Users\root\Desktop\opencv-2.4.9\opencv\build\x64\vc12\lib\opencv_core249.lib"
LIBS+="C:\Users\root\Desktop\opencv-2.4.9\opencv\build\x64\vc12\lib\opencv_highgui249d.lib"
LIBS+="C:\Users\root\Desktop\opencv-2.4.9\opencv\build\x64\vc12\lib\opencv_ml249d.lib"
LIBS+="C:\Users\root\Desktop\opencv-2.4.9\opencv\build\x64\vc12\lib\opencv_video249d.lib"
LIBS+="C:\Users\root\Desktop\opencv-2.4.9\opencv\build\x64\vc12\lib\opencv_imgproc249d.lib"
}
unix{
#INCLUDEPATH +=/root/bk/opencv-2-4-9-source/build/__install/include
#LIBS+=-L/root/bk/opencv-2-4-9-source/build/__install/lib -lopencv_core  -lopencv_highgui  -lopencv_objdetect -lopencv_imgproc -lopencv_ml -lopencv_video
#LIBS+=-lopencv_core  -lopencv_highgui  -lopencv_objdetect -lopencv_imgproc -lopencv_ml -lopencv_video
INCLUDEPATH+=/root/sources/opencv-2.4.9/build/__install/include
LIBS += -L/root/sources/opencv-2.4.9/build/__install/lib  -lopencv_core  -lopencv_highgui  -lopencv_objdetect -lopencv_imgproc -lopencv_ml -lopencv_video
QMAKE_LFLAGS+="-Wl,--rpath=/root/sources/opencv-2.4.9/build/__install/lib/"
QMAKE_CXXFLAGS +="-w"
}
DEFINES+=CLIENT

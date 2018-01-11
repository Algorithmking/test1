QT += core
QT -= gui

CONFIG += c++11

TARGET = vidio1
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += \
    video_deal.cpp \
    video_deal_main.cpp

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS
INCLUDEPATH+= D:\opencv330-Mingw\install\include\
D:\opencv330-Mingw\install\include\opencv\
D:\opencv330-Mingw\install\include\opencv2

LIBS+=D:\opencv330-Mingw\install\x86\mingw\lib\libopencv_calib3d330.dll.a\
D:\opencv330-Mingw\install\x86\mingw\lib\libopencv_core330.dll.a\
D:\opencv330-Mingw\install\x86\mingw\lib\libopencv_dnn330.dll.a\
D:\opencv330-Mingw\install\x86\mingw\lib\libopencv_features2d330.dll.a\
D:\opencv330-Mingw\install\x86\mingw\lib\libopencv_flann330.dll.a\
D:\opencv330-Mingw\install\x86\mingw\lib\libopencv_highgui330.dll.a\
D:\opencv330-Mingw\install\x86\mingw\lib\libopencv_imgcodecs330.dll.a\
D:\opencv330-Mingw\install\x86\mingw\lib\libopencv_imgproc330.dll.a\
D:\opencv330-Mingw\install\x86\mingw\lib\libopencv_ml330.dll.a\
D:\opencv330-Mingw\install\x86\mingw\lib\libopencv_photo330.dll.a\
D:\opencv330-Mingw\install\x86\mingw\lib\libopencv_shape330.dll.a\
D:\opencv330-Mingw\install\x86\mingw\lib\libopencv_superres330.dll.a\
D:\opencv330-Mingw\install\x86\mingw\lib\libopencv_video330.dll.a\
D:\opencv330-Mingw\install\x86\mingw\lib\libopencv_videoio330.dll.a\
D:\opencv330-Mingw\install\x86\mingw\lib\libopencv_videostab330.dll.a\


# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

HEADERS += \
    video_deal.h

#-------------------------------------------------
#
# Project created by QtCreator 2016-03-04T11:29:29
#
#-------------------------------------------------

INCLUDEPATH += C:\opencv\opencv\build\include\
INCLUDEPATH += C:\opencv\opencv\build\include\opencv\
INCLUDEPATH += C:\opencv\opencv\build\include\opencv2\

CONFIG(debug,debug|release) {
LIBS += -LC:\opencv\opencv\build\x64\vc12\lib \
    -lopencv_world310d
} else {
LIBS += -LC:\opencv\opencv\build\x64\vc12\lib \
    -lopencv_world310
}

LIBS += -LC:\qtProject\HelloWorld\HelloWorld\lib \
        -lEV2641CDVSLib

LIBS += -LC:\qtProject\HelloWorld\HelloWorld\dll \
        -lEV2641CDVSLib
        -llibfftw3f-3

QT += core gui \
            multimediawidgets

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = HelloWorld
TEMPLATE = app


SOURCES += main.cpp \
    mainwindow.cpp \
    vwidget.cpp \
    video.cpp \
    myvideowidget.cpp

HEADERS  += mainwindow.h \
    vwidget.h \
    video.h \
    EV2641CDVSLib.h \
    example.hpp \
    myvideowidget.h

RESOURCES += \
    res.qrc

FORMS += \
    mainwindow.ui

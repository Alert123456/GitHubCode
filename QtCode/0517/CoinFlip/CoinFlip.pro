#-------------------------------------------------
#
# Project created by QtCreator 2022-05-24T20:58:48
#
#-------------------------------------------------

QT       += core gui multimedia

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = CoinFlip
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    mypushbutton.cpp \
    chooselevelscene.cpp \
    playscene.cpp \
    mycoin.cpp \
    dataconfig.cpp

HEADERS  += mainwindow.h \
    mypushbutton.h \
    chooselevelscene.h \
    playscene.h \
    mycoin.h \
    dataconfig.h

FORMS    += mainwindow.ui

RESOURCES += \
    res.qrc
CONFIG += c++11


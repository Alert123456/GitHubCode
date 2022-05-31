#-------------------------------------------------
#
# Project created by QtCreator 2022-05-12T21:31:03
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = 02_SignalAndSlot
TEMPLATE = app


SOURCES += main.cpp\
        widget.cpp \
    teacher.cpp \
    student.cpp \
    mywidget.cpp

HEADERS  += widget.h \
    teacher.h \
    student.h \
    mywidget.h

FORMS    += widget.ui


CONFIG += c++11

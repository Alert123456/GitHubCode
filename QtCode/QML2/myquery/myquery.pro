#-------------------------------------------------
#
# Project created by QtCreator 2022-01-17T20:51:45
#
#-------------------------------------------------

QT       += coregui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = myquery
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp

HEADERS  += mainwindow.h \
    connection.h

FORMS    += mainwindow.ui

#-------------------------------------------------
#
# Project created by QtCreator 2022-05-08T23:04:58
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets #大于4版本以上 包含widget模块

TARGET = 01_FirstCode #目标 生成.exe程序的名�TEMPLATE = app        #模板 应用程序模板 Application


SOURCES += main.cpp\  #源文�        mywidget.cpp
    mypushbutton.cpp \
    mywidget.cpp

HEADERS  += mywidget.h \#头文�
    mypushbutton.h
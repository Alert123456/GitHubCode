QT       += core sql
QT -= gui

CONFIG += c++11 console
CONFIG -= app_bundle

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
        main.cpp

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
#区分32位和64位windows程序
opt = $$find(QMAKESPEC,"msvc2015_64")
isEmpty(opt){
message("win32 lib")
LIBS += -L$$PWD/../../lib/win32
}
!isEmpty(opt){
message("win64 lib")
LIBS += -L$$PWD/../../lib/win64
}

#message($$QMAKESPEC)


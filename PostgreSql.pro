QT = core

CONFIG += c++17 cmdline

QT += sql
DESTDIR+=$$PWD/build


SOURCES += \
        main.cpp

qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

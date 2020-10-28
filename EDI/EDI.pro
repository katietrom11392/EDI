QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11
CONFIG -= debug_and_release debug_and_release_target

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    databaseconnection.cpp \
    main.cpp \
    windowlogin.cpp \
    windowmaincontainer.cpp \
    windownewcompany.cpp

HEADERS += \
    databaseconnection.h \
    windowlogin.h \
    windowmaincontainer.h \
    windownewcompany.h

FORMS += \
    windowlogin.ui \
    windowmaincontainer.ui \
    windownewcompany.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    logo.qrc

DISTFILES += \
    sshConnectionCode

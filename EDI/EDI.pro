QT       += core gui sql multimedia
QT       += charts

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets multimedia

CONFIG += c++11
CONFIG -= debug_and_release debug_and_release_target

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    controltab_newemployee.cpp \
    controltab_vieweditemployee.cpp \
    controltab_vieweditteamwindow.cpp \
    databaseconnection.cpp \
    main.cpp \
    newteam.cpp \
    qcalendar.cpp \
    schedule.cpp \
    shift.cpp \
    windowlogin.cpp \
    windowmain.cpp \
    windownewcompany.cpp

HEADERS += \
    controltab_newemployee.h \
    controltab_vieweditemployee.h \
    controltab_vieweditteamwindow.h \
    databaseconnection.h \
    newteam.h \
    qcalendar.h \
    schedule.h \
    shift.h \
    windowlogin.h \
    windowmain.h \
    windownewcompany.h

FORMS += \
    controltab_newemployee.ui \
    controltab_vieweditemployee.ui \
    controltab_vieweditteamwindow.ui \
    newteam.ui \
    windowlogin.ui \
    windowmain.ui \
    windownewcompany.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    ediSolo.qrc \
    logo.qrc \
    resourceExample.qrc

DISTFILES += \
    pop.wav \
    sshConnectionCode

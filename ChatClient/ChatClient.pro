#-------------------------------------------------
#
# Project created by QtCreator 2017-04-17T23:12:26
#
#-------------------------------------------------
QT       += core gui sql network multimedia

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = ChatClient
TEMPLATE = app

SOURCES += main.cpp\
    databasemagr.cpp \
    mainwindow.cpp \
    loginwidget.cpp \
    clientsocket.cpp

HEADERS  += \
    databasemagr.h \
    mainwindow.h \
    loginwidget.h \
    clientsocket.h

FORMS    += \
    mainwindow.ui \
    loginwidget.ui

CONFIG += c++11

include($$PWD/basewidget/basewidget.pri)
include($$PWD/comapi/comapi.pri)
include($$PWD/pictureedit/pictureedit.pri)
include($$PWD/uipage/uipage.pri)
include($$PWD/media/media.pri)

RESOURCES += \
    images.qrc \
    res.qrc

DESTDIR         = $$PWD/../release/Client
OBJECTS_DIR     = $$PWD/release/obj
MOC_DIR         = $$PWD/release/moc
UI_DIR          = $$PWD/release/ui
RCC_DIR         = $$PWD/release/rcc


#RC_ICONS = ap.ico
#RC_FILE         = $$PWD/resource/ico/app.rc
#RC_ICONS        = $$PWD/resource/ico/app.ico

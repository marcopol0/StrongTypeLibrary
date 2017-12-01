#-------------------------------------------------
#
# Project created by QtCreator 2017-12-01T21:23:41
#
#-------------------------------------------------

QT       -= core gui

TARGET = strongType
TEMPLATE = lib

DEFINES += STRONGTYPE_LIBRARY

SOURCES += strongtype.cpp

HEADERS += strongtype.h\
    type.h

unix {
    target.path = /usr/lib
    INSTALLS += target
}

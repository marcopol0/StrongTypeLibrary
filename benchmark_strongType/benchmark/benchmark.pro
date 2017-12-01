QT += core
QT -= gui
DESTDIR = $${_PRO_FILE_PWD_}
ROOT = $${_PRO_FILE_PWD_}

INCLUDEPATH *= $${ROOT} $${ROOT}/../../strongType

TARGET = benchmark
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp

HEADERS += $${ROOT}/../../strongType/strongtype.h
HEADERS += $${ROOT}/../../strongType/type.h

SOURCES += $${ROOT}/../../strongType/strongtype.cpp



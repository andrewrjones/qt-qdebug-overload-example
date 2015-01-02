#-------------------------------------------------
#
# Project created by QtCreator 2015-01-02T10:36:16
#
#-------------------------------------------------

QT       += core

QT       -= gui

TARGET = qdebug-overload-example
CONFIG   += console
CONFIG   -= app_bundle

TEMPLATE = app


SOURCES += main.cpp \
    point.cpp

!host_build:QMAKE_MAC_SDK = macosx10.9

HEADERS += \
    point.h

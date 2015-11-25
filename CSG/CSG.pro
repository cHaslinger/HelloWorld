QT += core
QT -= gui

TARGET = CSG
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    cl_geomfigures.cpp \
    cl_operations.cpp \
    cl_cricle.cpp

HEADERS += \
    cl_geomfigures.h \
    cl_operations.h \
    cl_cricle.h


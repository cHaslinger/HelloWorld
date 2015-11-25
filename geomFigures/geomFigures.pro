QT += core
QT -= gui

TARGET = geomFigures
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    cl_figures.cpp \
    cl_square.cpp \
    cl_circle.cpp \
    cl_triangle.cpp

HEADERS += \
    cl_figures.h \
    cl_square.h \
    cl_circle.h \
    cl_triangle.h

DISTFILES +=


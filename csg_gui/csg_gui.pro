TEMPLATE = app

QT += qml quick
CONFIG += c++11

SOURCES += main.cpp \
    cl_operations.cpp \
    cl_figures.cpp \
    cl_ball.cpp \
    cl_square.cpp \
    cl_intersection.cpp

RESOURCES += qml.qrc

# Additional import path used to resolve QML modules in Qt Creator's code model
QML_IMPORT_PATH =

# Default rules for deployment.
include(deployment.pri)

HEADERS += \
    cl_operations.h \
    cl_figures.h \
    cl_ball.h \
    cl_square.h \
    cl_intersection.h


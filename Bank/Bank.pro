QT += core
QT -= gui

TARGET = Bank
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    kunde.cpp \
    bank.cpp

HEADERS += \
    kunde.h \
    bank.h


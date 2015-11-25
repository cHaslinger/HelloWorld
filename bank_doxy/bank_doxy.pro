QT += core
QT -= gui

TARGET = bank_doxy
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    cl_customer.cpp \
    cl_bank.cpp \
    cl_normalcustomer.cpp

HEADERS += \
    cl_customer.h \
    cl_bank.h \
    cl_normalcustomer.h


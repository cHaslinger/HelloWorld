QT += core
QT -= gui

TARGET = bank_doxy_2
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    cl_bank.cpp \
    cl_customer.cpp \
    cl_normalcustomer.cpp \
    cl_discustomer.cpp

HEADERS += \
    cl_bank.h \
    cl_customer.h \
    cl_normalcustomer.h \
    cl_discustomer.h


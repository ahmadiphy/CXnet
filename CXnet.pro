#-------------------------------------------------
#
# Project created by QtCreator 2019-01-05T22:21:38
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets printsupport

TARGET = CXnet
TEMPLATE = app

SOURCES += main.cpp\
        mainwindow.cpp \
    qcustomplot.cpp \
    regn.cpp \
    hmns.cpp

HEADERS  += mainwindow.h \
    qcustomplot.h \
    regn.h \
    hmns.h

FORMS    += mainwindow.ui

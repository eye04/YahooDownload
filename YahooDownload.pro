#-------------------------------------------------
#
# Project created by QtCreator 2016-08-24T11:03:58
#
#-------------------------------------------------

QT       += core gui network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = YahooDownload
TEMPLATE = app


SOURCES += main.cpp\
        Widget.cpp \
    YahooDownload.cpp \
    YahooDownloadWidget.cpp

HEADERS  += Widget.h \
    YahooDownload.h \
    YahooDownloadWidget.h

FORMS    += Widget.ui

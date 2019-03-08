#-------------------------------------------------
#
# Project created by QtCreator 2019-03-08T10:48:34
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Login
TEMPLATE = app


SOURCES += main.cpp\
        widget.cpp \
    logindlg.cpp \
    setdlg.cpp

HEADERS  += widget.h \
    logindlg.h \
    setdlg.h

FORMS    += widget.ui \
    logindlg.ui \
    setdlg.ui

#-------------------------------------------------
#
# Project created by QtCreator 2014-10-01T21:23:17
#
#-------------------------------------------------

QT       += core gui sql xml

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = NotesDSS
TEMPLATE = app


SOURCES += main.cpp\
        notesdss.cpp \
    units.cpp \
    firms.cpp

HEADERS  += notesdss.h \
    units.h \
    firms.h

FORMS    += notesdss.ui \
    units.ui \
    firms.ui

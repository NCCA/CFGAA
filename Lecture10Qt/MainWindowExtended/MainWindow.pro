# -------------------------------------------------
# Project created by QtCreator 2009-11-05T22:11:46
# -------------------------------------------------
QT += core \
    	gui \
      widgets

TARGET=MainWindowExtended
# this is where we want to put the intermediate build files ( .o)
OBJECTS_DIR=obj/
MOC_DIR=moc/
SOURCES += $$PWD/src/main.cpp \
           $$PWD/src/MainWindow.cpp \

INCLUDEPATH += include/

HEADERS += $$PWD/include/MainWindow.h \

CONFIG -= app_bundle
CONFIG +=c++11
DEPENDPATH+=include

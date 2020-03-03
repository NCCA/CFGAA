TARGET=VectorTest
CONFIG += console
CONFIG -= app_bundle
OBJECTS_DIR=obj
INCLUDEPATH+=include
LIBS+=-L/usr/local/lib
DEPENDPATH=include
SOURCES += \
    src/main.cpp \
    src/Vector.cpp

HEADERS += \
    include/Vector.h

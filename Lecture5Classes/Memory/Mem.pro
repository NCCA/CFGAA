# this is a qmake file
# target is the name of the program, we can add a path to this
TARGET = bin/MemTest
OBJECTS_DIR=obj

# only used for mac
CONFIG -= app_bundle
# add the QtCore to the build for QImage
# this is where we want to put the .o build files
# this is where to find the source files
SOURCES += \
				src/MemTest.cpp \
				src/Mem.cpp
INCLUDEPATH +=include
HEADERS += include/Mem.h
QMAKE_CXXFLAGS+= -Wall -g -O2
# uncomment this to remove all asserts
#DEFINES+= NDEBUG

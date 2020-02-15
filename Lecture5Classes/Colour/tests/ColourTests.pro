TARGET=ColourTests
CONFIG+=c++14
SOURCES+=$$PWD/tests.cpp \
         ../src/Colour.cpp

HEADERS +=../include/Colour.h

INCLUDEPATH+=../include/
OBJECTS_DIR=$$PWD/obj
# this enables gtest and generates a main for it
INCLUDEPATH+=/usr/local/include
LIBS+= -L/usr/local/lib -lgtest -lgtest_main -pthread


TARGET=Colour
CONFIG+=c++14
SOURCES+=$$PWD/src/tests.cpp \
         $$PWD/src/Colour.cpp

HEADERS +=$$PWD/include/Colour.h

INCLUDEPATH+=$$PWD/include/
OBJECTS_DIR=$$PWD/obj
# this enables gtest and generates a main for it
INCLUDEPATH+=/usr/local/include
LIBS+= -L/usr/local/lib -lgtest -lgtest_main -pthread


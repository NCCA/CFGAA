TARGET=Colour
CONFIG+=c++14
SOURCES+=$$PWD/src/main.cpp \
         $$PWD/src/Colour.cpp

HEADERS +=$$PWD/include/Colour.h

INCLUDEPATH+=$$PWD/include/

# this enables gtest

INCLUDEPATH+=/usr/local/include
LIBS+= -L/usr/local/lib -lgtest -lgtest_main -pthread


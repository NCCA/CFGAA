TARGET=ColourTests
CONFIG+=c++14
SOURCES+=$$PWD/tests.cpp \
         ../src/Colour.cpp

HEADERS +=../include/Colour.h

INCLUDEPATH+=../include/
# for vcpkg gtest
INCLUDEPATH+=/public/devel/2020/vcpkg/installed/x64-linux/include
LIBS+= -L/public/devel/2020/vcpkg/installed/x64-linux/lib
LIBS+= -L/public/devel/2020/vcpkg/installed/x64-linux/lib/manual-link

OBJECTS_DIR=$$PWD/obj
# this enables gtest and generates a main for it
INCLUDEPATH+=/usr/local/include
LIBS+= -L/usr/local/lib -lgtest -lgtest_main -pthread


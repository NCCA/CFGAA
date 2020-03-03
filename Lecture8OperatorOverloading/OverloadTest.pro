TARGET = OverloadTest

SOURCES += src/main.cpp \
           src/Vec3.cpp

HEADERS += include/Vec3.h
INCLUDEPATH += ./include /usr/local/include
OBJECTS_DIR = obj

LIBS+= -L/usr/local/lib -lgtest -lgtest_main -pthread
macx:CONFIG -= app_bundle

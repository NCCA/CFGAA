TARGET=pimpl
SOURCES=main.cpp \
        autotimer.cpp

HEADERS=autotimer.h
INCLUDEPATH+=/usr/local/include/
CONFIG-=app_bundle
win32:DEFINES+=WIN32
CONFIG+=c++11

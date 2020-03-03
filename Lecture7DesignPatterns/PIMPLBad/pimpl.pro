TARGET=pimpl
SOURCES=main.cpp \
        autotimer.cpp

HEADERS=autotimer.h

CONFIG-=app_bundle
win32:DEFINES+=WIN32

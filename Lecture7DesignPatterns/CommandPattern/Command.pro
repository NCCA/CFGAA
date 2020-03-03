TARGET=Command
SOURCES+=$$PWD/src/*.cpp
HEADERS+=$$PWD/include/*.h
INCLUDEPATH+=./include
CONFIG+=c++11
macx:CONFIG-=app_bundle

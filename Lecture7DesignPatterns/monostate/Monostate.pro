TARGET=Monostate
SOURCES=main.cpp \
        Config.cpp

HEADERS=Config.h

OTHER_FILES=config.txt
CONFIG-=app_bundle
CONFIG+=c++11
macx:QMAKE_MAC_SDK = macosx10.12


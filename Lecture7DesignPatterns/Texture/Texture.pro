TARGET=Texture
SOURCES=main.cpp \
        Texture.cpp

HEADERS=Texture.h
CONFIG+=c++11
CONFIG-=app_bundle
macx:QMAKE_MAC_SDK = macosx10.12

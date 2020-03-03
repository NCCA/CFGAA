TARGET=Factory
SOURCES=main.cpp \
        RenderFactory.cpp

HEADERS=Renderer.h \
        RenderFactory.h \
        DirectXRenderer.h \
        OpenGLRenderer.h

CONFIG-=app_bundle
macx:QMAKE_MAC_SDK = macosx10.12

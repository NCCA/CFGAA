# we are not using Qt so remove all deps
CONFIG-=qt
# Mac uses app bundles (.app) and we don't want that so remove
macx:CONFIG-=app_bundle
#Target is the name of the exe
TARGET=MultiFile
#list of source files
SOURCES+=main.cpp external.cpp module1.cpp
HEADERS+=external.h
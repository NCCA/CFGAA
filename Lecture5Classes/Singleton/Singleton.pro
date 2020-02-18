TARGET=Singleton
CONFIG += console
CONFIG -= app_bundle
OBJECTS_DIR=obj
INCLUDEPATH=include

SOURCES+= src/Global.cpp \
          src/Test.cpp

HEADERS += include/Global.h

# note each command you add needs a ; as it will be run as a single line
# first check if we are shadow building or not easiest way is to check out against current
!equals(PWD, $${OUT_PWD}){
	# then copy the files
	copydata.commands += $(COPY_DIR) $$PWDconfig.txt $$OUT_PWD ;
	# now make sure the first target is built before copy
	first.depends = $(first) copydata
	export(first.depends)
	export(copydata.commands)
	# now add it as an extra target
	QMAKE_EXTRA_TARGETS += first copydata
}

#############################################################################
# Makefile for building: PicCryptor
# Generated by qmake (2.01a) (Qt 4.8.5) on: Tue Mar 12 10:06:37 2019
# Project:  ../PicCryptor/PicCryptor.pro
# Template: app
# Command: /opt/qt-4.8.5-x11/bin/qmake -spec /opt/qt-4.8.5-x11/mkspecs/linux-g++ CONFIG+=debug -o Makefile ../PicCryptor/PicCryptor.pro
#############################################################################

####### Compiler, tools and options

CC            = gcc
CXX           = g++
DEFINES       = -DQT_GUI_LIB -DQT_CORE_LIB -DQT_SHARED
CFLAGS        = -pipe -g -Wall -W -D_REENTRANT $(DEFINES)
CXXFLAGS      = -pipe -g -Wall -W -D_REENTRANT $(DEFINES)
INCPATH       = -I/opt/qt-4.8.5-x11/mkspecs/linux-g++ -I../PicCryptor -I/opt/qt-4.8.5-x11/include/QtCore -I/opt/qt-4.8.5-x11/include/QtGui -I/opt/qt-4.8.5-x11/include -I. -I. -I../PicCryptor -I.
LINK          = g++
LFLAGS        = -Wl,-rpath,/opt/qt-4.8.5-x11/lib
LIBS          = $(SUBLIBS)  -L/opt/qt-4.8.5-x11/lib -lQtGui -L/opt/qt-4.8.5-x11/lib -L/usr/X11R6/lib -lQtCore -lpthread 
AR            = ar cqs
RANLIB        = 
QMAKE         = /opt/qt-4.8.5-x11/bin/qmake
TAR           = tar -cf
COMPRESS      = gzip -9f
COPY          = cp -f
SED           = sed
COPY_FILE     = $(COPY)
COPY_DIR      = $(COPY) -r
STRIP         = strip
INSTALL_FILE  = install -m 644 -p
INSTALL_DIR   = $(COPY_DIR)
INSTALL_PROGRAM = install -m 755 -p
DEL_FILE      = rm -f
SYMLINK       = ln -f -s
DEL_DIR       = rmdir
MOVE          = mv -f
CHK_DIR_EXISTS= test -d
MKDIR         = mkdir -p

####### Output directory

OBJECTS_DIR   = ./

####### Files

SOURCES       = ../PicCryptor/main.cpp \
		../PicCryptor/mainwindow.cpp moc_mainwindow.cpp
OBJECTS       = main.o \
		mainwindow.o \
		moc_mainwindow.o
DIST          = /opt/qt-4.8.5-x11/mkspecs/common/unix.conf \
		/opt/qt-4.8.5-x11/mkspecs/common/linux.conf \
		/opt/qt-4.8.5-x11/mkspecs/common/gcc-base.conf \
		/opt/qt-4.8.5-x11/mkspecs/common/gcc-base-unix.conf \
		/opt/qt-4.8.5-x11/mkspecs/common/g++-base.conf \
		/opt/qt-4.8.5-x11/mkspecs/common/g++-unix.conf \
		/opt/qt-4.8.5-x11/mkspecs/qconfig.pri \
		/opt/qt-4.8.5-x11/mkspecs/features/qt_functions.prf \
		/opt/qt-4.8.5-x11/mkspecs/features/qt_config.prf \
		/opt/qt-4.8.5-x11/mkspecs/features/exclusive_builds.prf \
		/opt/qt-4.8.5-x11/mkspecs/features/default_pre.prf \
		/opt/qt-4.8.5-x11/mkspecs/features/debug.prf \
		/opt/qt-4.8.5-x11/mkspecs/features/default_post.prf \
		/opt/qt-4.8.5-x11/mkspecs/features/shared.prf \
		/opt/qt-4.8.5-x11/mkspecs/features/unix/gdb_dwarf_index.prf \
		/opt/qt-4.8.5-x11/mkspecs/features/warn_on.prf \
		/opt/qt-4.8.5-x11/mkspecs/features/qt.prf \
		/opt/qt-4.8.5-x11/mkspecs/features/unix/thread.prf \
		/opt/qt-4.8.5-x11/mkspecs/features/moc.prf \
		/opt/qt-4.8.5-x11/mkspecs/features/resources.prf \
		/opt/qt-4.8.5-x11/mkspecs/features/uic.prf \
		/opt/qt-4.8.5-x11/mkspecs/features/yacc.prf \
		/opt/qt-4.8.5-x11/mkspecs/features/lex.prf \
		/opt/qt-4.8.5-x11/mkspecs/features/include_source_dir.prf \
		../PicCryptor/PicCryptor.pro
QMAKE_TARGET  = PicCryptor
DESTDIR       = 
TARGET        = PicCryptor

first: all
####### Implicit rules

.SUFFIXES: .o .c .cpp .cc .cxx .C

.cpp.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.cc.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.cxx.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.C.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.c.o:
	$(CC) -c $(CFLAGS) $(INCPATH) -o "$@" "$<"

####### Build rules

all: Makefile $(TARGET)

$(TARGET): ui_mainwindow.h $(OBJECTS)  
	$(LINK) $(LFLAGS) -o $(TARGET) $(OBJECTS) $(OBJCOMP) $(LIBS)
	{ test -n "$(DESTDIR)" && DESTDIR="$(DESTDIR)" || DESTDIR=.; } && test $$(gdb --version | sed -e 's,[^0-9]\+\([0-9]\)\.\([0-9]\).*,\1\2,;q') -gt 72 && gdb --nx --batch --quiet -ex 'set confirm off' -ex "save gdb-index $$DESTDIR" -ex quit '$(TARGET)' && test -f $(TARGET).gdb-index && objcopy --add-section '.gdb_index=$(TARGET).gdb-index' --set-section-flags '.gdb_index=readonly' '$(TARGET)' '$(TARGET)' && rm -f $(TARGET).gdb-index || true

Makefile: ../PicCryptor/PicCryptor.pro  /opt/qt-4.8.5-x11/mkspecs/linux-g++/qmake.conf /opt/qt-4.8.5-x11/mkspecs/common/unix.conf \
		/opt/qt-4.8.5-x11/mkspecs/common/linux.conf \
		/opt/qt-4.8.5-x11/mkspecs/common/gcc-base.conf \
		/opt/qt-4.8.5-x11/mkspecs/common/gcc-base-unix.conf \
		/opt/qt-4.8.5-x11/mkspecs/common/g++-base.conf \
		/opt/qt-4.8.5-x11/mkspecs/common/g++-unix.conf \
		/opt/qt-4.8.5-x11/mkspecs/qconfig.pri \
		/opt/qt-4.8.5-x11/mkspecs/features/qt_functions.prf \
		/opt/qt-4.8.5-x11/mkspecs/features/qt_config.prf \
		/opt/qt-4.8.5-x11/mkspecs/features/exclusive_builds.prf \
		/opt/qt-4.8.5-x11/mkspecs/features/default_pre.prf \
		/opt/qt-4.8.5-x11/mkspecs/features/debug.prf \
		/opt/qt-4.8.5-x11/mkspecs/features/default_post.prf \
		/opt/qt-4.8.5-x11/mkspecs/features/shared.prf \
		/opt/qt-4.8.5-x11/mkspecs/features/unix/gdb_dwarf_index.prf \
		/opt/qt-4.8.5-x11/mkspecs/features/warn_on.prf \
		/opt/qt-4.8.5-x11/mkspecs/features/qt.prf \
		/opt/qt-4.8.5-x11/mkspecs/features/unix/thread.prf \
		/opt/qt-4.8.5-x11/mkspecs/features/moc.prf \
		/opt/qt-4.8.5-x11/mkspecs/features/resources.prf \
		/opt/qt-4.8.5-x11/mkspecs/features/uic.prf \
		/opt/qt-4.8.5-x11/mkspecs/features/yacc.prf \
		/opt/qt-4.8.5-x11/mkspecs/features/lex.prf \
		/opt/qt-4.8.5-x11/mkspecs/features/include_source_dir.prf \
		/opt/qt-4.8.5-x11/lib/libQtGui.prl \
		/opt/qt-4.8.5-x11/lib/libQtCore.prl
	$(QMAKE) -spec /opt/qt-4.8.5-x11/mkspecs/linux-g++ CONFIG+=debug -o Makefile ../PicCryptor/PicCryptor.pro
/opt/qt-4.8.5-x11/mkspecs/common/unix.conf:
/opt/qt-4.8.5-x11/mkspecs/common/linux.conf:
/opt/qt-4.8.5-x11/mkspecs/common/gcc-base.conf:
/opt/qt-4.8.5-x11/mkspecs/common/gcc-base-unix.conf:
/opt/qt-4.8.5-x11/mkspecs/common/g++-base.conf:
/opt/qt-4.8.5-x11/mkspecs/common/g++-unix.conf:
/opt/qt-4.8.5-x11/mkspecs/qconfig.pri:
/opt/qt-4.8.5-x11/mkspecs/features/qt_functions.prf:
/opt/qt-4.8.5-x11/mkspecs/features/qt_config.prf:
/opt/qt-4.8.5-x11/mkspecs/features/exclusive_builds.prf:
/opt/qt-4.8.5-x11/mkspecs/features/default_pre.prf:
/opt/qt-4.8.5-x11/mkspecs/features/debug.prf:
/opt/qt-4.8.5-x11/mkspecs/features/default_post.prf:
/opt/qt-4.8.5-x11/mkspecs/features/shared.prf:
/opt/qt-4.8.5-x11/mkspecs/features/unix/gdb_dwarf_index.prf:
/opt/qt-4.8.5-x11/mkspecs/features/warn_on.prf:
/opt/qt-4.8.5-x11/mkspecs/features/qt.prf:
/opt/qt-4.8.5-x11/mkspecs/features/unix/thread.prf:
/opt/qt-4.8.5-x11/mkspecs/features/moc.prf:
/opt/qt-4.8.5-x11/mkspecs/features/resources.prf:
/opt/qt-4.8.5-x11/mkspecs/features/uic.prf:
/opt/qt-4.8.5-x11/mkspecs/features/yacc.prf:
/opt/qt-4.8.5-x11/mkspecs/features/lex.prf:
/opt/qt-4.8.5-x11/mkspecs/features/include_source_dir.prf:
/opt/qt-4.8.5-x11/lib/libQtGui.prl:
/opt/qt-4.8.5-x11/lib/libQtCore.prl:
qmake:  FORCE
	@$(QMAKE) -spec /opt/qt-4.8.5-x11/mkspecs/linux-g++ CONFIG+=debug -o Makefile ../PicCryptor/PicCryptor.pro

dist: 
	@$(CHK_DIR_EXISTS) .tmp/PicCryptor1.0.0 || $(MKDIR) .tmp/PicCryptor1.0.0 
	$(COPY_FILE) --parents $(SOURCES) $(DIST) .tmp/PicCryptor1.0.0/ && $(COPY_FILE) --parents ../PicCryptor/mainwindow.h .tmp/PicCryptor1.0.0/ && $(COPY_FILE) --parents ../PicCryptor/main.cpp ../PicCryptor/mainwindow.cpp .tmp/PicCryptor1.0.0/ && $(COPY_FILE) --parents ../PicCryptor/mainwindow.ui .tmp/PicCryptor1.0.0/ && (cd `dirname .tmp/PicCryptor1.0.0` && $(TAR) PicCryptor1.0.0.tar PicCryptor1.0.0 && $(COMPRESS) PicCryptor1.0.0.tar) && $(MOVE) `dirname .tmp/PicCryptor1.0.0`/PicCryptor1.0.0.tar.gz . && $(DEL_FILE) -r .tmp/PicCryptor1.0.0


clean:compiler_clean 
	-$(DEL_FILE) $(OBJECTS)
	-$(DEL_FILE) *~ core *.core


####### Sub-libraries

distclean: clean
	-$(DEL_FILE) $(TARGET) 
	-$(DEL_FILE) Makefile


check: first

mocclean: compiler_moc_header_clean compiler_moc_source_clean

mocables: compiler_moc_header_make_all compiler_moc_source_make_all

compiler_moc_header_make_all: moc_mainwindow.cpp
compiler_moc_header_clean:
	-$(DEL_FILE) moc_mainwindow.cpp
moc_mainwindow.cpp: ../PicCryptor/mainwindow.h
	/opt/qt-4.8.5-x11/bin/moc $(DEFINES) $(INCPATH) ../PicCryptor/mainwindow.h -o moc_mainwindow.cpp

compiler_rcc_make_all:
compiler_rcc_clean:
compiler_image_collection_make_all: qmake_image_collection.cpp
compiler_image_collection_clean:
	-$(DEL_FILE) qmake_image_collection.cpp
compiler_moc_source_make_all:
compiler_moc_source_clean:
compiler_uic_make_all: ui_mainwindow.h
compiler_uic_clean:
	-$(DEL_FILE) ui_mainwindow.h
ui_mainwindow.h: ../PicCryptor/mainwindow.ui
	/opt/qt-4.8.5-x11/bin/uic ../PicCryptor/mainwindow.ui -o ui_mainwindow.h

compiler_yacc_decl_make_all:
compiler_yacc_decl_clean:
compiler_yacc_impl_make_all:
compiler_yacc_impl_clean:
compiler_lex_make_all:
compiler_lex_clean:
compiler_clean: compiler_moc_header_clean compiler_uic_clean 

####### Compile

main.o: ../PicCryptor/main.cpp ../PicCryptor/mainwindow.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o main.o ../PicCryptor/main.cpp

mainwindow.o: ../PicCryptor/mainwindow.cpp ../PicCryptor/mainwindow.h \
		ui_mainwindow.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o mainwindow.o ../PicCryptor/mainwindow.cpp

moc_mainwindow.o: moc_mainwindow.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_mainwindow.o moc_mainwindow.cpp

####### Install

install:   FORCE

uninstall:   FORCE

FORCE:


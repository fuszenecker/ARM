#-------------------------------------------------
#
# Project created by QtCreator 2011-03-31T13:33:52
#
#-------------------------------------------------

QT       -= core
QT       -= gui

TARGET = MemoryAllocator
CONFIG   += console
CONFIG   -= app_bundle

TEMPLATE = app


SOURCES += main.cpp \
    stress_test.cpp \
    other.cpp

HEADERS += \
    memory_allocator.h

CFLAGS += -DDEBUG

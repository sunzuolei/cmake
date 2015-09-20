TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

INCLUDEPATH += \
    ../f/core/hello/include \
    ../f/core/sqrt/include

SOURCES += \
    src/demo.cpp \
    ../f/core/hello/src/sayHello.cpp \
    ../f/core/sqrt/src/sqrt.cpp


HEADERS += \
    ../f/core/hello/include/sayHello.h \
    ../f/core/sqrt/include/sqrt.h

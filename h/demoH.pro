TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

INCLUDEPATH += \
    core/sqrt/include \
    core/hello/include

SOURCES += \
    core/hello/src/sayHello.cpp \
    core/sqrt/src/sqrt.cpp \
    core/test/testHelloSqrt.cpp

HEADERS += \
    core/hello/include/sayHello.h \
    core/sqrt/include/sqrt.h

TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        light.cpp \
        main.cpp \
        switch.cpp \
        wire.cpp

HEADERS += \
    light.h \
    switch.h \
    wire.h

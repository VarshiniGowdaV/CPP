TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        accelerate.cpp \
        break.cpp \
        car.cpp \
        engine.cpp \
        main.cpp \
        wheel.cpp

HEADERS += \
    accelerate.h \
    break.h \
    car.h \
    engine.h \
    wheel.h

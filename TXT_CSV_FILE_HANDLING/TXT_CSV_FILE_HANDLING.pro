TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        csv.cpp \
        fileoperation.cpp \
        main.cpp \
        student.cpp \
        studentmagageager.cpp \
        txt.cpp

HEADERS += \
    csv.h \
    fileoperation.h \
    student.h \
    studentmagageager.h \
    txt.h

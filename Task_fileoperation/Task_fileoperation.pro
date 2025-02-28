TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        fileoperation.cpp \
        main.cpp \
        readcsv.cpp \
        readjson.cpp \
        readxml.cpp \
        student.cpp \
        studentmanager.cpp

HEADERS += \
    fileoperation.h \
    readcsv.h \
    readjson.h \
    readxml.h \
    student.h \
    studentmanager.h

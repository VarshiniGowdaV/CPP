TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        csvdata.cpp \
        jsondata.cpp \
        main.cpp \
        student.cpp \
        studentmanagement.cpp \
        xmldata.cpp

HEADERS += \
    csvdata.h \
    jsondata.h \
    student.h \
    studentmanagement.h \
    xmldata.h

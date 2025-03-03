TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        csv.cpp \
        fileoperation.cpp \
        json.cpp \
        main.cpp \
        student.cpp \
        studentmanageager.cpp \
        xml.cpp

HEADERS += \
    csv.h \
    fileoperation.h \
    json.h \
    student.h \
    studentmanageager.h \
    xml.h

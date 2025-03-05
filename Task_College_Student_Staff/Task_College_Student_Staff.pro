TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        main.cpp \
        management.cpp \
        personaldetails.cpp \
        staff.cpp \
        student.cpp

HEADERS += \
    management.h \
    personaldetails.h \
    staff.h \
    student.h

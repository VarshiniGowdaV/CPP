TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        books.cpp \
        librarymanagement.cpp \
        librarystaff.cpp \
        main.cpp \
        student.cpp

HEADERS += \
    books.h \
    librarymanagement.h \
    librarystaff.h \
    student.h

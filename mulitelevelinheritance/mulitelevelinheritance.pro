TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        bankaccount.cpp \
        main.cpp \
        premiumsavingsaccount.cpp \
        savingsaccount.cpp

HEADERS += \
    bankaccount.h \
    premiumsavingsaccount.h \
    savingsaccount.h

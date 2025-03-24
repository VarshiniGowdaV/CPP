TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        cashpayment.cpp \
        customer.cpp \
        fileoperation.cpp \
        loginmanagement.cpp \
        main.cpp \
        onlinepayment.cpp \
        rentalbike.cpp \
        rentalcar.cpp \
        rentalvehicledetails.cpp \
        user.cpp \
        userfileoperation.cpp \
        vehiclemanager.cpp

HEADERS += \
    cashpayment.h \
    customer.h \
    fileoperation.h \
    loginmanagement.h \
    onlinepayment.h \
    rentalbike.h \
    rentalcar.h \
    rentalvehicledetails.h \
    user.h \
    userfileoperation.h \
    vehiclemanager.h

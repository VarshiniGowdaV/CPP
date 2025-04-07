TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        admin.cpp \
        cashpayment.cpp \
        customer.cpp \
        fileoperation.cpp \
        loginmanagement.cpp \
        main.cpp \
        onlinepayment.cpp \
        payment.cpp \
        rentalbike.cpp \
        rentalcar.cpp \
        rentalvehicledetails.cpp \
        user.cpp \
        vehiclemanager.cpp

HEADERS += \
    admin.h \
    cashpayment.h \
    customer.h \
    fileoperation.h \
    loginmanagement.h \
    onlinepayment.h \
    payment.h \
    rentalbike.h \
    rentalcar.h \
    rentalvehicledetails.h \
    user.h \
    vehiclemanager.h

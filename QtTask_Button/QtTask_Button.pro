QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    checkbox.cpp \
    dialog.cpp \
    errormessage.cpp \
    main.cpp \
    menubar.cpp \
    mybutton.cpp \
    radiobutton.cpp \
    scrollbar.cpp \
    spinbox.cpp \
    tabbar.cpp \
    toolbutton.cpp \
    widget.cpp

HEADERS += \
    checkbox.h \
    dialog.h \
    errormessage.h \
    menubar.h \
    mybutton.h \
    radiobutton.h \
    scrollbar.h \
    spinbox.h \
    tabbar.h \
    toolbutton.h \
    widget.h

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

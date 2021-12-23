QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    deleter.cpp \
    form.cpp \
    form1.cpp \
    main.cpp \
    search.cpp \
    viewer.cpp

HEADERS += \
    deleter.h \
    form.h \
    form1.h \
    search.h \
    viewer.h

FORMS += \
    deleter.ui \
    form.ui \
    form1.ui \
    search.ui \
    viewer.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

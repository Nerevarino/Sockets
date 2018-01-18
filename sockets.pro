TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    application.cpp \
    protocalfams.cpp \
    socktypes.cpp \
    ipprotocols.cpp

HEADERS += \
    application.h \
    protocalfams.h \
    socktypes.h \
    ipprotocols.h

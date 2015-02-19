TEMPLATE = app

QT += qml quick widgets
CONFIG += c++11

SOURCES += main.cpp \
    Attribute.cpp \
    Bonus.cpp \
    Sheet.cpp \
    ui/base/ui-loader.cpp

RESOURCES += qml.qrc \
    ui/ui.qrc

# Additional import path used to resolve QML modules in Qt Creator's code model
QML_IMPORT_PATH =

# Default rules for deployment.
include(deployment.pri)

HEADERS += \
    Attribute.h \
    Bonus.h \
    Sheet.h \
    ui/base/ui-loader.h

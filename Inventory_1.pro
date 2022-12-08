#-------------------------------------------------
#
# Project created by QtCreator 2022-12-08T14:58:34
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Inventory_1
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    item.cpp \
    itemdata.cpp \
    itemview.cpp \
    inventorydata.cpp \
    inventory.cpp\
    inventoryview.cpp \
    inventoryslot.cpp

HEADERS  += mainwindow.h \
    item.h \
    itemdata.h \
    itemview.h \
    inventorydata.h \
    inventory.h\
    inventoryview.h \
    inventoryslot.h

FORMS    += mainwindow.ui

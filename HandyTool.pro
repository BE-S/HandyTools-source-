QT       += core gui
QT       += printsupport

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11 qaxcontainer

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    dialog.cpp \
    editfile.cpp \
    instruction.cpp \
    main.cpp \
    mainwindow.cpp

HEADERS += \
    dialog.h \
    editfile.h \
    instruction.h \
    mainwindow.h

FORMS += \
    Instruction.ui \
    dialog.ui \
    editfile.ui \
    instruction.ui \
    mainwindow.ui

win32::RC_FILE = Icon.rc

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    Image.qrc

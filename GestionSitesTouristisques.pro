QT       += core gui
QT       +=sql
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

SOURCES += \
    connection.cpp \
    main.cpp \
    loginpage.cpp \
    siteAdmin/addsitebox.cpp \
    siteAdmin/mainwindowsite.cpp \
    siteAdmin/updatesitebox.cpp \
    stylesheet.cpp \
    userAdmin/confirmbox.cpp \
    userAdmin/mainwindowuser.cpp \
    userAdmin/showprofile.cpp \
    siteAdmin/addvisiteurbox.cpp \
    siteAdmin/ajoutvisite.cpp \
    siteAdmin/voirplusvisiteur.cpp \
    siteAdmin/updatevisiteurbox.cpp \
    siteAdmin/voirplussite.cpp \
    siteAdmin/modifboxvisite.cpp

HEADERS += \
    connection.h \
    loginpage.h \
    siteAdmin/addsitebox.h \
    siteAdmin/mainwindowsite.h \
    siteAdmin/updatesitebox.h \
    stylesheet.h \
    userAdmin/confirmbox.h \
    userAdmin/mainwindowuser.h \
    userAdmin/showprofile.h \
    siteAdmin/addvisiteurbox.h \
    siteAdmin/ajoutvisite.h \
    siteAdmin/voirplusvisiteur.h \
    siteAdmin/updatevisiteurbox.h \
    siteAdmin/voirplussite.h \
    siteAdmin/modifboxvisite.h

FORMS += \
    loginpage.ui \
    siteAdmin/addsitebox.ui \
    siteAdmin/mainwindowsite.ui \
    siteAdmin/updatesitebox.ui \
    userAdmin/confirmbox.ui \
    userAdmin/mainwindowuser.ui \
    userAdmin/showprofile.ui \
    siteAdmin/addvisiteurbox.ui \
    siteAdmin/ajoutvisite.ui \
    siteAdmin/voirplusvisiteur.ui \
    siteAdmin/updatevisiteurbox.ui \
    siteAdmin/voirplussite.ui \
    siteAdmin/modifboxvisite.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    icons.qrc \


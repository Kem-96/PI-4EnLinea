
QT += core gui widgets svg multimedia svgwidgets

TEMPLATE = app
TARGET = Conecta4
CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    src/Menu.cpp \
    src/VentanaJuego.cpp \
    src/Conecta4.cpp \
    src/main.cpp
    src/Konnect4.s
    src/macros.s

HEADERS += \
    src/Menu.hpp \
    src/VentanaJuego.hpp \
    src/Conecta4.hpp


RESOURCES += \
    assets/assets.qrc
  assets/play2.qrc

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

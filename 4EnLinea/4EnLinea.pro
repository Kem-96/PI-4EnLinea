
QT += core gui widgets svg multimedia svgwidgets

TEMPLATE = app
<<<<<<< Updated upstream
TARGET = Konnect4
=======
TARGET = connect4
>>>>>>> Stashed changes
CONFIG += c++17

QMAKE_EXTRA_COMPILERS += nasm
NASMEXTRAFLAGS = -f win64
OTHER_FILES += $$NASM_SOURCES
nasm.output = ${QMAKE_FILE_BASE}.o
nasm.commands = nasm $$NASMEXTRAFLAGS -o ${QMAKE_FILE_BASE}.o ${QMAKE_FILE_NAME}
nasm.input = NASM_SOURCES



# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

NASM_SOURCES = src/connect4.asm

SOURCES += \
    src/Instrucciones.cpp \
    src/Integrantes.cpp \
    src/BotonJuego.cpp \
    src/EscenaJuego.cpp \
    src/InicioJuego.cpp \
    src/Menu.cpp \
    src/VentanaJuego.cpp \
    src/Conecta4.cpp \
    src/main.cpp

HEADERS += \
    src/Instrucciones.hpp \
    src/Integrantes.hpp \
    src/BotonJuego.hpp \
    src/EscenaJuego.hpp \
    src/InicioJuego.hpp \
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

DISTFILES += \
    src/connect4.asm


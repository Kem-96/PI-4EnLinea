#include "Conecta4.hpp"
#include "VentanaJuego.hpp"

Conecta4::Conecta4(int& argc, char** argv)
    : QApplication{argc, argv}
{
    delete this->ventanaJuego;
}

Conecta4::~Conecta4()
{
}

int Conecta4::run()
{
    Q_ASSERT(this->ventanaJuego == nullptr);
    this->ventanaJuego = new VentanaJuego();
    Q_ASSERT(this->ventanaJuego);
    ventanaJuego->show();

    this->exec();
    return 0;
}

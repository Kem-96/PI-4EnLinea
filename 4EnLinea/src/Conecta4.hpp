#ifndef CONECTA4_HPP
#define CONECTA4_HPP

#include <QApplication>

class VentanaJuego;

class Conecta4 : public QApplication
{
    Q_OBJECT
    Q_DISABLE_COPY_MOVE(Conecta4)

protected:
    VentanaJuego* ventanaJuego = nullptr;

public:
    explicit Conecta4(int &argc, char **argv);
    ~Conecta4();
    int run();
};
#endif // CONECTA4_HPP

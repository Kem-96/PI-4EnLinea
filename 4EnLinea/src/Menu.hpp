#ifndef MENU_HPP
#define MENU_HPP

#include <QGraphicsScene>

class QGraphicsTextItem;
class QSvgRenderer;
class QGraphicsSvgItem;

class Menu : public QGraphicsScene
{
    Q_OBJECT
    Q_DISABLE_COPY_MOVE(Menu)//esto es para desabilitar copias vuelve al mismo menu

protected:
    QSvgRenderer* svgRenderer;
    QGraphicsTextItem* tituloJuego = nullptr;
    QGraphicsTextItem* instrucciones = nullptr;
    QGraphicsTextItem* integrantes = nullptr;
    QGraphicsSvgItem* botonInicio = nullptr;


public:
    explicit Menu(QSvgRenderer* svgRenderer, QObject* parent = nullptr);

protected:
    void crearEscena();


signals:

};

#endif // MENU_HPP

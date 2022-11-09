#ifndef ESCENAJUEGO_HPP
#define ESCENAJUEGO_HPP

#include <QGraphicsScene>

class QSvgRenderer;

//esta clase lo que hace es que el renderizador funcione para varias clases, factoriza codigo
class EscenaJuego : public QGraphicsScene
{
    Q_OBJECT
    Q_DISABLE_COPY_MOVE(EscenaJuego)

protected:
    QSvgRenderer* svgRenderer;

public:
    explicit EscenaJuego(QSvgRenderer* svgRenderer, QObject *parent = nullptr);
};

#endif // ESCENAJUEGO_HPP

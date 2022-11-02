#ifndef BOTONJUEGO_HPP
#define BOTONJUEGO_HPP

#include <QGraphicsSvgItem>

class BotonJuego : public QGraphicsSvgItem
{
    Q_OBJECT
public:
    explicit BotonJuego(QGraphicsItem *parentItem = nullptr);

signals:
 void clicked();

protected:
    void keyPressEvent(QKeyEvent *event) override;
    void mousePressEvent(QGraphicsSceneMouseEvent* event) override;

};

#endif // BOTONJUEGO_HPP

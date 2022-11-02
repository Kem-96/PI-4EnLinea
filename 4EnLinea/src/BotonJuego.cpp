#include <QGraphicsScene>
#include <QKeyEvent>
#include "BotonJuego.hpp"

BotonJuego::BotonJuego(QGraphicsItem *parentItem)
    : QGraphicsSvgItem{parentItem}
{
    //this->setFlags(QGraphicsItem::ItemIsSelectable | QGraphicsItem::ItemIsMovable);
    this->setFlags(QGraphicsItem::ItemIsFocusable);
    this->setFocus();
}

void BotonJuego::keyPressEvent(QKeyEvent *event)
{
    switch (event->key()) {
    case Qt::Key_Up:
        this->setPos(this->x(), this->y() - 5);
        break;
    }
}

void BotonJuego::mousePressEvent(QGraphicsSceneMouseEvent* event) {
  Q_UNUSED(event);
  emit this->clicked();
}


#include <QGraphicsScene>
#include <QKeyEvent>
#include "BotonJuego.hpp"

BotonJuego::BotonJuego(QGraphicsItem *parentItem)
    : QGraphicsSvgItem{parentItem}
{
    this->setFlags(QGraphicsItem::ItemIsFocusable);
    this->setFocus();
}


void BotonJuego::mousePressEvent(QGraphicsSceneMouseEvent* event) {
  Q_UNUSED(event);
  emit this->clicked();
}


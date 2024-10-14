#include "circularwidget.h"
#include <QPainter>

CircularWidget::CircularWidget(QWidget *parent)
    : QWidget{parent}

{
    setFixedSize(200,200);
}

void CircularWidget::paintEvent(QPaintEvent *event)
{
    QPainter painter (this);

    painter.setBrush(Qt::blue);

    QPen pen;
    pen.setColor(Qt::white);
    pen.setWidth(2);
    painter.setPen(pen);

    int radius = qMin(width(), height()) / 2;
    painter.drawEllipse(width()/2-radius,height()/2-radius,radius*2, radius*2);
}

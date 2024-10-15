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

    painter.setBrush(Qt::green);

    QPen pen;
    pen.setColor(Qt::black);
    pen.setWidth(2);
    painter.setPen(pen);

    int radius = qMin(width(), height()) / 2;
    painter.drawEllipse(width()/2-radius,height()/2-radius,radius*2, radius*2);
    QFont font = painter.font();
    font.setPointSize(52); // Размер шрифта
    painter.setFont(font);

    QString text = "BRAT"; // Текст, который вы хотите отобразить
    QRect textRect = QRect(0, 0, width(), height());

    // Размещаем текст по центру
    painter.drawText(textRect, Qt::AlignCenter, text);

}

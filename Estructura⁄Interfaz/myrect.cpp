#include "myrect.h"
//#include
MyRect::MyRect(QString value, int pos)
{
    yEnd = yEnd + pos;
    tex = value;
    setFlag(ItemIsMovable);
}

QRectF MyRect::boundingRect() const
{
    return QRectF(50,yEnd,100,15);
}

void MyRect::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    QRectF rect = boundingRect();
    QBrush brush(Qt::blue);

    painter->fillRect(rect,brush);
    painter->drawText(85,10+yEnd,tex);
    painter->drawLine(100,10+yEnd,100,60);
    painter->drawRect(rect);
}

void MyRect::setYEnd(int pos)
{
    yEnd = pos + yEnd;

}

int MyRect::getYEnd()
{
    return yEnd;
}

void MyRect::setYBeg(int pos)
{
    yBegin = -pos + yBegin;

}

int MyRect::getYBegin()
{
    return yBegin;
}

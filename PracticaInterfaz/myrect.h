#ifndef MYRECT_H
#define MYRECT_H
#include <QPainter>
#include <QGraphicsItem>
#include <QDebug>

class MyRect: public QGraphicsItem
{
public:
    MyRect(QString value, int ypos);
    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
    bool press = true;
    QString tex = "";
    int yEnd =30;
    int yBegin = -30;
    void setYEnd(int pos);
    int getYEnd();
    void setYBeg(int pos);
    int getYBegin();
};

#endif // MYRECT_H

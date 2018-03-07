#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <list.h>
#include <listc.h>
#include <listd.h>
#include <arbol.h>
#include <node.h>
#include <QtCore>
#include <QtGui>
#include <QGraphicsScene>
#include <myrect.h>
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
void setName(const QString &name);
//MyRect getNode(MyRect *name, QString vale, int pos);
    //template< class T>

    list ListS;
    listC ListC;
    listD ListD;
    Arbol arbol;
    bool listaSim = false;
    int largo = 10;
    int largo1 = -10;
    int largoC = 10;
    int largoC1 =-10;
    int largoD =10;
    int largoD1 = -10;
    QString name() const;
    QGraphicsScene *scene = new QGraphicsScene(this);
    QGraphicsRectItem *rectangle;
    QGraphicsEllipseItem *ellipse;
    QGraphicsTextItem *text;
    MyRect *rects;


private slots:
    void on_pushButton_clicked();


    void on_Estructura_activated(const QString &arg1);

    void on_Estructura_activated(int index);

    void on_Estructura_currentIndexChanged(int index);

    void on_DeleteB_clicked();

    void on_DeleteE_clicked();

    void on_PrintL_clicked();

    void on_DeleteP_clicked();

    void on_AddB_clicked();

    void on_AddE_clicked();

    void on_AddP_clicked();

    void on_SetV_clicked();

    void on_GetV_clicked();

    void on_AddT_clicked();

    void on_DeleteT_clicked();

    void on_PrintT_clicked();

    void on_lcdNumber_overflow();

private:
    Ui::MainWindow *ui;


};

#endif // MAINWINDOW_H

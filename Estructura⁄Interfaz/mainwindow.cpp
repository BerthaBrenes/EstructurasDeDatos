#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <list.h>
#include <QGraphicsRectItem>
#include <math.h>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QStringList *estructuras = new QStringList();
    estructuras->append("Lista Simple");
    estructuras->append("Lista Doble");
    estructuras->append("Lista Circular");
    estructuras->append("Arbol");
    ui->Estructura->addItems(*estructuras);
   // scene = new QGraphicsScene(this);
    ui->lienzo->setScene(scene);
    rects = new MyRect("pos1",10);





    //ellipse = scene->addEllipse(10,10,50,50,blackpen,blueBrush);






}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_pushButton_clicked()
{

QMessageBox::information(this,"Info", "putos");
}

void MainWindow::on_Estructura_activated(const QString &arg1)
{

}

void MainWindow::on_Estructura_activated(int index)
{

}

void MainWindow::on_Estructura_currentIndexChanged(int index)
{
    if(index == 0){
        //ListS = new list();
        ui->lienzo->windowTitleChanged("Lista Simple");
        scene->clear();
        ui->lcdNumber->display(0);
        ui->DeleteT->setEnabled(false);
        ui->AddT->setEnabled(false);
        ui->PrintT->setEnabled(false);
        ui->AddB->setEnabled(true);
        ui->AddE->setEnabled(true);
        ui->AddP->setEnabled(true);
        ui->DeleteB->setEnabled(true);
        ui->DeleteE->setEnabled(true);
        ui->DeleteP->setEnabled(true);
        ui->PrintL->setEnabled(true);
        ui->SetV->setEnabled(true);
        ui->GetV->setEnabled(true);
    }
    if(index == 1){
        ui->lienzo->windowTitleChanged("Lista Doble");
       // ListD = new listD();
        scene->clear();
        ui->lcdNumber->display(0);
        ui->DeleteT->setEnabled(false);
        ui->AddT->setEnabled(false);
        ui->PrintT->setEnabled(false);
        ui->AddB->setEnabled(true);
        ui->AddE->setEnabled(true);
        ui->AddP->setEnabled(true);
        ui->DeleteB->setEnabled(true);
        ui->DeleteE->setEnabled(true);
        ui->DeleteP->setEnabled(true);
        ui->PrintL->setEnabled(true);
        ui->SetV->setEnabled(true);
        ui->GetV->setEnabled(true);
    }
    if(index == 2){
       // *ListC = listC()
        scene->clear();
        ui->lcdNumber->display(0);
        ui->DeleteT->setEnabled(false);
        ui->AddT->setEnabled(false);
        ui->PrintT->setEnabled(false);
        ui->AddB->setEnabled(true);
        ui->AddE->setEnabled(true);
        ui->AddP->setEnabled(true);
        ui->DeleteB->setEnabled(true);
        ui->DeleteE->setEnabled(true);
        ui->DeleteP->setEnabled(true);
        ui->PrintL->setEnabled(true);
        ui->SetV->setEnabled(true);
        ui->GetV->setEnabled(true);
    }
    if(index == 3){
        //arbol = Arbol();
        scene->clear();
        ui->lcdNumber->display(0);
        ui->DeleteT->setEnabled(true);
        ui->AddT->setEnabled(true);
        ui->PrintT->setEnabled(true);
        ui->AddB->setEnabled(false);
        ui->AddE->setEnabled(false);
        ui->AddP->setEnabled(false);
        ui->DeleteB->setEnabled(false);
        ui->DeleteE->setEnabled(false);
        ui->DeleteP->setEnabled(false);
        ui->PrintL->setEnabled(false);
        ui->SetV->setEnabled(false);
        ui->GetV->setEnabled(false);

    }
}

void MainWindow::on_DeleteB_clicked()
{
    if(ui->Estructura->currentIndex() ==0){
       ListS.DeleteBegin();
       scene->clear();
       QBrush blueBrush(Qt::blue);
       QPen blackpen(Qt::black);
       blackpen.setWidth(2);
       int largoc = ListS.largo();
       int y = 30;
       int i = 0;
       while(i != largoc){
           rectangle = scene->addRect(50,y,80,10,blackpen,blueBrush);
           y = y +30;
           i++;
       }
       largo = y;
       ui->lcdNumber->display(ListS.largo());

    }
    if(ui->Estructura->currentIndex() ==1){
       ListD.DeleteBegin();
       scene->clear();
       QBrush blueBrush(Qt::green);
       QPen blackpen(Qt::black);
       blackpen.setWidth(2);
       int largoc = ListD.largo();
       int y = 30;
       int i = 0;
       while(i != largoc){
           rectangle = scene->addRect(50,y,80,10,blackpen,blueBrush);
           y = y +30;
           i++;
       }
       largoC = y;
       ui->lcdNumber->display(ListD.largo());
    }
    if(ui->Estructura->currentIndex() ==2){
        ListC.DeleteBegin();
        ListC.DeleteBegin();
        scene->clear();
        QBrush blueBrush(Qt::red);
        QPen blackpen(Qt::black);
        blackpen.setWidth(2);
        int largoc = ListD.largo();
        int y = 30;
        int i = 0;
        while(i != largoc){
            rectangle = scene->addRect(50,y,80,10,blackpen,blueBrush);
            y = y +30;
            i++;
        }
        largoD = y;
        ui->lcdNumber->display(ListC.largo());
     }


}

void MainWindow::on_DeleteE_clicked()
{
    if(ui->Estructura->currentIndex() ==0){
       ListS.DeletEnd();
       scene->clear();
       ui->lcdNumber->display(ListS.largo());
       QBrush blueBrush(Qt::blue);
       QPen blackpen(Qt::black);
       blackpen.setWidth(2);
       int largoc = ListS.largo();
       int y = 30;
       int i = 0;
       while(i != largoc){
           rectangle = scene->addRect(50,y,80,10,blackpen,blueBrush);
           y = y +30;
           i++;
       }
       largo = y;
    }
    if(ui->Estructura->currentIndex() ==1){
       ListD.DeletEnd();
       scene->clear();
       ui->lcdNumber->display(ListD.largo());
       QBrush blueBrush(Qt::green);
       QPen blackpen(Qt::black);
       blackpen.setWidth(2);
       int largoc = ListD.largo();
       int y = 30;
       int i = 0;
       while(i != largoc){
           rectangle = scene->addRect(50,y,80,10,blackpen,blueBrush);
           y = y +30;
           i++;
       }
       largoC = y;
    }
    if(ui->Estructura->currentIndex() ==2){
        ListC.DeletEnd();
        scene->clear();
        ui->lcdNumber->display(ListC.largo());
        QBrush blueBrush(Qt::red);
        QPen blackpen(Qt::black);
        blackpen.setWidth(2);
        int largoc = ListC.largo();
        int y = 30;
        int i = 0;
        while(i != largoc){
            rectangle = scene->addRect(50,y,80,10,blackpen,blueBrush);
            y = y +30;
            i++;
        }
        largoD = y;
     }
}

void MainWindow::on_PrintL_clicked()
{
    if(ui->Estructura->currentIndex() ==0){
       ListS.printList();
       int l = 0;
       int largoc = ListS.largo()-1;
       while(l != largoc){
           ui->lcdNumber->display(ListS.GetValue(l));
           l++;
       }

    }
    if(ui->Estructura->currentIndex() ==1){
       ListD.printList();
    }
    if(ui->Estructura->currentIndex() ==2){
        ListC.printList();
     }
}

void MainWindow::on_DeleteP_clicked()
{
    if(ui->Estructura->currentIndex() ==0){
       if(ui->Posicion->isEnabled() ){
           if(ui->Posicion->value() < ListS.largo()){
               ListS.DeleteNode(ui->Posicion->value());
               scene->clear();
               QBrush blueBrush(Qt::blue);
               QPen blackpen(Qt::black);
               blackpen.setWidth(2);
               int largoc = ListS.largo();
               int y = 30;
               int i = 0;
               while(i != largoc){
                   rectangle = scene->addRect(50,y,80,10,blackpen,blueBrush);
                   y = y +30;
                   i++;
               }
               largo = y;
               ui->lcdNumber->display(ListS.largo());
        }else{
                QMessageBox::information(this,"Info","la posicion a eliminar debe existir");
           }
       }
    }
    if(ui->Estructura->currentIndex() ==1){
        if(ui->Posicion->value() < ListD.largo()){
           ListD.DeleteNode(ui->Posicion->value());
           scene->clear();
           QBrush blueBrush(Qt::green);
           QPen blackpen(Qt::black);
           blackpen.setWidth(2);
           int largoc = ListD.largo();
           int y = 30;
           int i = 0;
           while(i != largoc){
               rectangle = scene->addRect(50,y,80,10,blackpen,blueBrush);
               y = y +30;
               i++;
           }
           largoC = y;
           ui->lcdNumber->display(ListD.largo());
    }else{
            QMessageBox::information(this,"Info","la posicion a eliminar debe existir");
        }
    }
    if(ui->Estructura->currentIndex() ==2){
         if(ui->Posicion->value() < ListC.largo()){
            ListC.DeleteNode(ui->Posicion->value());
            scene->clear();
            QBrush blueBrush(Qt::red);
            QPen blackpen(Qt::black);
            blackpen.setWidth(2);
            int largoc = ListC.largo();
            int y = 30;
            int i = 0;
            while(i != largoc){
                rectangle = scene->addRect(50,y,80,10,blackpen,blueBrush);
                y = y +30;
                i++;
            }
            largoD = y;
            ui->lcdNumber->display(ListC.largo());
     }else{
            QMessageBox::information(this,"Info","la posicion a eliminar debe existir");
        }
    }
}

void MainWindow::on_AddB_clicked()
{
    if(ui->valor->value() !=0){
        if(ui->Estructura->currentIndex() ==0){
            if(ui->Posicion->isEnabled() ){
                ListS.AddBegin(ui->valor->value());
                ui->lcdNumber->display(ListS.largo());
               // MyRect *rects2 = new MyRect(QString::number(ui->valor->value()),largo1);
                //scene->addItem(rects2);
                QBrush blueBrush(Qt::blue);
                QPen blackpen(Qt::black);
                blackpen.setWidth(2);
                rectangle = scene->addRect(50,largo1,80,10,blackpen,blueBrush);
                text = scene->addText(QString::number(ui->valor->value()));
                largo1 = -25+largo1;

            }
        }
        if(ui->Estructura->currentIndex() ==1){
            if(ui->Posicion->isEnabled() ){
                ListD.AddBegin(ui->valor->value());
                ui->lcdNumber->display(ListD.largo());
               // MyRect *rects2 = new MyRect(QString::number(ui->valor->value()),largo1);
                //scene->addItem(rects2);
                QBrush blueBrush(Qt::green);
                QPen blackpen(Qt::black);
                blackpen.setWidth(2);
                rectangle = scene->addRect(50,largoC1,80,10,blackpen,blueBrush);
                text = scene->addText(QString::number(ui->valor->value()));
                largoC1 = -25+largoC1;

            }
        }
        if(ui->Estructura->currentIndex() ==2){
            if(ui->Posicion->isEnabled() ){
                ListC.AddBegin(ui->valor->value());
                ui->lcdNumber->display(ListC.largo());
               // MyRect *rects2 = new MyRect(QString::number(ui->valor->value()),largo1);
                //scene->addItem(rects2);
                QBrush blueBrush(Qt::red);
                QPen blackpen(Qt::black);
                blackpen.setWidth(2);
                rectangle = scene->addRect(50,largoD1,80,10,blackpen,blueBrush);
                text = scene->addText(QString::number(ui->valor->value()));
                largoD1 = -25+largoD1;
            }
        }
    }else{

        QMessageBox::information(this,"Info","Porfavor ingrese un valor distinto de 0");
    }
}

void MainWindow::on_AddE_clicked()
{
    if(ui->valor->value() !=0){
        if(ui->Estructura->currentIndex() ==0){
            ListS.AddEnd(ui->valor->value());
            ui->lcdNumber->display(ListS.largo());
            //MyRect *rects1 = new MyRect(QString::number(ui->valor->value()),10+largo);
            //rects1->setYEnd(10);
            //scene->addItem(rects1);
            //largo = rects1->getYEnd();
            QBrush blueBrush(Qt::blue);
            QPen blackpen(Qt::black);
            blackpen.setWidth(2);
            rectangle = scene->addRect(50,largo,80,10,blackpen,blueBrush);
            largo = 25+largo;

        }
        if(ui->Estructura->currentIndex() ==1){
            ListD.AddEnd(ui->valor->value());
            ui->lcdNumber->display(ListD.largo());
            QBrush blueBrush(Qt::green);
            QPen blackpen(Qt::black);
            blackpen.setWidth(2);
            rectangle = scene->addRect(50,largoC,80,10,blackpen,blueBrush);
            largoC = 25+largoC;

        }
        if(ui->Estructura->currentIndex() ==2){
            ListC.AddEnd(ui->valor->value());
            ui->lcdNumber->display(ListC.largo());
            QBrush blueBrush(Qt::red);
            QPen blackpen(Qt::black);
            blackpen.setWidth(2);
            rectangle = scene->addRect(50,largoD,80,10,blackpen,blueBrush);
            largoD = 25+largoD;
        }
    }else{
        QMessageBox::information(this,"Info","Porfavor ingrese un valor distinto de 0");
    }
}

void MainWindow::on_AddP_clicked()
{


    if(ui->valor->value() !=0){
        if(ui->Estructura->currentIndex() ==0){
            if(ui->Posicion->value() < ListS.largo()){
              ListS.AddNode(ui->valor->value(),ui->Posicion->value());
              scene->clear();
              QBrush blueBrush(Qt::blue);
              QPen blackpen(Qt::black);
              blackpen.setWidth(2);
              int largoc = ListS.largo();
              int y = 30;
              int i = 0;
              while(i != largoc){
                  rectangle = scene->addRect(50,y,80,10,blackpen,blueBrush);
                  y = y +30;
                  i++;
              }
              largo = y;
              ui->lcdNumber->display(ListS.largo());
            }else{
                QMessageBox::information(this,"Info","La posicion que quiere ingresar no existe");
            }
        }
        if(ui->Estructura->currentIndex() ==1){
            if(ui->Posicion->value() < ListD.largo()){
                ListD.AddNode(ui->valor->value(),ui->Posicion->value());
                scene->clear();
                QBrush blueBrush(Qt::green);
                QPen blackpen(Qt::black);
                blackpen.setWidth(2);
                int largoc = ListD.largo();
                int y = 30;
                int i = 0;
                while(i != largoc){
                    rectangle = scene->addRect(50,y,80,10,blackpen,blueBrush);
                    y = y +30;
                    i++;
                }
                largoC = y;
                ui->lcdNumber->display(ListD.largo());
            }else{
                QMessageBox::information(this,"Info","La posicion que quiere ingresar no existe");
            }
        }
        if(ui->Estructura->currentIndex() ==2){
            if(ui->Posicion->value()< ListC.largo()){
                ListC.AddNode(ui->valor->value(),ui->Posicion->value());
                scene->clear();
                QBrush blueBrush(Qt::green);
                QPen blackpen(Qt::black);
                blackpen.setWidth(2);
                int largoc = ListC.largo();
                int y = 30;
                int i = 0;
                while(i != largoc){
                    rectangle = scene->addRect(50,y,80,10,blackpen,blueBrush);
                    y = y +30;
                    i++;
                }
                largoD = y;
                ui->lcdNumber->display(ListC.largo());
            }else{
                QMessageBox::information(this,"Info","La posicion que quiere ingresar no existe");
            }
        }
    }else{
        QMessageBox::information(this,"Info","Porfavor ingrese un valor distinto de 0");
    }
}

void MainWindow::on_SetV_clicked()
{
    if(ui->valor->value() !=0){
        if(ui->Estructura->currentIndex() ==0){
           if(ui->Posicion->isEnabled() ){
               ListS.setValue(ui->valor->value(),ui->Posicion->value());
               ui->lcdNumber->display(ListS.GetValue(ui->Posicion->value()));
           }
        }
        if(ui->Estructura->currentIndex() ==1){
            if(ui->Posicion->isEnabled() ){
                ListD.setValue(ui->valor->value(),ui->Posicion->value());
                 ui->lcdNumber->display(ListD.GetValue(ui->Posicion->value()));
            }
        }
        if(ui->Estructura->currentIndex() ==2){
            if(ui->Posicion->isEnabled() ){
                ListC.setValue(ui->valor->value(),ui->Posicion->value());
                 ui->lcdNumber->display(ListC.GetValue(ui->Posicion->value()));
            }
        }
    }else{
        QMessageBox::information(this,"Info","Porfavor ingrese un valor distinto de 0");
    }
}

void MainWindow::on_GetV_clicked()
{
    if(ui->Estructura->currentIndex() ==0){
        if(ui->Posicion->isEnabled() ){
            ListS.GetValue(ui->Posicion->value());
            ui->lcdNumber->display(ListS.GetValue(ui->Posicion->value()));
        }
    }
    if(ui->Estructura->currentIndex() ==1){
        if(ui->Posicion->isEnabled() ){
            ListD.GetValue(ui->Posicion->value());
            ui->lcdNumber->display(ListD.GetValue(ui->Posicion->value()));
        }
    }
    if(ui->Estructura->currentIndex() ==2){
        if(ui->Posicion->isEnabled() ){
            ListC.GetValue(ui->Posicion->value());
             ui->lcdNumber->display(ListC.GetValue(ui->Posicion->value()));
        }
    }
}

void MainWindow::on_AddT_clicked()
{
    if(ui->valor->value() != 0){
        arbol.Add(ui->valor->value());

    }
}

void MainWindow::on_DeleteT_clicked()
{
    arbol.Delete(ui->valor->value());
}

void MainWindow::on_PrintT_clicked()
{
    arbol.Print();
}

void MainWindow::on_lcdNumber_overflow()
{

}

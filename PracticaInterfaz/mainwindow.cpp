#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <list.h>

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

    ui->comboBox->addItems(*estructuras);


}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{

QMessageBox::information(this,"Info", "putos");
}
//para QMessageBox::critical(this,"Info", "Thiaisud");
//about
//aboutQt
//critical
// information
//question
//warning

void MainWindow::on_spinBox_valueChanged(int arg1)
{

}

void MainWindow::on_spinBox_editingFinished()
{

    QSpinBox *price = new QSpinBox;
    price = ui->spinBox;
    //ListS.AddBegin(45);
    //ListS.AddBegin(8);
    //ListS.AddBegin(7);
    price->setRange(0, (ListS->largo()-1));
}





void MainWindow::on_comboBox_activated(const QString &arg1)
{

}

void MainWindow::on_comboBox_activated(int index)
{
    switch(index){
    case 0:
        QMessageBox::critical(this, "valor",QString::number(index));
        ListS = new list();
    case 1:
        QMessageBox::critical(this, "valor",QString::number(index));
    case 2:
        QMessageBox::critical(this, "valor",QString::number(index));
    }
}

void MainWindow::on_comboBox_2_currentIndexChanged(const QString &arg1)
{
    QMessageBox::critical(this, "valor",arg1);

}

#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("canculator");
    this->setMaximumSize(583,185);
    this->setMinimumSize(583,185);
    this->move(0,1900-185);
    //QObject::connect(ui->calButton,SIGNAL(clicked()),this,SLOT(canculators()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_calButton_clicked()
{
    int firstnum=ui->infolineEdit_1->text().toInt();
    int secondnum=ui->infolineEdit_2->text().toInt();
    //int result=0;
    if(ui->calcomboBox->currentIndex()==0)
    {
        int result=firstnum+secondnum;
        ui->resultlineEdit_3->setText(QString::number(result));
        QMessageBox::information(this,"result",QString::number(result));
        return;
    }
    else if(ui->calcomboBox->currentIndex()==1)
    {
        int result=firstnum-secondnum;
        ui->resultlineEdit_3->setText(QString::number(result));
        QMessageBox::information(this,"result",QString::number(result));
        return;
    }
    else if(ui->calcomboBox->currentIndex()==2)
    {
        int result=firstnum*secondnum;
        ui->resultlineEdit_3->setText(QString::number(result));
        QMessageBox::information(this,"result",QString::number(result));
        return;
    }
    else if(ui->calcomboBox->currentIndex()==3)
    {
        if(secondnum==0)
        {
            QMessageBox::warning(this,"Error message!","Second num can not be zero!");
            return;
        }
        else
        {
            int result=firstnum/secondnum;
            ui->resultlineEdit_3->setText(QString::number(result));
            QMessageBox::information(this,"result",QString::number(result));
            return;
        }

    }

}

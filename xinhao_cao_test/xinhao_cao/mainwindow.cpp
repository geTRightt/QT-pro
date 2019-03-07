#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QObject::connect(ui->changeTitleButton,SIGNAL(clicked()),this,SLOT(changeTitleSlot()));
    QObject::connect(ui->closeButton,SIGNAL(clicked()),qApp,SLOT(quit()));
   // QObject::connect(ui->badboyButton,SIGNAL(clicked()),this,SIGNAL(titlechangesignal()));
    QObject::connect(this,SIGNAL(titlechangesignal(QString)),this,SLOT(changeTitleSlot2(QString)));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::changeTitleSlot()
{
    this->setWindowTitle("Hello World!!");
}

void MainWindow::changeTitleSlot2(QString context)
{
    this->setWindowTitle(context);
}

void MainWindow::on_badboyButton_clicked()
{
    qDebug()<<"cust Button clicked";
    emit this->titlechangesignal("I am a badboy");
}

void MainWindow::on_testButton_clicked()
{
    qDebug()<<"test success!!";// no connect
}

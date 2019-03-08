#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    this->move(0,1600-272);//
    this->setMaximumSize(480,272);
    this->setMinimumSize(480,272);/*similar code: resize(480,272)*/
    QObject::connect(ui->cancelButton,SIGNAL(clicked(bool)),qApp,SLOT(quit()));
}

Widget::~Widget()
{
    delete ui;
}

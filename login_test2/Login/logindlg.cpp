#include "logindlg.h"
#include "ui_logindlg.h"

loginDlg::loginDlg(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::loginDlg)
{
    ui->setupUi(this);
    this->setWindowTitle("LOGIN...");
    this->move(0,1600-272);

    this->setMaximumSize(480,272);
    this->setMinimumSize(480,272);/*similar code: resize(480,272)*/


    //QObject::connect(ui->cancelButton,SIGNAL(clicked(bool)),qApp,SLOT(quit()));
}

loginDlg::~loginDlg()
{
    delete ui;
}

void loginDlg::on_loginButton_clicked()
{
    if(ui->namelineEdit->text().trimmed()==tr("wj") && ui->passwdlineEdit->text().trimmed()==tr("123"))
     {
       QDialog::accept();
    }
    else
    {
        QMessageBox::warning(this,"Waring","Please enter right name and passwd!");
    }

}

void loginDlg::on_setButton_clicked()
{
    view=new setDlg(this);
    view->show();
}

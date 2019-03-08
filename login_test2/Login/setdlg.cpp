#include "setdlg.h"
#include "ui_setdlg.h"

setDlg::setDlg(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::setDlg)
{
    ui->setupUi(this);
    this->setWindowTitle("set usr and passwd..");
    this->move(0,1600-272);

    this->setMaximumSize(480,272);
    this->setMinimumSize(480,272);/*similar code: resize(480,272)*/
}

setDlg::~setDlg()
{
    delete ui;
}

void setDlg::on_confirmButton_clicked()
{
    if(ui->newusrlineEdit->text()==tr("")&&ui->newpasswdlineEdit->text()==tr(""))
    {
        QMessageBox::warning(this,"Error input","Please enter valid new usrname and new passwd!");
    }
    else
    {
        close();
    }
}

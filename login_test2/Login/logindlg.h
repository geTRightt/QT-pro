#ifndef LOGINDLG_H
#define LOGINDLG_H

#include <QDialog>
#include <QMessageBox>
#include <QString>
#include <QSize>
#include "setdlg.h"

namespace Ui {
class loginDlg;
}

class loginDlg : public QDialog
{
    Q_OBJECT

public:
    explicit loginDlg(QWidget *parent = 0);
    ~loginDlg();
public slots:
    void on_loginButton_clicked();
    void on_setButton_clicked();

private:
    Ui::loginDlg *ui;
    setDlg *view;
};

#endif // LOGINDLG_H

#ifndef SETDLG_H
#define SETDLG_H

#include <QDialog>
#include <QMessageBox>

namespace Ui {
class setDlg;
}

class setDlg : public QDialog
{
    Q_OBJECT

public:
    explicit setDlg(QWidget *parent = 0);
    ~setDlg();
public slots:
    void on_confirmButton_clicked();

private:
    Ui::setDlg *ui;
};

#endif // SETDLG_H

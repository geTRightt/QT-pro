#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QDebug>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

//custom slot
private slots:
    void changeTitleSlot();
    void changeTitleSlot2(QString);
    void on_testButton_clicked();//test on_pushButton_clicked
    void on_badboyButton_clicked();

signals:
    void titlechangesignal(QString);

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H

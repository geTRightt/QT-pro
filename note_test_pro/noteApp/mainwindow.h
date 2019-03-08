#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDebug>
#include <QFile>
#include <QFileDialog>
#include <QDir>
#include <QTextStream>
#include <QMessageBox>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
public slots:
    void FileNewSlot();
    void FileOpenSlot();
    void FileSaveSlot();
    //void on_actionQuit_Q_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H

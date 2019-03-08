#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QObject::connect(ui->actionQuit_Q,SIGNAL(triggered(bool)),qApp,SLOT(quit()));
    QObject::connect(ui->actionNew_N,SIGNAL(triggered(bool)),this,SLOT(FileNewSlot()));
    QObject::connect(ui->actionOpen_O,SIGNAL(triggered(bool)),this,SLOT(FileOpenSlot()));
    QObject::connect(ui->actionSave_S,SIGNAL(triggered(bool)),this,SLOT(FileSaveSlot()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::FileNewSlot()
{
    if(ui->textEdit->document()->isModified())
    {
        qDebug("document modified!!");
        this->setWindowTitle("Modified");
    }
    else
    {
        qDebug("document not modified!!");
        this->setWindowTitle("not Modified");
    }
}

void MainWindow::FileOpenSlot()
{
    QString fileName=QFileDialog::getOpenFileName(this,"Open File",QDir::currentPath());
    qDebug()<<"ileName is:"<<fileName;
    if(fileName.isEmpty())
    {
        QMessageBox::information(this,"Error Message!","Please enter file Name!");
        return;
    }
    QFile *file=new QFile;
    file->setFileName(fileName);
    bool ok=file->open(QIODevice::ReadOnly);
    if(ok)
    {
        QTextStream in(file);
        ui->textEdit->setText(in.readAll());
        file->close();
        delete file;
    }
    else
    {
        QMessageBox::information(this,"Error Message!","Open file failed!"+file->errorString());
        return;
    }
}

void MainWindow::FileSaveSlot()
{
    QString fileName=QFileDialog::getSaveFileName(this,"Open File",QDir::currentPath());
    qDebug()<<"ileName is:"<<fileName;
    if(fileName.isEmpty())
    {
        QMessageBox::information(this,"Error Message!","Please choose a file!");
        return;
    }
    QFile *file=new QFile;
    file->setFileName(fileName);
    bool ok=file->open(QIODevice::WriteOnly);
    if(ok)
    {
        QTextStream out(file);
        out<<ui->textEdit->toPlainText();
        file->close();
        delete file;
    }
    else
    {
        QMessageBox::information(this,"Error Message!","Open file failed!"+file->errorString());
        return;
    }
}




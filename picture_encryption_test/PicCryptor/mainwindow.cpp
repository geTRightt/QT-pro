#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QObject::connect(ui->actionQuit_Q,SIGNAL(triggered(bool)),qApp,SLOT(quit()));
    QObject::connect(ui->actionOpen_O,SIGNAL(triggered(bool)),this,SLOT(FileOpenSlot()));
    QObject::connect(ui->actionSave_S,SIGNAL(triggered(bool)),this,SLOT(FileSaveSlot()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::FileOpenSlot()
{
    QString fileName=QFileDialog::getOpenFileName(this,"Open File",QDir::currentPath());
    //qDebug()<<"FileName is:"<<fileName;
    if(fileName.isEmpty())
    {
        QMessageBox::information(this,"Error Message!","Please enter file Name!");
        return;
    }
    QImage image;
        if (!image.load(fileName)) {
            QMessageBox::information(this, tr("Error"), tr("Open file error"));
            return ;
        }

        QPixmap pixmap = QPixmap::fromImage(image);

        QSize imageSize = pixmap.size();    /*
        //ui->imageLabel->resize(imageSize);   *size control plan1
        //ui->imageLabel->setPixmap(pixmap);   */

        int with = ui->imageLabel->width();                                                           //
        int high =ui->imageLabel->height();                                                           //
        QPixmap fitpixmap = pixmap.scaled(with,high,Qt::KeepAspectRatio,Qt::SmoothTransformation);    //
        //QPixmap fitpixmap = pixmap.scaled(with,high,Qt::IgnoreAspectRatio,Qt::SmoothTransformation);//size control plan2
        ui->imageLabel->setAlignment(Qt::AlignCenter);                                                //
         ui->imageLabel->setPixmap(fitpixmap);                                                        //

        //ui->imageLabel->setPixmap(pixmap.scaled(ui->imageLabel->size()));/*size control plan3*/

        //qDebug() << "filname: " << filename;

        //setWindowTitle(QFileInfo(fileName).fileName() + tr(" - imageViewer"));

}
void MainWindow::FileSaveSlot()
{
    QString fileName=QFileDialog::getSaveFileName(this,"Save File",QDir::currentPath());
    //qDebug()<<"FileName is:"<<fileName;
    if(fileName.isEmpty())
    {
        QMessageBox::information(this,"Error Message!","Please enter file Name!");
        return;
    }

    ui->imageLabel->pixmap()->save(fileName);
}

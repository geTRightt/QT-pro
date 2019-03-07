#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("Running");//更改窗口标题
    this->setMaximumSize(497,209);//固定窗口大小
    this->setMinimumSize(497,209);
    this->move(0,1600-209);//使窗口固定在左下角
    ui->confirmButton->setEnabled(false);//使confirm按钮失效
    QObject::connect(ui->enterlineEdit,SIGNAL(textEdited(QString)),this,SLOT(confirmButtonEnabel(QString)));//连接：当lineEditor中有输入时，confirm按钮生效
    QObject::connect(ui->cancelButton,SIGNAL(clicked()),qApp,SLOT(quit()));//退出程序
    QObject::connect(ui->enterlineEdit,SIGNAL(returnPressed()),this,SLOT(on_confirmButton_clicked()));//confirmButton的回车信号连接到槽中，使回车操作生效
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::confirmButtonEnabel(QString)//confirm按钮生效槽
{
    ui->confirmButton->setEnabled(true);
}

void MainWindow::on_confirmButton_clicked()//打开应用程序槽
{
    qDebug()<<"running...";
    /*QProcess *myProcess = new QProcess(parent);
     myProcess->start(program, arguments);*/
    QProcess *process = new QProcess(this);
    //QString program = "/home/wj/MyProject/Qt_project/xinhao_cao_test/build-xinhao_cao-Desktop-Debug/./xinhao_cao";//当前程序文件路径为默认路径，打开其他程序需要全路径
    QString startProgram = ui->enterlineEdit->text();
    //process->start(program);
    process->start(startProgram.trimmed());
    //ui->enterlineEdit->clear();
    //this->close();
}

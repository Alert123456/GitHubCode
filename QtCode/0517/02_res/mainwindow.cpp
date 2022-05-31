#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

//    ui->actionNew->setIcon(QIcon("C:/Users/Albert/Desktop/1.jpg"));
    //使用添加Qt资源" ：+ 前缀名+ 文件名"
    ui->actionNew->setIcon(QIcon(":/1.jpg"));
    ui->actionOpen->setIcon(QIcon(":/2.jpg"));
}

MainWindow::~MainWindow()
{
    delete ui;
}

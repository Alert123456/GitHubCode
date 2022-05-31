#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QMovie>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //栈空间使用

    //scrolArea 按扭
    //设置默认定位
    ui->stackedWidget->setCurrentIndex(1);
    connect(ui->btn_ScrolArea, SIGNAL( clicked() ), this, SLOT( explain1() ) );
    connect(ui->btn_TabWidget, SIGNAL( clicked() ), this, SLOT( explain2() ) );
    connect(ui->btn_ToolBox, SIGNAL( clicked() ), this, SLOT( explain3() ) );

    //下拉框
    ui->comboBox->addItem("宝马");
    ui->comboBox->addItem("奔驰");
    ui->comboBox->addItem("拖拉机");

    connect(ui->pbt_select,SIGNAL( clicked() ),this, SLOT( explain3() ) );

    //利用QLable 显示名片
    ui->lbl_Image->setPixmap(QPixmap("://C:/Users/Albert/Desktop/1.jpg"));

    //利用QLable 显示动图(.gif)
    QMovie * movie = new QMovie("");
    ui->lbl_movie->setMovie(movie);
    //开始运动
    movie->start();
}

void MainWindow::explain1()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void MainWindow::explain2()
{
    ui->stackedWidget->setCurrentIndex(2);
}

void MainWindow::explain3()
{
    //ui->stackedWidget->setCurrentIndex(0);
    ui->comboBox->setCurrentIndex(2);
}

MainWindow::~MainWindow()
{
    delete ui;
}

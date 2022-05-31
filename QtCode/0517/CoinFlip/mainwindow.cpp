#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPainter>
#include "mypushbutton.h"
#include <QTimer>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //设置固定大小
    this->setFixedSize(320,588);
    //设置应用图片
    this->setWindowIcon(QPixmap("://res/Coin0001.png"));
    //设置窗口标题
    this->setWindowTitle("小健带你翻金币");
    //关闭功能
    connect(ui->actionActionQuit,SIGNAL(triggered()),this,SLOT(close()));
    //准备开始按钮的音效
    startSound = new QSound("://res/TapButtonSound.wav",this);
    //开始按钮
    MyPushButton * startBtn = new MyPushButton("://res/MenuSceneStartButton.png");
    startBtn->setParent(this);
    startBtn->move(this->width()*0.5-startBtn->width()*0.5, this->height()*0.7);
    chooseScene = new chooselevelscene;

    //监听选择关卡的返回信号
    connect(chooseScene,SIGNAL(chooseSceneBack()),this,SLOT(choiceLevel()) );

    connect(startBtn,SIGNAL(clicked()),startBtn,SLOT(cartoon()) );
    connect(startBtn,SIGNAL(clicked()),this,SLOT(startState()) );
}

void MainWindow::choiceLevel()
{
    this->setGeometry(chooseScene->geometry());
    this->show();
    this->chooseScene->hide();
}
void MainWindow::startState()
{
    startSound->play();
    //延时进入到新窗口
    QTimer::singleShot(500,this,SLOT(toNewPlot()));
}
void MainWindow::toNewPlot()
{
    //设置chooseScene场景位置
    chooseScene->setGeometry(this->geometry());
    this->hide();
    this->chooseScene->show();


}
void MainWindow::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
    QPixmap pix;
    pix.load("://res/PlayLevelSceneBg.png");
    painter.drawPixmap(0,0,this->width(),this->height(),pix);

    //画背景的图标
    pix.load("://res/Title.png");
    pix = pix.scaled(pix.width()*0.5,pix.height()*0.5);//按比例缩放

    painter.drawPixmap(10,30,pix);
}

MainWindow::~MainWindow()
{
    delete ui;
}


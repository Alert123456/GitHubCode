#include "chooselevelscene.h"
#include <QMenuBar>
#include <QPainter>
#include "mypushbutton.h"
#include <QTimer>
#include <QLabel>
#include <QString>
#include <QDebug>
chooselevelscene::chooselevelscene(QWidget *parent) :
    QMainWindow(parent)
{
    //配置选择关卡场景
    this->setFixedSize(320,588);
    //设置图标
    this->setWindowIcon(QPixmap("://res/Coin0001.png"));
    //设置标题
    this->setWindowTitle("选择关卡场景");
    //创建菜单栏
    QMenuBar *bar = menuBar();
    setMenuBar(bar);
    //创建开始菜单
    QMenu * startMenu = bar->addMenu("开始");
    //创建退出 菜单栏
    QAction * quitAction = startMenu->addAction("退出");
    //点击退出 实现退出游戏
    connect(quitAction,SIGNAL(triggered()),this,SLOT(close()) );
    //选择关卡按钮音效
    chooseSound = new QSound("://res/TapButtonSound.wav",this);
    //返回按钮音效
    backSound = new QSound("://res/BackButtonSound.wav",this);

    //返回按钮
    MyPushButton * backBtn = new MyPushButton("://res/BackButton.png","://res/BackButtonSelected.png");
    backBtn->setParent(this);
    backBtn->move(this->width() - backBtn->width(),this->height()-backBtn->height());
    connect(backBtn,SIGNAL(clicked()),this,SLOT(explain4()) );
    //创建选择关卡的按钮
    for( int Num = 0; Num < 20; Num++)
    {
        MyPushButton * menuBtn = new MyPushButton("://res/LevelIcon.png");
        menuBtn->setParent(this);
        menuBtn->setObjectName(QString::number(Num+1));
        menuBtn->move(25 + Num%4 * 70, 130 + Num/4 * 70);

        connect(menuBtn,SIGNAL(clicked()),this,SLOT(explain6()) );


        QLabel * label = new QLabel;
        label->setParent(this);
        label->setFixedSize(menuBtn->width(),menuBtn->height());
        label->setText(QString::number(Num+1));
        label->move(25 + Num%4 * 70, 130 + Num/4 * 70);
        //设置label的对齐方式
        label->setAlignment(Qt::AlignHCenter | Qt::AlignVCenter);
        //设置鼠标进行穿透
        label->setAttribute(Qt::WA_TransparentForMouseEvents);
    }
    qDebug() << "创建chooselevelscene";
}
void chooselevelscene::explain6()
{
    //播放选关关卡音效
    chooseSound->play();

    QString BtnName = sender()->objectName();
    QString str = QString("您选择的是第" + BtnName +"关");
    qDebug() << str;

    //进入到游戏场景
    this->hide();//将选关场景隐藏掉
    play = new PlayScene(BtnName.toInt());
    //设置游戏场景的初始位置
    play->setGeometry(this->geometry());
    play->show();//显示游戏场景


    connect(play,SIGNAL(chooseSelevelScene()),this,SLOT(explain9()) );
}
void chooselevelscene::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
    QPixmap pix;
    pix.load("://res/OtherSceneBg.png");
    painter.drawPixmap(0,0,this->width(),this->height(),pix);

    pix.load("://res/Title.png");
    painter.drawPixmap((this->width() - pix.width())*0.5,30,pix.width(),pix.height(),pix);
}
void chooselevelscene::explain3()
{
    emit this->chooseSceneBack();
}
void chooselevelscene::explain4()
{
    //播放返回按钮的音效
    backSound->play();
    //延时返回
    QTimer::singleShot(500,this,SLOT(explain3()));
}
void chooselevelscene::explain9()
{
    this->setGeometry(play->geometry());
    this->show();
    delete play;
    play = NULL;
}

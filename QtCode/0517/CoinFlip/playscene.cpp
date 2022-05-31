#include "playscene.h"
#include <QDebug>
#include <QMenuBar>
#include <QAction>
#include <QPainter>
#include "mypushbutton.h"
#include <QTimer>
#include <QLabel>
#include "mycoin.h"
#include "dataconfig.h"
#include <QPropertyAnimation>
//PlayScene::PlayScene(QWidget *parent) :
//    QMainWindow(parent)
//{
//}
PlayScene::PlayScene (int levelNum)
{
    QString str = QString("进入了第 %1 关").arg(levelNum);
    qDebug() << str;
    this->levelIndex = levelNum;

    //初始化游戏场景
    //设定固定大小
    this->setFixedSize(320,588);
    //设置图标
    this->setWindowIcon(QPixmap("://res/Coin0001.png"));
    //设置标题
    this->setWindowTitle("翻金币场景");
    //创建菜单栏
    QMenuBar *bar = menuBar();
    setMenuBar(bar);
    //创建开始菜单
    QMenu * startMenu = bar->addMenu("开始");
    //创建退出 菜单栏
    QAction * quitAction = startMenu->addAction("退出");
    //点击退出 实现退出游戏
    connect(quitAction,SIGNAL(triggered()),this,SLOT(close()) );
    //添加音效资源
    backSound = new QSound("://res/BackButtonSound.wav",this);
    filpSound = new QSound("://res/ConFlipSound.wav",this);
    winSound = new QSound("://res/LevelWinSound.wav",this);
    //返回按钮
    MyPushButton * backBtn = new MyPushButton("://res/BackButton.png","://res/BackButtonSelected.png");
    backBtn->setParent(this);
    backBtn->move(this->width() - backBtn->width(),this->height()-backBtn->height());
    connect(backBtn,SIGNAL(clicked()),this,SLOT(backState()) );
    //显示当前关卡号
    QLabel * label = new QLabel;
    label->setParent(this);
    QFont font;
    font.setFamily("华文新魏");
    font.setPointSize(20);
    //将字体设置到label中
    label->setFont(font);
    QString str1 = QString("Level: %1").arg(this->levelIndex);
    label->setText(str1);
    label->setGeometry(30, this->height()-50, 120, 50);

    //初始化每个关卡的二维数组
    dataConfig config;
    for(int m = 0; m < 4; m++)
    {
        for(int n = 0; n < 4; n++)
        {
            this->gameArray[m][n] = config.mData[this->levelIndex][m][n];
        }
    }

    //胜利图片的显示
    winLabel = new QLabel;
    QPixmap tmpPix;
    tmpPix.load("://res/LevelCompletedDialogBg.png");
    winLabel->setGeometry(0,0,tmpPix.width(),tmpPix.height());
    winLabel->setPixmap(tmpPix);
    winLabel->setParent(this);
    winLabel->move((this->width() - tmpPix.width()) *0.5, -tmpPix.height() );

    //显示金币的背景图案
    for( i = 0; i < 4; i++)
    {
        for( j = 0; j < 4; j++)
        {
            //绘制背景图片
            QLabel * label2 = new QLabel;
            label2->setGeometry(0,0,50,50);
            label2->setPixmap(QPixmap("://res/BoardNode.png"));
            label2->setParent(this);
            label2->move(57 + i*50, 200+ j*50);

            //创建金币
            QString str;
            if (this->gameArray[i][j] == 1)
            {
                str = "://res/Coin0001.png";
            }
            else
            {
               str = "://res/Coin0008.png";
            }
            coin = new MyCoin(str);
            coin->setParent(this);
            coin->move(59 + i*50, 204+ j*50);
            //给金币属性赋值
            coin->posX = i;
            coin->posY = j;
            coin->flag = this->gameArray[i][j]; //1正面 0反面
            QString str1 = QString::number(coin->posX) + QString::number(coin->posY);
            coin->setObjectName(str1);
            Coinbtn[i][j] = coin;
            //点击金币进行翻转
            connect(coin,SIGNAL(clicked()),coin,SLOT(changeFlag()) );
            connect(coin,SIGNAL(clicked()),this,SLOT(CoinFlip()) );
            qDebug() << "ObjectName" << str1;
        }
    }

}
void PlayScene::CoinFlip()
{
    filpSound->play();
    //当这个硬币翻转时，全部硬币无法点击
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            this->Coinbtn[i][j]->iswin = true;
        }
    }
    QString BtnName = sender()->objectName();
    tempX = BtnName.mid(0,1).toInt();
    tempY = BtnName.mid(1,1).toInt();
    QTimer::singleShot(300,this,SLOT(TimerCoinFlip()));
}

void PlayScene::TimerCoinFlip()
{
    this->gameArray[tempX][tempY] = this->gameArray[tempX][tempY] == 0 ? 1 : 0;
    //翻转周围硬币
    //周围右侧金币翻转延时翻转
    qDebug() << "tempX" << tempX << "tempY" << tempY;
    if (tempX + 1 <= 3)
    {
        Coinbtn[tempX + 1][tempY]->changeFlag();
        this->gameArray[tempX + 1][tempY] = this->gameArray[tempX + 1][tempY] == 0 ? 1 : 0;
    }
    //周围左侧金币翻转
    if (tempX - 1 >= 0)
    {
        Coinbtn[tempX - 1][tempY]->changeFlag();
        this->gameArray[tempX - 1][tempY] = this->gameArray[tempX - 1][tempY] == 0 ? 1 : 0;
    }
    //周围上侧金币翻转
    if (tempY + 1 <= 3)
    {
        Coinbtn[tempX][tempY + 1]->changeFlag();
        this->gameArray[tempX][tempY + 1] = this->gameArray[tempX][tempY + 1] == 0 ? 1 : 0;
    }
    //周围下侧金币翻转
    if (tempY - 1 >= 0)
    {
        Coinbtn[tempX][tempY - 1]->changeFlag();
        this->gameArray[tempX][tempY - 1] = this->gameArray[tempX][tempY - 1] == 0 ? 1 : 0;
    }
    //当这个硬币翻转时，全部硬币可以点击
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            this->Coinbtn[i][j]->iswin = false;
        }
    }
    //判断是否胜利
    this->iswin = true;
    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            if(Coinbtn[i][j]->flag == false) //只要有一个为反面，则失败
            {
                this->iswin = false;
                break;
            }
        }
    }
    if(this->iswin == true)
    {
        winSound->play();
        qDebug() <<"游戏胜利了！";
        //将所有的按钮设为true;如果再次点击按钮，直接return 不做响应
        for(int i = 0; i < 4; i++)
        {
            for(int j = 0; j < 4; j++)
            {
                Coinbtn[i][j]->iswin = true;
            }
            //将胜利的图片移动下来
            QPropertyAnimation * animation = new QPropertyAnimation(winLabel,"geometry");
            //设置时间间隔
            animation->setDuration(1000);
            //设置开始位置
            animation->setStartValue(QRect(winLabel->x(),winLabel->y(),winLabel->width(),winLabel->height()));
            //设置结束位置
            animation->setEndValue(QRect(winLabel->x(),winLabel->y()+114,winLabel->width(),winLabel->height()));
            //设置缓和曲线
            animation->setEasingCurve(QEasingCurve::OutBounce);
            //执行动画
            animation->start();
        }
    }
}
void PlayScene::backPlot()
{
    emit this->chooseSelevelScene();
}
void PlayScene::backState()
{
    backSound->play();
    QTimer::singleShot(500,this,SLOT(backPlot()));
}
void PlayScene::paintEvent(QPaintEvent *)
{
    //创建背景
    QPainter painter(this);
    QPixmap pix;
    pix.load("://res/PlayLevelSceneBg.png");
    painter.drawPixmap(0,0,this->width(),this->height(),pix);

    //加载标题
    pix.load("://res/Title.png");
    pix = pix.scaled(pix.width()*0.5,pix.height()*0.5);
    painter.drawPixmap(10,30,pix.width(),pix.height(),pix);
}

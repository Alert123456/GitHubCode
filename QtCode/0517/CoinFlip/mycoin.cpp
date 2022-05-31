#include "mycoin.h"
#include <QDebug>
//MyCoin::MyCoin(QWidget *parent) :
//    QPushButton(parent)
//{
//}
MyCoin::MyCoin(QString BtnImg)
{
    QPixmap pix;
    bool ret = pix.load(BtnImg);
    if(!ret)
    {
        QString str = QString("图片 %1 加载失败").arg(BtnImg);
        qDebug() <<str;
        return;
    }
    this->setFixedSize(pix.width(),pix.height());
    this->setStyleSheet("QPushButton{border:0px}");
    this->setIcon(pix);
    this->setIconSize(QSize(pix.width(),pix.height()));

    //初始化定时器
    timer1 =  new QTimer(this);
    timer2 =  new QTimer(this);
    //监听正面翻反面信号，并且反转金币
    connect(timer1,SIGNAL(timeout()),this,SLOT(GcoinToScoin()) );
    connect(timer2,SIGNAL(timeout()),this,SLOT(ScoinToGcoin()) );
}
//改变正反方法
void MyCoin::changeFlag()
{
    //如果是正面 翻成反面
    if(this->flag)
    {
        timer1->start(30);
        isAnimation = true;
        this->flag = false;
    }
    else
    {
        timer2->start(30);
        isAnimation = true;
        this->flag = true;
    }
}
void MyCoin::GcoinToScoin()
{
    QPixmap pix;
    QString str = QString("://res/Coin000%1.png").arg(this->min++);
    pix.load(str);

    this->setFixedSize(pix.width(),pix.height());
    this->setStyleSheet("QPushButton{border:0px}");
    this->setIcon(pix);
    this->setIconSize(QSize(pix.width(),pix.height()));
    //判断如果翻完了，将min重置为1
    if(this->min > this->max)
    {
        this->min = 1;
        timer1->stop();
        isAnimation = false;
    }
}
void MyCoin::ScoinToGcoin()
{
    QPixmap pix;
    QString str = QString("://res/Coin000%1.png").arg(this->max--);
    pix.load(str);

    this->setFixedSize(pix.width(),pix.height());
    this->setStyleSheet("QPushButton{border:0px}");
    this->setIcon(pix);
    this->setIconSize(QSize(pix.width(),pix.height()));
    //判断如果翻完了，将min重置为1
    if(this->max < this->min)
    {
        this->max = 8;
        timer2->stop();
        isAnimation = false;
    }
}
void MyCoin::mousePressEvent(QMouseEvent *e)
{
    if(this->isAnimation || this->iswin)
    {
        return;
    }
    else
    {
        QPushButton::mousePressEvent(e);
    }
}

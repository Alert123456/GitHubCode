#include "widget.h"
#include "ui_widget.h"
#include <QPainter>
#include <QPen>
#include <QBrush>
#include <QColor>
Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    connect(ui->pushButton,SIGNAL(clicked()),this,SLOT(update()) );
}

Widget::~Widget()
{
    delete ui;
}

void Widget::paintEvent(QPaintEvent *)
{
//    //实例化画家对象 this指定的是绘图设备
//    QPainter painter(this);

//    //设置画笔颜色
//    QPen pen(QColor(255,0,0));

//    //设置画笔宽度
//    pen.setWidth(3);

//    //设置画笔风格
//    pen.setStyle(Qt::DotLine);

//    //让画家用这个画笔
//    painter.setPen(pen);

//    //设置画刷
//    QBrush brush(Qt::green);

//    //设置画刷风格
//    brush.setStyle(Qt::Dense7Pattern);

//    //用画家使用画刷
//    painter.setBrush(brush);

//    //画线
//    painter.drawLine(QPoint(0,0),QPoint(100,100));

//    //画圆
//    painter.drawEllipse(QPoint(100,100),50,50);

//    //画笔重新着色
//    pen.setColor(QColor(0,0,0));
//    painter.setPen(pen);

//    //画矩形
//    painter.drawRect(QRect(20,20,50,50));

//    //画文字
//    painter.drawText(QRect(10,200,150,50),"好好学习，天天向上");


    //高级设置

    QPainter painter(this);
//    painter.drawEllipse(QPoint(100,50),50,50);
//    //设置抗锯齿能力 效率较低
//    painter.setRenderHint(QPainter::Antialiasing);
//    painter.drawEllipse(QPoint(200,50),50,50);
//    //抗锯齿能力

//    //画矩形
//    painter.drawRect(QRect(20,20,50,50));
//    //移动画家
//    painter.translate(100,0);

//    //保存画家状态
//    painter.save();

//    painter.drawRect(QRect(20,20,50,50));

//    painter.translate(100,0);

//    //还原画家状态
//    painter.restore();
//    painter.drawRect(QRect(20,20,50,50));

    //利用画家画资源图片

    if (pox > this->width())
    {
        pox = 0;
    }
    pox += 20;
    painter.drawPixmap(pox,100,QPixmap("://C:/Users/Albert/Desktop/1.jpg"));

}

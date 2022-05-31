#include "widget.h"
#include "ui_widget.h"
#include <QPixmap>
#include <QPainter>
#include <QImage>
#include <QPicture>
Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

//    //pixmap绘图设备
//    QPixmap pix(300,300);

//    //填充颜色
//    pix.fill(Qt::white);

//    //声明画家
//    QPainter painter(&pix);
//    painter.setPen(QPen(Qt::green));
//    painter.drawEllipse(QPoint(150,150),50,50);

//    //保存
//    pix.save("F://pix.png");

    //绘图设置
//    QImage img(300,300,QImage::Format_RGB32);

//    img.fill(Qt::white);

//    QPainter painter(&img);
//    painter.setPen(QPen(Qt::green));
//    painter.drawEllipse(QPoint(150,150),50,50);

//    //保存
//    img.save("F://Imagepix.png");

    //QPicture 绘画设备 可以记录和重新绘图指令
    QPicture pic;
    QPainter painter;
    painter.begin(&pic); //开始画
    painter.setPen(QPen(Qt::cyan));
    painter.drawEllipse(QPoint(150,150),100,100);
    painter.end();//结束话

    pic.save("F:\\pic.xj");

}

void Widget::paintEvent(QPaintEvent *)
{
//    QPainter painter(this);

//    //利用QImage 对像素进行修改
//    QImage img;
//    img.load("://C:/Users/Albert/Desktop/1.jpg");
//    //修改像素点
//    for(int i = 50; i < 100; i++)
//    {
//        for(int j = 50; j < 100; j++)
//        {
//            QRgb value = qRgb(255,0,0);
//            img.setPixel(i,j,value);
//        }
//    }
//    painter.drawImage(0,0,img);

    //==========保存波型=====
    QPainter painter(this);
    //重现QPicture的绘图指令
    QPicture pic;
    pic.load("F:\\pic.xj");
    painter.drawPicture(0,0,pic);


}

Widget::~Widget()
{
    delete ui;
}

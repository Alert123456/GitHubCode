#ifndef MYPUSHBUTTON_H
#define MYPUSHBUTTON_H
#include <QString>
#include <QPushButton>
#include "mainwindow.h"
class MyPushButton : public QPushButton
{
    Q_OBJECT
public:
    //explicit MyPushButton(QWidget *parent = 0);
    //构造函数 参数1 正常显示图片路径 参数2 按下后显示的图片路径
    MyPushButton(QString normalImag, QString pressImg = "");
    //成员属性 保存用户传入的属性
    QString normalImgPath;
    QString pressImgPath;

    //弹跳特效
    void zoom1();
    void zoom2();

    //重写按钮 按下 和 释放事件

    void mousePressEvent(QMouseEvent *e);
    void mouseReleaseEvent(QMouseEvent *e);
signals:
    
public slots:
    void cartoon();
};

#endif // MYPUSHBUTTON_H

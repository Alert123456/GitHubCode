#include "mywidget.h"
#include <QPushButton>
#include "mypushbutton.h"
#include <QDebug>
// 命名规范
// 类名 首字母大写，单词和单词之间首字母大写
// 函数名 变量名称 首字母小写，单词和单词之间首字母大写

// 快捷键
// 注释 ctrl + /
// 运行 ctrl + r
// 编译 ctrl + b
// 字体缩放 ctrl + 鼠标滚轮
// 查找 ctrl + f
// 整行移动 ctrl + shift + ↑ 或者↓
// 帮助文档 第一个方法 F1
// 自动对齐 ctrl + i
// 同名之间的.h和.cpp切换 F4
MyWidget::MyWidget(QWidget *parent)
    : QWidget(parent)
{
    //qDebug() << "a";
    //创建一个按钮
    QPushButton * btn = new QPushButton;
    //btn->show();//show以顶层方式弹出窗口控件
    //让btn对象 依赖在 myWidget 窗口中
    btn->setParent(this);
    //显示文本
    btn->setText("第一个按钮");

    //创建第二个按钮 按照控件的大小创建窗口
    QPushButton * btn2 = new QPushButton("第二个按钮",this);

    //移动btn2按钮
    btn2->move(100,100);

    //重置窗口大小
    resize(600,400);

    //设置固定窗口大小
    setFixedSize(600,400);

    //设置窗口标题
    setWindowTitle("第一个窗口");


    //创建一个自己的按钮对象
    MyPushButton * myBtn = new MyPushButton;
    myBtn->move(200,0);
    myBtn->setText("我的按钮");
    myBtn->setParent(this);

    //参数1 信号的发送者
    connect(myBtn,SIGNAL(clicked()),this,SLOT(close()));


}

MyWidget::~MyWidget()
{
    qDebug() << "MyWeiget 析构调用";
}

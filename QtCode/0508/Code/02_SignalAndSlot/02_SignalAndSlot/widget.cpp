#include "widget.h"
#include "ui_widget.h"
#include "QPushButton"
#include <QDebug>
#include "mywidget.h"
//Teacher 类 老师类
//Student 类 学生类
//下课后，老师饿了，学生请吃饭

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
//    //创建一个老师对象
//    this->zt = new Teacher(this);
//    //创建一个学生对象
//    this->st = new Student(this);

////    connect(zt,SIGNAL(hungry()),st,SLOT(treat()));

////    //调用下课函数
////    zt->classIsOver();

//    //链接带参数的 信号与槽
//    //指针 -> 地址
//    //函数指针 -> 函数地址

//    connect(zt,SIGNAL(hungry()),st,SLOT(treat(QString)));
//    zt->classIsOver();
//      //点击一个 下课按钮 就下课
//    QPushButton * btn = new QPushButton("下课",this);
//    //重置窗口大小
//    resize(600,400);
//    //信号连接信号
//    connect(btn,SIGNAL(clicked()),zt,SIGNAL(hungry()));

//    //断开信号
//    disconnect(zt,SIGNAL(hungry()),st,SLOT(treat()));
    //1.信号连接信号
    //2.一个信号可以连接多个槽函数
    //3.多个信号可以连接一个槽函数
    //4.信号和槽函数的参数 必须一一对应
    //5.信号和槽的参数个数 信号的参数个数可以多于槽函数个数 必须一一对应
//    QPushButton * btn2 = new QPushButton;
//    [btn](){
//        btn->setText("aaa");
////        btn2->setText("bbb");
//    }();
//    QPushButton * myBtn = new QPushButton(this);
//    QPushButton * myBtn2 = new QPushButton(this);
//    myBtn2->move(100,100);
//    int m = 10;
//    connect(myBtn,SIGNAL(clicked()),this,SLOT([m]()mutable { m = 100 +10; qDebug() << m;}()));

//    connect(myBtn2,SIGNAL(clicked()),this,SLOT([=]() {qDebug() << m;}));

//    int ret = []()->int{return 1000;}();
//    qDebug() << ret;
    myW = new QWidget;
    QPushButton * myBtn = new QPushButton("打开",this);
    QPushButton * myBtn2 = new QPushButton("关闭",this);
    myBtn2->move(100,100);
    connect(myBtn,SIGNAL(clicked()),this,SLOT(myopen()));

    connect(myBtn2,SIGNAL(clicked()),this,SLOT(myclose()));
}



Widget::~Widget()
{
    delete ui;
}

void Widget::myopen()
{
    myW->show();
}

void Widget::myclose()
{
    myW->close();
}

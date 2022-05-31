#include "widget.h"
#include "ui_widget.h"
#include <QTimer>
#include <QMouseEvent>
#include <QDebug>
Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    //启动定时器
    id1 = startTimer(1000); //参数1 间隔 单位 ms
    id2 = startTimer(2000);

    //定时器的第二种方式
    Timer = new QTimer(this);
    //启动定时器,每隔0.5s加一
    Timer->start(500);
    connect(Timer,SIGNAL(timeout()),this,SLOT( explain()) );
    //点击暂停按钮，停止定时器
    connect(ui->Btn,SIGNAL(clicked()),this,SLOT(explain1()) );



    //步骤1 给Label1 安装事件过滤器
    ui->label->installEventFilter(this);
    //步骤2
}

Widget::~Widget()
{
    delete ui;
}

bool Widget::eventFilter(QObject * obj, QEvent * e)
{
    if(obj == ui->label)
    {
        if(e->type() == QEvent::MouseButtonPress)
        {
            QMouseEvent * ev = static_cast<QMouseEvent *>(e);
            QString str = QString ("事件过滤器中，鼠标按下了 x = %1 y = %2 globalX = %3 globalY = %4").arg(ev->x()).arg(ev->y()).arg(ev->globalX()).arg(ev->globalY());
            qDebug() << str;

            return true; //用户自己处理，不向下分发
        }
    }

    //其他默认处理
    return QWidget::eventFilter(obj,e);
}

void Widget::timerEvent(QTimerEvent *ev)
{
    if (ev->timerId() == id1)
    {
        static int num = 1;
        //label2 每个一秒+1
        ui->label_2->setText(QString::number(num++));
    }
    else if (ev->timerId() == id2 )
    {
        //label3 每隔两秒+1
        static int num1 = 1;
        ui->label_3->setText(QString::number(num1++));
    }
}

void Widget::explain()
{
    static int num = 1;
    ui->label_4->setText( QString::number(num++) );
}

void Widget::explain1()
{
    Timer->stop();
}

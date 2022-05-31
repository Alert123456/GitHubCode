#include "widget.h"
#include "ui_widget.h"
#include <QDebug>
Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    connect(ui->btn_Set,SIGNAL(clicked()),ui->widget,SLOT(setNum(int)) );

    connect(ui->btn_Get,SIGNAL(clicked()),ui->widget,SLOT(getNum()) );
    connect(ui->btn_Get,SIGNAL(clicked()),this,SLOT(Ref()) );

}

void Widget::Ref()
{
    qDebug() << ui->widget->getNum();
    ui->widget->setNum(50);
}

Widget::~Widget()
{
    delete ui;
}

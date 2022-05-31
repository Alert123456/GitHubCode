#include "widget.h"
#include "ui_widget.h"
#include <QFileDialog>
#include <QTextCodec>
#include <QFileInfo>
#include <QDebug>
#include <QDateTime>
Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    //点击选取文件按钮，弹出文件对话框
    connect(ui->pushButton,SIGNAL(clicked()),this,SLOT(explain()) );
}
void Widget::explain()
{
    QString path = QFileDialog::getOpenFileName(this,"打开文件","C:\\Users\\Albert\\Desktop");
    //将路径放入linetext
    ui->lineEdit->setText(path);

    //编码格式类
    QTextCodec * codec = QTextCodec::codecForName("utf-8");


    //读取内容 放入textEdit中
    QFile file(path);//参数就是读取文件的路径
    //设置打开方式
    file.open(QIODevice::ReadOnly);//用只读的方式打开

    QByteArray array;
    while(!file.atEnd())
    {
         array += file.readLine();//按行读
    }
    //QByteArray array = file.readAll();//读取所有
    //将读取到的数据 放入textEdit中
    ui->textEdit->setText(codec->toUnicode(array));
    //对文件进行关闭
    file.close();
    //进行写文件
    file.open(QIODevice::Append); //用追加的方式写
    file.write("巴巴爸爸不");
    file.close();

    //读取文件信息
    QFileInfo info(path);
    qDebug() << "大小" <<info.size() << "后缀名" << info.suffix()
             <<"文件名称: " << info.fileName() << "文件路径: "<<info.filePath();
    qDebug() << "文件创建日期" <<info.created().toString("yyyy/MM/dd hh:mm:ss");//日期创建
    qDebug() << "最后修改日期" <<info.lastModified().toString("yyyy/MM/dd hh:mm:ss");//最后修改日期

}
Widget::~Widget()
{
    delete ui;
}

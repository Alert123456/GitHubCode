#include "mywidget.h"
#include <QApplication> //包含一个应用程序类的头文件
#include <QTextCodec>

//main程序入口 argc命令行变量的数量 argv命令行变量的数组
int main(int argc, char *argv[])
{
    //==========================处理中文乱码问题==================//
    QTextCodec::setCodecForTr(QTextCodec::codecForName("UTF8"));
    QTextCodec::setCodecForLocale(QTextCodec::codecForName("UTF8"));
    QTextCodec::setCodecForCStrings(QTextCodec::codecForName("UTF8"));


    //a应用程序对象，在QT中，应用程序对象，有且只有一个
    QApplication a(argc, argv);
    //窗口对象 myWidget父类 -> QWidget
    MyWidget w;
    //窗口对象 默认不会显示，必须要调用show方法显示窗口
    w.show();
    //让应用程序对象进入消息循环
    //让代码阻塞到这行
    return a.exec();

}

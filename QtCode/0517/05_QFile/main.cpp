#include "widget.h"
#include <QApplication>
#include <QTextCodec>
int main(int argc, char *argv[])
{
    //==========================头文件 #include <QTextCodec>= =================//
    //==========================处理中文乱码问题==================//
    QTextCodec::setCodecForTr(QTextCodec::codecForName("UTF8"));
    QTextCodec::setCodecForLocale(QTextCodec::codecForName("UTF8"));
    QTextCodec::setCodecForCStrings(QTextCodec::codecForName("UTF8"));
    //===========================================================//
    QApplication a(argc, argv);
    Widget w;
    w.show();
    
    return a.exec();
}

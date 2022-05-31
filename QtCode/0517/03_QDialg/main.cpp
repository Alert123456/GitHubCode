#include "mainwindow.h"
#include <QApplication>
#include <QTextCodec>
int main(int argc, char *argv[])
{
    //==========================处理中文乱码问题==================//
    QTextCodec::setCodecForTr(QTextCodec::codecForName("UTF8"));
    QTextCodec::setCodecForLocale(QTextCodec::codecForName("UTF8"));
    QTextCodec::setCodecForCStrings(QTextCodec::codecForName("UTF8"));
    //===========================================================//
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    
    return a.exec();
}

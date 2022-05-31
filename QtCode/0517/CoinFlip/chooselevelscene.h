#ifndef CHOOSELEVELSCENE_H
#define CHOOSELEVELSCENE_H

#include <QMainWindow>
#include "playscene.h"
#include <QSound>
class chooselevelscene : public QMainWindow
{
    Q_OBJECT
public:
    explicit chooselevelscene(QWidget *parent = 0);
    //重写paintEvent
    void paintEvent(QPaintEvent *);
    //游戏场景对象指针
    PlayScene * play = NULL;
    //选择关卡音效
    QSound * chooseSound;
    //返回按钮音效
    QSound * backSound;
signals:
    //写自定义信号，告诉场景返回
    void chooseSceneBack();
    void explain5(int);
public slots:
    void explain3();
    void explain4();
    void explain6();
    void explain9();
};

#endif // CHOOSELEVELSCENE_H

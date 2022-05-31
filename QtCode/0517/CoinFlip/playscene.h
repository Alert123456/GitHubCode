#ifndef PLAYSCENE_H
#define PLAYSCENE_H

#include <QMainWindow>
#include "mycoin.h"
#include <QLabel>
#include <QSound>
class PlayScene : public QMainWindow
{
    Q_OBJECT
public:
    //explicit PlayScene(QWidget *parent = 0);
    PlayScene (int levelNum);
    int levelIndex; //内部成员函数，记录所选关卡

    //重写paintEvent 事件
    void paintEvent(QPaintEvent *);
    int i;
    int j;
    int gameArray[4][4]; //二维数组 维护每个关卡的具体内容
    MyCoin * Coinbtn[4][4];
    MyCoin * coin;
    int tempX,tempY = 0;
    //是否胜利的标志
    bool iswin = true;
    QLabel * winLabel;
    //音效资源
    QSound * backSound;
    QSound * filpSound;
    QSound * winSound;
signals:
    void chooseSelevelScene();
public slots:
    void backState();//返回状态
    void backPlot();//返回到上一界面
    void CoinFlip();
    void TimerCoinFlip();
};

#endif // PLAYSCENE_H

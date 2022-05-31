#ifndef MYCOIN_H
#define MYCOIN_H

#include <QPushButton>
#include <QString>
#include <QTimer>
class MyCoin : public QPushButton
{
    Q_OBJECT
public:
    //explicit MyCoin(QWidget *parent = 0);
    //参数代表 传入的金币路径还是银币路径
    MyCoin(QString BtnImg);
    //金币属性
    int posX;
    int posY;
    bool flag;


    QTimer * timer1; // 正面到反面
    QTimer * timer2; // 反面到正面
    int min = 1;
    int max = 8;
    //执行 动画标志
    bool isAnimation = false;

    //重写按下
    void mousePressEvent(QMouseEvent *e);
    bool iswin = false;
signals:
    
public slots:
    void GcoinToScoin();
    void ScoinToGcoin();
    //改变标志的方法
    void changeFlag();
};

#endif // MYCOIN_H

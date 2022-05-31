#include "mainscene.h"
#include <QPainter>
MainScene::MainScene(QWidget *parent) :
    QMainWindow(parent)
{
}
void MainScene:: paintEvent(QPaintEvent *)
{
    QPainter painter(this);
    QPixmap pix;
    pix.load("://res/PlayLevelSceneBg.png");
    painter.drawPixmap(0,0,pix);
}

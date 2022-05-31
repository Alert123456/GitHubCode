#ifndef MAINSCENE_H
#define MAINSCENE_H

#include <QMainWindow>

class MainScene : public QMainWindow
{
    Q_OBJECT
public:
    explicit MainScene(QWidget *parent = 0);
    //重新paintEvent事件 画背景
    void paintEvent(QPaintEvent *);
signals:
    
public slots:
    
};

#endif // MAINSCENE_H

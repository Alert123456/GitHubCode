#ifndef MYLABEL_H
#define MYLABEL_H

#include <QLabel>

class myLabel : public QLabel
{
    Q_OBJECT
public:
    explicit myLabel(QWidget *parent = 0);
    //鼠标进入事件
    void enterEvent(QEvent *event);
    //鼠标离开事件
    void leaveEvent(QEvent *);
    // 鼠标按下
    void mousePressEvent(QMouseEvent *ev);
    // 鼠标释放
    void mouseReleaseEvent(QMouseEvent *ev);
    // 鼠标移动
    void mouseMoveEvent(QMouseEvent *ev);

    //通过event事件分发器，进行拦截
    bool event(QEvent *e);
    
signals:
    
public slots:
    
};

#endif // MYLABEL_H

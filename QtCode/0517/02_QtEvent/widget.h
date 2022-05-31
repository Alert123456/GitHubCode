#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QTimer>
namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT
    
public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

    //重写定时器事件
    void timerEvent(QTimerEvent *);
    int id1; //定时器一id号
    int id2; //定时器二id号
    QTimer *Timer;

    //重写时间过滤器的事件
    bool eventFilter(QObject *, QEvent *);
public slots:
    void explain();
    void explain1();
private:
    Ui::Widget *ui;
};

#endif // WIDGET_H

#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include"student.h"
#include"teacher.h"
namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT
    
public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();
    QWidget *myW;
    void open();
private slots:
    void myopen();

    void myclose();

private:
    Ui::Widget *ui;
    Teacher * zt;
    Student * st;


};

#endif // WIDGET_H

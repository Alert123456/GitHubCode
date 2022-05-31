#ifndef MYPUSHBUTTON_H
#define MYPUSHBUTTON_H

#include <QPushButton> //当时创建时，包含的头文件错误导致之后都无法成功

class MyPushButton : public QPushButton
{
    Q_OBJECT
public:
    explicit MyPushButton(QWidget *parent = 0);


    ~MyPushButton();
    
signals:
    
public slots:
    
};

#endif // MYPUSHBUTTON_H

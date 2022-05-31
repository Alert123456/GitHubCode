#ifndef SMALLWIDGER_H
#define SMALLWIDGER_H

#include <QWidget>

namespace Ui {
class smallWidger;
}

class smallWidger : public QWidget
{
    Q_OBJECT

    
public:
    explicit smallWidger(QWidget *parent = 0);
    ~smallWidger();
public slots:
    //设置数字
    void setNum(int);
    //获取数字
    int getNum();
    
private:
    Ui::smallWidger *ui;
};

#endif // SMALLWIDGER_H

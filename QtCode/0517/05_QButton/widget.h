#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QDebug>
namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT
    
public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

public slots:
//    void explian();
    void explian(int);
private slots:
    void on_cBox_stateChanged(int arg1);

private:
    Ui::Widget *ui;
};

#endif // WIDGET_H

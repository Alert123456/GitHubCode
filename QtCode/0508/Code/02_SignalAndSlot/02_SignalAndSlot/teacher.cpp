#include "teacher.h"
#include <QDebug>
Teacher::Teacher(QObject *parent) :
    QObject(parent)
{

}
void Teacher::classIsOver()
{
    //下课函数，调用后 触发老师饿了信号
    emit hungry("宫保鸡丁");
    emit hungry();
}

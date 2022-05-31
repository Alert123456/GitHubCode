#include "student.h"
#include <QDebug>
Student::Student(QObject *parent) :
    QObject(parent)
{
}
void Student::treat()
{
    qDebug() <<"请客吃饭！";
}
void Student::treat(QString foodName)
{
    //Qstring -> char * 先转成QByteArrey ( .toUtf8()) 先转char *()
    qDebug() << "请老师吃饭，老师要吃:" << foodName.toUtf8().data();
}

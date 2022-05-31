#include "smallwidger.h"
#include "ui_smallwidger.h"

smallWidger::smallWidger(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::smallWidger)
{
    ui->setupUi(this);
    //QspinBox 移动， QSlider跟着移动
    connect(ui->spinBox,SIGNAL(valueChanged(int)),ui->horizontalSlider,SLOT(setValue(int)) );
    connect(ui->horizontalSlider,SIGNAL(valueChanged(int)),ui->spinBox,SLOT(setValue(int)) );
}
void smallWidger::setNum(int num)
{
    ui->spinBox->setValue(num);
}

int smallWidger::getNum()
{
    return ui->spinBox->value();
}

smallWidger::~smallWidger()
{
    delete ui;
}

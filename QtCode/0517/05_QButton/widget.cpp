#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    //设置单选按钮 男默认选择
    ui->rBMan->setChecked(this);

    //选中女后 打印信息
    //connect(ui->rBWoman,SIGNAL(clicked()),this,SLOT(explian()));
    connect(ui->cBox,SIGNAL(stateChanged(int)),this,SLOT(explian(int)));

    //利用listWidget写诗
    QListWidgetItem * item = new QListWidgetItem("锄禾日当午");
    //将一行诗放入QListWidget控件中

    QStringList list;
    list << "锄禾日当午" << "汗滴禾下土" << "谁之盘中餐" << "粒粒皆辛苦";

    ui->listWidget->addItems(list);
    //设置水平居中
    //item->setTextAlignment(Qt::AlignHCenter);
}
void Widget::explian(int state)
{
    //0 未选中 2 选中 1 半选
    qDebug() << "选中了女";
    qDebug() << state;
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_cBox_stateChanged(int arg1)
{
    qDebug() << arg1;
}

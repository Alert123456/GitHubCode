#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    //treeWidget树控件使用

    //设置水平头
    ui->treeWidget->setHeaderLabels(QStringList()<<"英雄"<<"英雄介绍");//字符串列表

    QTreeWidgetItem * liitem = new QTreeWidgetItem(QStringList()<< "力量");
    QTreeWidgetItem * minitem = new QTreeWidgetItem(QStringList()<< "敏捷");
    QTreeWidgetItem * zhiitem = new QTreeWidgetItem(QStringList()<< "智力");

    //加载顶层节点
    ui->treeWidget->addTopLevelItem(liitem);
    ui->treeWidget->addTopLevelItem(minitem);
    ui->treeWidget->addTopLevelItem(zhiitem);

    //追加子节点
    QStringList hero1;
    hero1 << "刚背猪" << "前排";
    QTreeWidgetItem *L1 = new QTreeWidgetItem(hero1);
    liitem->addChild(L1);
    //====================表格控件=====================
    //TableWidget控件
    //设置列数
    ui->tableWidget->setColumnCount(3);

    //设置水平表头
    ui->tableWidget->setHorizontalHeaderLabels(QStringList()<<"姓名"
                                               << "性别" << "年龄");
    //设置行数
    ui->tableWidget->setRowCount(5);

    //设置正文
    //ui->tableWidget->setItem(0,0,new QTableWidgetItem("亚瑟"));
    QStringList namelist;
    namelist << "亚瑟"<< "赵云" << "张飞" << "关羽" << "花木兰";

    QList<QString> sexList;
    sexList << "男" << "男" << "男" << "男" << "女" ;
    for ( int i = 0 ;i < 5 ; i++ )
    {
        int col = 0;
        ui->tableWidget->setItem(i,col++,new QTableWidgetItem(namelist[i]));
        ui->tableWidget->setItem(i,col++,new QTableWidgetItem(sexList.at(i)));
        //int 转 QString
        ui->tableWidget->setItem(i,col++,new QTableWidgetItem(QString::number(i+18)));
    }
}

Widget::~Widget()
{
    delete ui;
}

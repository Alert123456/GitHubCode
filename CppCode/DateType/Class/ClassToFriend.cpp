#include <iostream>
using namespace std;
#include <string>

// 类做友元
class Buliding;
class GoodGay
{
public:
    GoodGay();

public:
    void visit(); // 参观函数  访问Building中的属性
    Buliding *buliding;
};
class Buliding
{
    // GoodGay 是这个类的好朋友 可以访问
    friend class GoodGay;
public:
    Buliding();

public:
    string m_SittingRoom; // 客厅

private:
    string m_bedRoom; // 卧室
};

Buliding::Buliding()
{
    m_SittingRoom = "客厅";
    m_bedRoom = "卧室";
}
GoodGay::GoodGay()
{
    // 创建一个建筑物的对象
    buliding = new Buliding;
}
void GoodGay::visit()
{
    cout << "好基友正在访问: " << buliding->m_SittingRoom << endl;
    cout << "好基友正在访问: " << buliding->m_bedRoom << endl;
}
void test01()
{
    GoodGay gg;
    gg.visit();
}
int main()
{
    test01();
    return 0;
}
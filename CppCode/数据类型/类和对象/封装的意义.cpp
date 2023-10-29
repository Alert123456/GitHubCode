#include<iostream>
using namespace std;

const double PI = 3.14;

//设计一个圆类，求圆的周长
//圆求周长的公式 ： 2 * PI * 半径
//class 代表设计一个类，类后边紧跟着的就是类名
class Circle
{
    // 访问权限
public:
    // 属性 --- 参数
    // 半径
    int m_r;
    // 行为 --- 函数
    // 获取圆的周长
    double calculateZC()
    {
        return 2 * PI * m_r;
    }
};

int main() {

    // 通过圆类，创建具体的圆（对象）
    // 实例化 （通过一个类创建一个对象的过程）
    Circle c1;
    // 给圆对象 的属性进行赋值
    c1.m_r = 10;
    // 2 * PI * 10 = 62.8 
    cout << "圆的周长为:" << c1.calculateZC() << endl;

	// system("pause");
	return 0;
}
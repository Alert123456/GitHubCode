#include<iostream>
using namespace std;
// 继承中的构造函数和析构顺序
class Base
{
    public:
    Base()
    {
        cout << "Base 构造函数!" << endl;
    }

    ~Base()
    {
        cout << "Base 析构函数!" << endl;
    }

};
class Son : public Base
{
    public:
    Son()
    {
        cout << "Son 构造函数!" << endl;
    }

    ~Son()
    {
        cout << "Son 析构函数!" << endl;
    }
};

void test01()
{
    Son b;
}

int main()
{
    test01();

    return 0;
}
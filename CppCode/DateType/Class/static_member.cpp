#include <iostream>
using namespace std;

// 静态成员函数
// 所有对象共享同一个函数
// 静态成员函数只能访问静态成员变量

class Person
{
public:
    static void func()
    {
        m_A = 100;
        // m_B = 200; // 静态成员函数不可以访问 非静态成员变量
        cout << "static void func调用" << endl;
    }

    static int m_A;
    int m_B;

    // 静态成员也有访问权限
private:
    static void func2()
    {
        cout << "static void func2调用" << endl;
    }
};
int Person::m_A = 0;
void test01()
{
    // 通过对象访问
    Person p;
    p.func();
    //通过类名访问
    Person::func();

    // Person::func2(); // 类外访问不到私有静态成员函数
}

int main()
{
    test01();

    return 0;
}
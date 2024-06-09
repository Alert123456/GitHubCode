#include <iostream>
using namespace std;

// 左移运算符重载

class Person
{
public:
    Person(int a, int b)
    {
        m_A = a;
        m_B = b;
    }
    friend ostream & operator<<(ostream &cout, Person &p); 
private:
    // 利用成员函数重载 左移运算符
    // 不会利用成员函数重载<< 运算符,因为无法实现 cout 在左侧
    // void operator<<( std::cout )
    // {

    // }

    int m_A;
    int m_B;
};

// 只能利用全局函数重载左移运算符
ostream & operator<<(ostream &cout, Person &p)    //本质 operator << (cout, p)  简化 cout << p
{
    cout << "m_A = " << p.m_A << "\nm_B = " << p.m_B;
    return cout;    // 链式编程思想 返回原数据类型
}
void test01()
{
    Person p(10, 10);
    cout << p << endl;
}

int main()
{
    test01();

    return 0;
}
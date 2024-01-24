#include <iostream>
using namespace std;

// 初始化列表
class Person
{
private:
    /* data */
public:
    Person(int a, int b, int c);
    int m_A, m_B, m_C;
    ~Person();
};
// 可以使用  构造函数(): 属性1(值1), 属性2(值2)...{} 这个方法赋初值
Person::Person(int a, int b, int c) : m_A(a), m_B(b), m_C(c)
{
    // m_A = a;
    // m_B = b;
    // m_C = c;
}
Person::~Person()
{
}

void test01()
{
    Person p(30, 20, 10);
    cout << "m_A = " << p.m_A << endl;
    cout << "m_B = " << p.m_B << endl;
    cout << "m_C = " << p.m_C << endl;
}

int main()
{
    test01();
    return 0;
}
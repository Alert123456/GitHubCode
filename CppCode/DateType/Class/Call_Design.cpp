#include <iostream>
using namespace std;

// 构造函数的调用原则
// 1 如果用户定义有参构造函数,C++不在提供默认无参构造,但会提供默认拷贝构造

// 2 如果用户定义拷贝构造函数,C++不会在提供其他构造函数
class Person
{
private:
    /* data */
public:
    Person()
    {
        cout << "Person 的默认构造函数调用" << endl;
    }
    Person(int age)
    {
        m_Age = age;
        cout << "Person 的有参构造函数调用" << endl;
    }
    Person(const Person &p)
    {
        m_Age = p.m_Age;
        cout << "Person 的拷贝构造函数调用" << endl;
    }
    ~Person()
    {
        cout << "Person 的析构函数调用" << endl;
    }
    int m_Age;
};

// void test01()
// {
//     Person p;
//     p.m_Age = 18;
//     Person p2(p);

//     cout << "p2的年龄为: " << p2.m_Age << endl;
// }

void test02()
{
    Person p;
}

int main()
{
    // test01();
    test02();
    return 0;
}
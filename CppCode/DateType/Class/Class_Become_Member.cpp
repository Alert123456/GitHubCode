#include <iostream>
#include <string>
using namespace std;

// 类对象作为类成员

// 手机类
class Phone
{
private:
    /* data */
public:
    Phone(string pName)
    {
        cout << "Phone的构造函数调用" << endl;
        m_PName = pName;
    }
    ~Phone()
    {
        cout << "Phone的析构函数调用" << endl;
    }
    string m_PName;
};

class Person
{
private:
    /* data */
public:
    Person(string name, string pName) : m_Name(name), m_Phone(pName)
    {
        cout << "Person的构造函数调用" << endl;
    }
    ~Person()
    {
        cout << "Person的析构函数调用" << endl;
    }
    // 姓名
    string m_Name;
    // 手机
    Phone m_Phone;
};

// 当其他类对象作为本类成员,构造时先构造类对象,在构造自身,析构的顺序与构造相反

void test01()
{
    Person p("张三", "IPhone MAX");
    cout << p.m_Name << " 拿着:" << p.m_Phone.m_PName << endl;
}

int main()
{
    test01();
    return 0;
}
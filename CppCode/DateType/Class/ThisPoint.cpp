#include<iostream>
using namespace std;

class Person
{
public:
    Person(int age)
    {
        // this指针指向的是被调用的成员函数所属的对象
        this->age = age;
    }
    //用引用的方式返回不会产生一个新的拷贝,用值的方式返回会产生一个新的拷贝
    Person& PersonAddAge(Person &p)
    {
        this->age += p.age;
        // this 指向p2的指针,而*this指向的就是p2这个对象本体
        return *this;
    }

    int age;
};
// 1 解决名声冲突
void test01()
{
    Person p1(18);
    cout << "p1的年龄为" << p1.age << endl;
}
// 2 返回对象本身 *this
void test02()
{
    Person p1(10);

    Person p2(10);
    // 链式编程思想
    p2.PersonAddAge(p1).PersonAddAge(p1).PersonAddAge(p1);

    cout << "p2的年龄为:" << p2.age << endl;
}
int main()
{
    test01();

    test02();
    return 0;
}
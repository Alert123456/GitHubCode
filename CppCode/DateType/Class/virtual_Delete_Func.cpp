#include <iostream>
#include<string>
using namespace std;

// 虚函数和纯虚函数

class Animal
{
public:
    Animal()
    {
        cout << "Animal 构造函数调用" << endl;
    }
    // 利用虚析构可以解决 父类指针释放子类对象不干净的问题 
    // virtual ~Animal()
    // {
    //     cout << "Animal 析构函数调用" << endl;
    // }

    //纯虚析构 需要声明也需要实现
    //有了纯虚析构之后 这个类也属于抽象类,无法实例化对象
    virtual ~Animal() = 0;
    // 纯虚函数
    virtual void speak() = 0;
};

Animal:: ~Animal()
{
    cout << "Animal 纯虚析构函数调用" << endl;
}

class Cat : public Animal
{
public:
    Cat(string name)
    {
        cout << "Cat 构造函数调用" << endl;
        m_Name = new string(name);
    }

    // 纯虚函数
    void speak()
    {
        cout << *m_Name << " 小猫在说话! " << endl;
    }

    ~Cat()
    {
        if (m_Name != NULL)
        {
            cout << "Cat 析构函数调用" << endl;
            delete m_Name;
            m_Name = NULL;

        }
    }
    string *m_Name;
};

void test01()
{
    Animal *cat = new Cat("Tom");
    cat->speak();
    // 父类指针在析构时候,不会调用子类中析构函数,导致子类如果有堆区数据属性,出现内存泄漏
    delete cat;
}

int main()
{
    test01();
    return 0;
}
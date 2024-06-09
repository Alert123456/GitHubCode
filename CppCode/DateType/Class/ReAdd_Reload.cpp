#include <iostream>
using namespace std;

//  重载递增运算符

//自定义整形
class MyInteger
{
    friend ostream& operator<<(ostream& cout, MyInteger myint);
    public:
    MyInteger()
    {
        m_Num = 0;
    }

    // 重载前置++运算符  返回引用是为了一直对一个数据进行递增操作
    MyInteger& operator++()
    {
        // 先对自身进行一个自加
        m_Num++;
        // 之后对自身进行一个返回
        return *this;
    }
    // 重载后置++运算符
    // int代表占位参数,用于区分前置和后置
    // 不可以返回引用,临时变量在函数结束被释放,如果返回引用则为非法操作
    MyInteger operator++(int)
    {
        // 先记录当时结果
            MyInteger temp = *this;
        // 后做递增
            m_Num++;
        // 最后将记录结果做返回
            return temp;
    }
    private:
    int m_Num;
};

// 重载左移运算符
ostream& operator<<(ostream& cout, MyInteger myint)
{
    cout << myint.m_Num;
    return cout;
}

void test01()
{
    MyInteger myint;
    cout << ++(++myint) << endl;
    cout << myint << endl;
}

void test02()
{
    MyInteger myint;

    cout << myint++ << endl;
    cout << myint << endl;
}

int main() {

    //  test01();
    test02();
    
    // int a = 0;

    // cout << ++(++a) << endl;
    // cout << a << endl;

    return 0;
}

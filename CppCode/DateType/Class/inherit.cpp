#include <iostream>
using namespace std;

// 普通实现页面

// // Java页面
// class Java
// {
//     public:
//     void header()
//     {
//         cout << "首页 公开课 登录 注册" << endl;
//     }
//     void footer()
//     {
//         cout << "帮助中心 交流合作 站内地图 " << endl;
//     }
//     void left()
//     {
//         cout << "Java Python C++" << endl;
//     }
//     void content()
//     {
//         cout << "Java 学科视频" << endl;
//     }
// };

// // Python页面
// class Python
// {
//     public:
//     void header()
//     {
//         cout << "首页 公开课 登录 注册" << endl;
//     }
//     void footer()
//     {
//         cout << "帮助中心 交流合作 站内地图 " << endl;
//     }
//     void left()
//     {
//         cout << "Java Python C++" << endl;
//     }
//     void content()
//     {
//         cout << "Python 学科视频" << endl;
//     }
// };

// // C++页面
// class Cpp
// {
//     public:
//     void header()
//     {
//         cout << "首页 公开课 登录 注册" << endl;
//     }
//     void footer()
//     {
//         cout << "帮助中心 交流合作 站内地图 " << endl;
//     }
//     void left()
//     {
//         cout << "Java Python C++" << endl;
//     }
//     void content()
//     {
//         cout << "C++ 学科视频" << endl;
//     }
// };


class BasePage
{
public:
    void header()
    {
        cout << "首页 公开课 登录 注册" << endl;
    }
    void footer()
    {
        cout << "帮助中心 交流合作 站内地图 " << endl;
    }
    void left()
    {
        cout << "Java Python C++" << endl;
    }
};

// Java 页面
class Java:public BasePage
{
    public:
    void content()
    {
        cout << "Java 学科视频" << endl;
    }
};
// Python 页面
class Python:public BasePage
{
    public:
    void content()
    {
        cout << "Python 学科视频" << endl;
    }
};
// CPP 页面
class Cpp:public BasePage
{
    public:
    void content()
    {
        cout << "Cpp 学科视频" << endl;
    }
};

void test01()
{
    cout << "Java下载视频页面如下: " << endl;
    Java ja;
    ja.header();
    ja.footer();
    ja.left();
    ja.content();
    cout << "====================================" << endl;
    cout << "Python下载视频页面如下: " << endl;
    Python py;
    py.header();
    py.footer();
    py.left();
    py.content();
    cout << "====================================" << endl;
    cout << "Cpp下载视频页面如下: " << endl;
    Cpp Cpp;
    Cpp.header();
    Cpp.footer();
    Cpp.left();
    Cpp.content();

}

int main()
{

    test01();
    return 0;
}
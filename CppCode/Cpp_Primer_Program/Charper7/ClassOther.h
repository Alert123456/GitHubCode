#include <iostream>
#include <string>
#include <vector>

using namespace std;

// class Screen;
// class Screen
// {
// public:
//     // typedef string::size_type pos;
//     //与上一句等价
//     using pos = string::size_type;
//     Screen() = default; //因为Screen有另一个构造函数，本函数必须
//     // cursor被其类内初始值初始化为0
//     Screen(pos ht, pos wd) : height(ht), width(wd), 
//         contents(ht * wd, ' ') { }
//     Screen(pos ht, pos wd, char c) : height(ht), width(wd), 
//         contents(ht * wd, c) { }
//     //隐式内联 //读取光标处的字符
//     inline char get() const {return contents[cursor];}  
//     //显式内联
//     inline char get(pos ht, pos wd) const {return contents[ht*width+wd];} 
//     void some_member() const;

//     //根据对象是否为const 重载display函数
//     Screen &display(ostream &os) 
//         { do_display(os); return *this; }
//     const Screen &display(ostream &os) const
//         { do_display(os); return *this; }
//     inline Screen &move(pos r, pos c);
//     inline Screen &set(char);
//     inline Screen &set(pos, pos, char );

//     //Window_mgr的成员可以访问Screen类的私有部分
//     friend class Window_mgr;
//     //Window_mgr::clear必须在Screen类之前被声明
//     // friend void Window_mgr::clear(ScreenIndex);
//     friend ostream& storeOn(ostream &, Screen &);
//     // friend BitMap& storeOn(BitMap &, Screen &);

//     pos size() const { return height * width; }
// private:
//     pos cursor = 0;
//     pos height = 0, width = 0;
//     string contents;
//     mutable size_t access_ctr;  //即使在一个const对象内也能被修改
//     //该函数负责显示Screen的内容
//     void do_display(ostream &os) const {os << contents;}
// };

// class Window_mgr 
// {

// public:
//     //窗口中每个屏幕的编号
//     using ScreenIndex = vector<Screen>::size_type;
//     //按照编号将指定的Screen重置为空白
//     void clear(ScreenIndex);

//     //向窗口添加一个Screen,返回它的编号
//     ScreenIndex addScreen(const Screen&);

// private:
//     //这个Window_mgr追踪Screen
//     //默认情况下，一个Window_mgr包含一个标准尺寸的空白Screen
//     vector<Screen> screens{Screen(24, 80, ' ')};
// };

// //首先处理返回类型，之后我们才进入Window_mgr的作用域
// Window_mgr::ScreenIndex Window_mgr::addScreen(const Screen &s)
// {
//     screens.push_back(s);
//     return screens.size() - 1;
// }

// extern ostream& storeOn(ostream &, Screen &);
// // extern BitMap& storeOn(BitMap &, Screen &);


// // Screen::pos Screen::size() const
// // {
// //     return height * width;
// // }

// inline void Window_mgr::clear(ScreenIndex i)
// {
//     // s是一个Screen的引用，指向我们想要清空的屏幕
//     Screen &s = screens[i];
//     // 将那个选定的Screen重置为空白
//     s.contents = string( s.height * s.width, ' ');
// }

// inline Screen &Screen::move(pos r, pos c)
// {
//     cursor = r * width + c;    //计算行的位置 //在行内将光标移动到指定的列
//     return *this;
// }

// inline Screen &Screen::set(char c)
// {
//     contents[cursor] = c;   //设置当前光标所在位置的新值
//     return *this;   //将this对象作为左值返回
// }
// inline Screen &Screen::set(pos r, pos col, char ch)
// {
//     contents[r*width + col] = ch;   //设定给定位置的新值
//     return *this;       //将this对象作为左值返回
// }

// void Screen::some_member() const
// {
//     ++access_ctr;   //保存一个计数值，用于记录成员函数被调用的次数
// }

// // 类类型
// struct First 
// {
//     int memi;
//     int getMem();
// };
// struct Second
// {
//     int memi;
//     int getMem();
// };
// First obj1;
// // Second obj2 = obj1; //错误：obj1和obj2的类型不同

// //练习7.31
// class Y;
// class X;
// class X
// {
//     Y *y = nullptr;
// };
// class Y
// {
//     X x;
// };

//7.4 类的作用域

typedef double Money;
string bal;

class Account
{
public:
    Money balance() {return bal;} //bal使用类内部的double型
private:
    Money bal;  
    // typedef double Money;//类内部不可以重定义Money
};

class Screen
{
public: 
    typedef string::size_type pos;
    void demmy_fcn(pos height);
    void setHeight(pos);
    pos height = 0;

private: 
    pos cursor = 0;
    pos width = 0;
    // typedef string::size_type pos;
};

Screen::pos verify(Screen::pos);
void Screen::setHeight(pos var)
{
    height = verify(var);
}
void Screen::demmy_fcn(pos ht)
{
    cursor = width * height;
}
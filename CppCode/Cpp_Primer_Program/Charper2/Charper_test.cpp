#include <iostream>
// #include "Sales_item.h"
#include <cstdlib>
int main()
{
    // bool b = 45;            //只为0/1
    // int i = 1;
    // i =3.14;                //取整
    // double pi = i;
    // unsigned char c = -1;   //无法输出
    // signed char c2 = 256;   //无法输出
    // std::cout << "b:" << b << " i:" << i << " pi:" << pi 
    //           << " c:" << c << " c2:" << c2;
    // return 0;

    // for (int i = 10; i >= 0; --i)
    //     std::cout << i << std::endl;

    // unsigned u = 11; //确定要输出的最大数，从比它大1的数开始
    // while (u > 0)
    // {
    //     --u;    //先减1，这样最后一次迭代时就会输出0
    //     std::cout << u << std::endl;
    // }
    // // 练习2.3
    // unsigned u = 10, u2 = 42; //最大32位
    // std::cout << u2 - u << std::endl;
    // std::cout << u - u2 << std::endl;

    // int i = 10, i2 = 42;
    // std::cout << i2 - i << std::endl;
    // std::cout << i - i2 << std::endl;
    // std::cout << i - u << std::endl;
    // std::cout << u - i << std::endl;

    //转义字符的使用
    // std::cout << '\n';      //转到新的一行
    // std::cout << "\tHi!\n"; //输出一个制表符，输出"Hi!",转到新一行
    // int month = 9, day = 7;
    // std::cout << "month" << month << "day" << day;
    // // int month = 09, day = 07;   //09在八进制无效
    // std::cout << "month" << month << "day" << day;
    // int sum = 0, value, //sum value 和 units_sold
    //     units_sold = 0;
    // Sales_item item;
    // std::string book("0-201-78345-X");

    // int input_value;
    // std::cin >> input_value;
    // double salary, wage = 9999.99;
    // std::string global_str;
    // int global_int;

    // int local_int = 0;
    // std::string local_str = "0";
    // std::cout << "local_str:\t" << local_str;
    // return 0;
    // double Double;
    // int i, &ri = i;
    // i = 5;
    // ri = 10;
    // std::cout << i << ri << std::endl;
    // // 练习 2.18 
    // int *p1 = nullptr;
    // int *p2 = nullptr;
    // int m = 10, n = 20;
    // p1 = &m; 
    // p2 = &n;
    // // p2 = p1;
    // *p1 = 5;
    // // *p2 = *p1;
    // std::cout << "*p1:" << *p1 << "\n*p2:" << *p2 
    // << "\nm:" << m << std::endl;
    // // 练习 2.20 
    // int i = 42;
    // int *p1 = &i;
    // *p1 = *p1 * *p1;
    // std::cout << "*p1:" << *p1 << std::endl;
    // // i 是一个int型的数，p是一个int型指针，r是一个int型引用
    // int i = 1024, *p = &i, &r = i;
    // int i = 42;
    // const int ci = i;
    // int j = ci;
    // // i = 50;
    // std::cout << "i:" << i << " ci: " << ci << " j: " << j << std::endl;
    
    // i = 50;
    // std::cout << "i:" << i << " ci: " << ci << " j: " << j << std::endl;
    int i = 42;
    const int &r1 = i;  //允许将const int& 绑定到一个普通int对象
    const int &r2 = 42; //正确：r2是一个常量引用
    const int &r3 = r1 * 2; //正确：r3是一个常量引用
    int &r4 = r1 * 2;   //错误：r4是一个普通的非常量引用
}
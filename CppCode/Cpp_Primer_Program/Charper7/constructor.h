#include <string>
#include <vector>
#include <iostream>

using namespace std;

// class Sales_data
// {
// public:
//     Sales_data(const string &s, unsigned cnt, double price); 
// private:
//     string bookNo = 0;
//     unsigned units_sold = 0;
//     double price = 0, revenue = 0;
// };

// Sales_data::Sales_data(const string &s, unsigned cnt, double price)
// {
//     bookNo = s;
//     units_sold = cnt;
//     revenue = cnt * price;
// }
/*******************************************************************/
// class ConstRef 
// {
// public:
//     ConstRef(int ii);
// private:
//     int i;
//     // ci和ri必须被初始化
//     const int ci;
//     int & ri;
// };
// ConstRef::ConstRef(int ii) : i(ii), ci(ii), ri(i) { }
/*******************************************************************/
// // Sales_data的非成员接口函数
// class Sales_data; 
// Sales_data add(const Sales_data&, const Sales_data&);
// ostream &print(ostream&, const Sales_data&);
// istream &read(istream&, Sales_data&);

// class Sales_data 
// {
// friend Sales_data add(const Sales_data&, const Sales_data&);
// friend ostream &print(ostream&, const Sales_data&);
// friend istream &read(istream&, Sales_data&);

// public:
//     //非委托构造函数使用对应的实参初始化成员
//     Sales_data(const string &s, unsigned cnt, double rev) : 
//         bookNo(s), units_sold(cnt), revenue(rev*cnt) { cout << "111"<< endl; }
//     //其余构造函数全部委托给另一个构造函数
//     Sales_data() : Sales_data("", 0, 0) {cout << "222"<< endl;}
//     explicit Sales_data(string s) : Sales_data(s, 0, 0) {cout << "333"<< endl;}
//     explicit Sales_data(istream &is) : Sales_data() {cout << "444"<< endl;read(is, *this);}
//     //定义默认构造函数，令其与只接受一个string实参的构造函数功能相同
//     // Sales_data(string s = "") : bookNo(s) { }

//     // Sales_data(istream &is = cin) {read(is, *this);}

//     // 新增构造函数
//     // Sales_data() = default;
//     // Sales_data(const string &s) : bookNo(s) { } //构造函数初始化列表
//     //将istream定义到构造函数内部 练习7.12
//     // Sales_data(istream &is)  {read(is, *this);} 
//     // Sales_data(const Sales_data &item) = default;

//     //新成员：关于Sales_data对象的操作
//     string isbn() const {return bookNo;}  
//     Sales_data& combine(const Sales_data&);
// private:
//     inline double avg_price() const 
//         { return units_sold ? revenue/units_sold : 0;}

//     string bookNo;              //书籍编号
//     unsigned units_sold = 0;    //单个价格
//     double revenue = 0.0;       //平均单价
// };

// //定义一个返回this对象的函数
// Sales_data& Sales_data::combine(const Sales_data &rhs)
// {
//     units_sold += rhs.units_sold;   //把rhs的成员加到this对象的成员上
//     revenue += rhs.revenue;
//     return *this;       //返回调用该函数的对象
// }
// // 输入的交易信息包括ISBN、售出总数和售出价格
// istream &read(istream &is, Sales_data &item)
// {
//     double price = 0;
//     is >> item.bookNo >> item.units_sold >> price;
//     item.revenue = price * item.units_sold;
//     return is;
// }
// ostream &print(ostream &os, const Sales_data &item)
// {
//     os << item.isbn() << " " << item.units_sold << " "
//         << item.revenue << " " << item.avg_price();
//     return os;
// }
// //add函数，将对象相加
// Sales_data add(const Sales_data &lhs, const Sales_data &rhs)
// {
//     Sales_data sum = lhs;
//     sum.combine(rhs);   //把rhs的数据成员加到sum中
//     return sum;
// }

// //练习7.43

// class NoDefault
// {
// public:
//     NoDefault(int) { }
// };
// class C
// {
//     C() : def(0) { };
//     NoDefault def;
// };

// class Debug 
// {
// public:
//     // constexpr函数的参数和返回值必须为字面值类型
//     constexpr Debug(bool b = true) : hw(b), io(b), other(b) { } 
//     constexpr Debug(bool h, bool i, bool o) : hw(h), io(i), other(o) { }
//     constexpr bool any() { return hw || io || other; }
//     void set_io(bool b) { io = b; }
//     void set_hw(bool b) { hw = b; }
//     void set_other(bool b) { hw = b; }

// private:
//     bool hw;    //硬件错误，而非IO错误
//     bool io;    //IO错误
//     bool other; //其他错误
// };

// class Account
// {
// public:
//     void calculate() { amount += amount * interestRate; }
//     static double rate() { return interestRate; }
//     static void rate(double);
    
// private:
//     string owner;
//     double amount;
//     static double interestRate;
//     static double initRate(); 
// };


// void Account::rate(double newRate)
// {
//     interestRate = newRate;
// }
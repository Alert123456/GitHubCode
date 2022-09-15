#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Sales_data的非成员接口函数
class Sales_data; 
Sales_data add(const Sales_data&, const Sales_data&);
ostream &print(ostream&, const Sales_data&);
istream &read(istream&, Sales_data&);

class Sales_data 
{
friend Sales_data add(const Sales_data&, const Sales_data&);
friend ostream &print(ostream&, const Sales_data&);
friend istream &read(istream&, Sales_data&);

public:
    // 新增构造函数
    Sales_data() = default;
    Sales_data(const string &s) : bookNo(s) { } //构造函数初始化列表
    Sales_data(const string &s, unsigned n, double p) : 
        bookNo(s), units_sold(n), revenue(p*n) { }
    //将istream定义到构造函数内部 练习7.12
    Sales_data(istream &is)  {read(is, *this);} 
    Sales_data(const Sales_data &item) = default;

    //新成员：关于Sales_data对象的操作
    string isbn() const {return bookNo;}  
    Sales_data& combine(const Sales_data&);
private:
    inline double avg_price() const 
        { return units_sold ? revenue/units_sold : 0;}

    string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;     
};

//定义一个返回this对象的函数
Sales_data& Sales_data::combine(const Sales_data &rhs)
{
    units_sold += rhs.units_sold;   //把rhs的成员加到this对象的成员上
    revenue += rhs.revenue;
    return *this;       //返回调用该函数的对象
}
// 输入的交易信息包括ISBN、售出总数和售出价格
istream &read(istream &is, Sales_data &item)
{
    double price = 0;
    is >> item.bookNo >> item.units_sold >> price;
    item.revenue = price * item.units_sold;
    return is;
}
ostream &print(ostream &os, const Sales_data &item)
{
    os << item.isbn() << " " << item.units_sold << " "
        << item.revenue << " " << item.avg_price();
    return os;
}
//add函数，将对象相加
Sales_data add(const Sales_data &lhs, const Sales_data &rhs)
{
    Sales_data sum = lhs;
    sum.combine(rhs);   //把rhs的数据成员加到sum中
    return sum;
}
// 练习7.4/7.5

// Sales_data的非成员接口函数
struct Person; 
ostream &print(ostream&, const Person&);
istream &read(istream&, Person&);

struct Person
{
friend ostream &print(ostream&, const Person&);
friend istream &read(istream&, Person&);
public:
    //构造函数 7.15 
    Person() = default;
    Person(const string &N, const string &A) : 
        Name(N), Address(A) { }
    Person(istream &is)  {read(is, *this);} 

    string isName() const {return Name;}
    string isAddress() const {return Address;}
private:
    string Name;    //姓名
    string Address;  //住址
};

istream &read(istream &is, Person &item)
{
    is >> item.Name >> item.Address ;
    return is;
}
ostream &print(ostream &os, const Person &item)
{
    os << item.Name << " " << item.Address << " ";
    return os;
}
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
//     // ci��ri���뱻��ʼ��
//     const int ci;
//     int & ri;
// };
// ConstRef::ConstRef(int ii) : i(ii), ci(ii), ri(i) { }
/*******************************************************************/
// // Sales_data�ķǳ�Ա�ӿں���
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
//     //��ί�й��캯��ʹ�ö�Ӧ��ʵ�γ�ʼ����Ա
//     Sales_data(const string &s, unsigned cnt, double rev) : 
//         bookNo(s), units_sold(cnt), revenue(rev*cnt) { cout << "111"<< endl; }
//     //���๹�캯��ȫ��ί�и���һ�����캯��
//     Sales_data() : Sales_data("", 0, 0) {cout << "222"<< endl;}
//     explicit Sales_data(string s) : Sales_data(s, 0, 0) {cout << "333"<< endl;}
//     explicit Sales_data(istream &is) : Sales_data() {cout << "444"<< endl;read(is, *this);}
//     //����Ĭ�Ϲ��캯����������ֻ����һ��stringʵ�εĹ��캯��������ͬ
//     // Sales_data(string s = "") : bookNo(s) { }

//     // Sales_data(istream &is = cin) {read(is, *this);}

//     // �������캯��
//     // Sales_data() = default;
//     // Sales_data(const string &s) : bookNo(s) { } //���캯����ʼ���б�
//     //��istream���嵽���캯���ڲ� ��ϰ7.12
//     // Sales_data(istream &is)  {read(is, *this);} 
//     // Sales_data(const Sales_data &item) = default;

//     //�³�Ա������Sales_data����Ĳ���
//     string isbn() const {return bookNo;}  
//     Sales_data& combine(const Sales_data&);
// private:
//     inline double avg_price() const 
//         { return units_sold ? revenue/units_sold : 0;}

//     string bookNo;              //�鼮���
//     unsigned units_sold = 0;    //�����۸�
//     double revenue = 0.0;       //ƽ������
// };

// //����һ������this����ĺ���
// Sales_data& Sales_data::combine(const Sales_data &rhs)
// {
//     units_sold += rhs.units_sold;   //��rhs�ĳ�Ա�ӵ�this����ĳ�Ա��
//     revenue += rhs.revenue;
//     return *this;       //���ص��øú����Ķ���
// }
// // ����Ľ�����Ϣ����ISBN���۳��������۳��۸�
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
// //add���������������
// Sales_data add(const Sales_data &lhs, const Sales_data &rhs)
// {
//     Sales_data sum = lhs;
//     sum.combine(rhs);   //��rhs�����ݳ�Ա�ӵ�sum��
//     return sum;
// }

// //��ϰ7.43

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
//     // constexpr�����Ĳ����ͷ���ֵ����Ϊ����ֵ����
//     constexpr Debug(bool b = true) : hw(b), io(b), other(b) { } 
//     constexpr Debug(bool h, bool i, bool o) : hw(h), io(i), other(o) { }
//     constexpr bool any() { return hw || io || other; }
//     void set_io(bool b) { io = b; }
//     void set_hw(bool b) { hw = b; }
//     void set_other(bool b) { hw = b; }

// private:
//     bool hw;    //Ӳ�����󣬶���IO����
//     bool io;    //IO����
//     bool other; //��������
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
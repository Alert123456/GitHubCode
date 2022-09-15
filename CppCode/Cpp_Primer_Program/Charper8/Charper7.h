#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Sales_data�ķǳ�Ա�ӿں���
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
    // �������캯��
    Sales_data() = default;
    Sales_data(const string &s) : bookNo(s) { } //���캯����ʼ���б�
    Sales_data(const string &s, unsigned n, double p) : 
        bookNo(s), units_sold(n), revenue(p*n) { }
    //��istream���嵽���캯���ڲ� ��ϰ7.12
    Sales_data(istream &is)  {read(is, *this);} 
    Sales_data(const Sales_data &item) = default;

    //�³�Ա������Sales_data����Ĳ���
    string isbn() const {return bookNo;}  
    Sales_data& combine(const Sales_data&);
private:
    inline double avg_price() const 
        { return units_sold ? revenue/units_sold : 0;}

    string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;     
};

//����һ������this����ĺ���
Sales_data& Sales_data::combine(const Sales_data &rhs)
{
    units_sold += rhs.units_sold;   //��rhs�ĳ�Ա�ӵ�this����ĳ�Ա��
    revenue += rhs.revenue;
    return *this;       //���ص��øú����Ķ���
}
// ����Ľ�����Ϣ����ISBN���۳��������۳��۸�
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
//add���������������
Sales_data add(const Sales_data &lhs, const Sales_data &rhs)
{
    Sales_data sum = lhs;
    sum.combine(rhs);   //��rhs�����ݳ�Ա�ӵ�sum��
    return sum;
}
// ��ϰ7.4/7.5

// Sales_data�ķǳ�Ա�ӿں���
struct Person; 
ostream &print(ostream&, const Person&);
istream &read(istream&, Person&);

struct Person
{
friend ostream &print(ostream&, const Person&);
friend istream &read(istream&, Person&);
public:
    //���캯�� 7.15 
    Person() = default;
    Person(const string &N, const string &A) : 
        Name(N), Address(A) { }
    Person(istream &is)  {read(is, *this);} 

    string isName() const {return Name;}
    string isAddress() const {return Address;}
private:
    string Name;    //����
    string Address;  //סַ
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
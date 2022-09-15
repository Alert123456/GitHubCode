#include <vector>
#include <string>
#include <iostream>
#include "constructor.h"
using namespace std;

class Account
{
public:
    void calculate() { amount += amount * interestRate; }
    static double rate() {return interestRate;}
    static void rate(double newRate) { interestRate = newRate; }
    
private:
    string owner;
    double amount;
    static double interestRate;
    // static constexpr double todayRate = 42.42;
    // static double initRate()  { return todayRate; }
};
double l;
double Account::interestRate = l;
// double Account::interestRate = initRate();
int main()
{
    // //定义类Sales_date与Sales_item实现相同功能
    
    // Sales_data item1;
    // print(std::cout, item1) << std::endl;
    
    // Sales_data item2("0-201-78345-X");
    // print(std::cout, item2) << std::endl;
    
    // Sales_data item3("0-201-78345-X", 3, 20.00);
    // print(std::cout, item3) << std::endl;
    
    // Sales_data item4;
    // read(cin, item4);
    // print(std::cout, item4) << std::endl;

    // constexpr Debug io_sub(false, true, false);     //调试IO
    // if (io_sub.any())
    //     cerr << "print appropriate error messages" << endl;
    // constexpr Debug prod(false);    //无调试
    // if (prod.any())
    //     cerr << "print an error message" << endl;
    

    // double r;
    double r = Account::rate();
    Account ac1;
    Account *ac2 = &ac1;
    //调用静态函数rate等价形式
    r = ac1.rate();
    r = ac2->rate();
    
    return 0;
}


 
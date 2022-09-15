#include <iostream>
#include <vector>
#include <string>
using namespace std;
#include "Charper7.h"

// class Person
// {
//     string Name;    //姓名
//     string Address;  //住址
// public:
//     string isName() const {return Name;}
//     string isAddress() const {return Address;}
// };

// int main()
// {
//     //定义类Sales_date与Sales_item实现相同功能
//     //练习7.3
//     Sales_data data;
//     if(cin >> data.bookNo >> data.units_sold >> data.revenue)
//     {
//         Sales_data trans;
//         while(cin >> trans.bookNo >> trans.units_sold >> trans.revenue)
//         {
//             if(data.isbn() == trans.isbn())
//             {
//                 // data.units_sold += trans.units_sold;
//                 // data.revenue += trans.revenue;
//                 //本句与上两句效果相等
//                 data.combine(trans);
//             }
//             else
//             {
//                 cout << data.bookNo << " "<< data.units_sold 
//                  << " " << data.revenue << endl;
//                 // print(cout, data) << endl;
//                 data = trans;
//             }
//         }
//         cout << data.bookNo << " "<< data.units_sold 
//                  << " " << data.revenue << endl;
//         // print(cout, data) << endl;
//     }
//     else
//     {
//         cout << "ERROR: Data " << endl;
//         return -1;
//     }
//     return 0;
// }


///////////////////////////////////////////////////////////////
// //练习7.7
// int main()
// {
//     //定义类Sales_date与Sales_item实现相同功能
    
//     Sales_data data;
//     if(read(cin,data))
//     {
//         Sales_data trans;
//         while(read(cin,data))
//         {
//             if(data.isbn() == trans.isbn())
//                 add(data,trans);
//             else
//                 print(cout, data) << endl;
//         }
//         print(cout, data) << endl;
//     }
//     else
//     {
//         cout << "ERROR: Data " << endl;
//         return -1;
//     }
//     return 0;
// }
///////////////////////////////////////////////////////////////
// // 练习7.9

// istream &read(istream &is, Person &inf)
// {
//     is >> inf.Name >> inf.Address;
//     return is;

// }

// ostream &print(ostream &os, const Person &inf)
// {
//     os << inf.Name << inf.Address;
//     return os;
// }

// ///////////////////////////////////////////////////////////////
// //练习7.12
// int main()
// {
//     //定义类Sales_date与Sales_item实现相同功能
    
//     Sales_data item1;
//     print(std::cout, item1) << std::endl;
    
//     Sales_data item2("0-201-78345-X");
//     print(std::cout, item2) << std::endl;
    
//     Sales_data item3("0-201-78345-X", 3, 20.00);
//     print(std::cout, item3) << std::endl;
    
//     Sales_data item4;
//     read(cin, item4);
//     print(std::cout, item4) << std::endl;

    
//     return 0;
// }
///////////////////////////////////////////////////////////////
//练习7.13
int main()
{
    //定义类Sales_date与Sales_item实现相同功能
    
    Sales_data data(cin);
    if(!data.isbn().empty())
    {
        istream &is = cin;
        while(is)
        {
            Sales_data trans(is);
            if(!is) break;
            if(data.isbn() == trans.isbn())
                data.combine(trans);
            else
            {
                print(cout, data) << endl;
                data = trans;
            }   
        }
        print(cout, data) << endl;
    }
    else
    {
        cout << "ERROR: Data " << endl;
        return -1;
    }
    return 0;
}
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>
using namespace std;
#include "Charper7.h"

istream& func(istream &is)
{
    string buf;
    while (is >> buf)
    {
        cout << buf << endl;
    }
    is.clear();
    return is;
    
}

// int main(int argc, char **argv)
// {
//     // istream& is = func(cin);
//     // cout << is.rdstate() << endl;
    
//     ifstream ifs("text.txt");
//     string buf;
//     vector<string> vec;
//     // ofstream put;
//     // put.open("text.txt" + "r");
//     // if(put)
//     {
//         // cout << put;
//         cout << "成功打开文件!" << endl;
//         while(ifs >> buf)
//             vec.push_back(buf);
//         for(auto &i : vec)
//             cout << i << " ";
//         cout << argc << argv[1];
//     }
//     // else
//     {
//         // cerr << "无法打开文件!";
//     }
//     cout << endl;
    
//     return 0;
// }


// using std::ifstream; using std::cout; using std::endl; using std::cerr;
struct PersonInfo
{
    string name;
    vector<string> phones;
};

bool vaild(const string &str)
{
    return isdigit(str[0]);
}

string format(const string& str)
{
    return str.substr(0,3) + "-" + str.substr(3,3) + "-" + str.substr(6);
}

int main(int argc, char **argv)
{
    // argv[1] = const_cast<char*>("text.txt");
    // argv[2] = const_cast<char*>("text1.txt");
    // ifstream input(argv[1]);
    // ofstream output;   //未指定文件打开模式
    // output.open(argv[2], ostream::app);   //模式隐含设置为输出和截断
    
    // Sales_data total;
    // if (read(input, total))
    // {
    //     Sales_data trans;
    //     while (read(input, trans))
    //     {
    //         if (total.isbn() == trans.isbn())
    //             total.combine(trans);
    //         else
    //         {
    //             print(output, total) << endl;
    //             total = trans;
    //         }
    //     }
    //     print(output, total) << endl;
    // }
    // else
    // {
    //     cerr << "No data?!" << endl;
    // }


    // 在这几条语句中，file1都会被截断
    // ofstream out("text.txt");   //隐含以输出模式打开文件并截断文件
    // ofstream out2("text.txt", ofstream::out);   //隐含截断文件
    // ofstream out3("text.txt", ofstream::out | ofstream::trunc);
    // // 为了保留文件内容，我们必须显式指定app模式
    // ofstream app("text.txt", ofstream::app); // 隐含为输出模式
    // ofstream app2("text.txt", ofstream::app | ofstream::out);

    // ofstream out;   //未指定文件打开模式
    // out.open("text.txt", ofstream::app);   //模式隐含设置为输出和截断
    // print(cout, total) << endl; 

    ifstream input("People.al");
    string line, word;  //分别保存来自输入的一行和单词
    vector<PersonInfo> people;  //保存来自输入的而所有记录
    istringstream record; //将记录绑定到刚读入的行
    //逐行从输入读取数据，直至cin遇到文件尾
    while (getline(input,line))
    {  
        PersonInfo info;    //创建一个保存此记录数据的对象
        // istringstream record(line); //将记录绑定到刚读入的行
        record.clear();
        record.str(line);
        record >> info.name;    //读取名字
        while (record >> word)  //读取电话号码
            info.phones.push_back(word);    //保持它们
        people.push_back(info); //将此记录追加到people末尾
    }
    for(const auto &entry : people)
    {
        ostringstream formatted, bedNums;
        for(const auto &nums : entry.phones)
        {
            if(!vaild(nums))
            {
                bedNums << " " << nums;
            }
            else
            {
                formatted << " " << format(nums);
            }
        }
        if (bedNums.str().empty()) 
        {
           cout << entry.name << " " << formatted.str() << endl;
        }
        else
        {
            cerr << "input error: " << entry.name
                 << " invalid number(s) " << bedNums.str() << endl;
        }
            
        cout << endl;
    }
    cout << endl;
    


    

    
    return 0;
}
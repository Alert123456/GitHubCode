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
//         cout << "�ɹ����ļ�!" << endl;
//         while(ifs >> buf)
//             vec.push_back(buf);
//         for(auto &i : vec)
//             cout << i << " ";
//         cout << argc << argv[1];
//     }
//     // else
//     {
//         // cerr << "�޷����ļ�!";
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
    // ofstream output;   //δָ���ļ���ģʽ
    // output.open(argv[2], ostream::app);   //ģʽ��������Ϊ����ͽض�
    
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


    // ���⼸������У�file1���ᱻ�ض�
    // ofstream out("text.txt");   //���������ģʽ���ļ����ض��ļ�
    // ofstream out2("text.txt", ofstream::out);   //�����ض��ļ�
    // ofstream out3("text.txt", ofstream::out | ofstream::trunc);
    // // Ϊ�˱����ļ����ݣ����Ǳ�����ʽָ��appģʽ
    // ofstream app("text.txt", ofstream::app); // ����Ϊ���ģʽ
    // ofstream app2("text.txt", ofstream::app | ofstream::out);

    // ofstream out;   //δָ���ļ���ģʽ
    // out.open("text.txt", ofstream::app);   //ģʽ��������Ϊ����ͽض�
    // print(cout, total) << endl; 

    ifstream input("People.al");
    string line, word;  //�ֱ𱣴����������һ�к͵���
    vector<PersonInfo> people;  //������������Ķ����м�¼
    istringstream record; //����¼�󶨵��ն������
    //���д������ȡ���ݣ�ֱ��cin�����ļ�β
    while (getline(input,line))
    {  
        PersonInfo info;    //����һ������˼�¼���ݵĶ���
        // istringstream record(line); //����¼�󶨵��ն������
        record.clear();
        record.str(line);
        record >> info.name;    //��ȡ����
        while (record >> word)  //��ȡ�绰����
            info.phones.push_back(word);    //��������
        people.push_back(info); //���˼�¼׷�ӵ�peopleĩβ
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
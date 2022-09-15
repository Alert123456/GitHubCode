#include <iostream>
#include <vector>
#include <string>
#include "Charper6.h"
#include "fact.cpp" //需包含函数定义文件
using namespace std;

int main()
{
    int num = 0;
    int j = 0;
    while(cin >> num)
    {
        j = absolate(num);  
    } 
    cout << "函数调用了" << j << "次!"<< endl;
    return 0;
}
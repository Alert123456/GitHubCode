#include <iostream>
#include <vector>
#include <string>
#include "Charper6.h"
#include "fact.cpp" //��������������ļ�
using namespace std;

int main()
{
    int num = 0;
    int j = 0;
    while(cin >> num)
    {
        j = absolate(num);  
    } 
    cout << "����������" << j << "��!"<< endl;
    return 0;
}
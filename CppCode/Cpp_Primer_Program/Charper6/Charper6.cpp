#include <iostream>
#include <vector>
#include <string>
#include "Charper6.h"
using namespace std;

int compare1(int *&p, int *&q)//����ָ���������ñ仯
{
    int *m = NULL;
    m = p;
    p = q;
    q = m;
}
void swap(int &v1, int &v2)
{
    // �������ֵ��ȣ�����Ҫ������ֱ���˳�
    if (v1 == v2)
        return;
    //�������ִ�е����˵������������ĳЩ����
    int tmp = v2;
    v2 = v1;
    v1 = tmp;
    // �˴�������ʽ��return��� 
}
int &get(int *arry, int index)
{
    return arry[index];
}

int OutPut(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
    if (begin != end)
    {
        cout << *begin << " ";
        OutPut(++begin,end);
    }
}

int main()
{
    //��ϰ6.3
    // int j = fact(5);
    // cout << "5�Ľ׳�Ϊ:" << j << endl;
    // //��ϰ6.4
    // int num = 0;
    // cin >> num;
    // int j = fact(num);
    // cout << num << "�Ľ׳�Ϊ:" << j << endl;
    // //��ϰ6.5
    // int num = 0;
    // cin >> num;
    // int j = absolate(num);
    // cout << num << "�ľ���ֵΪ:" << j << endl;
    // return 0;
    // //��ϰ6.7
    // int num = 0;
    // int j = 0;
    // while(cin >> num)
    // {
    //     j = absolate(num);  
    // } 
    // cout << "����������" << j << "��!"<< endl;

    // //��ϰ6.10
    // int a = 0, b = 0, num;
    // cin >> a >> b;
    // num = rechange(&a,&b);
    // cout << a << b << endl;
    // //��ϰ6.12
    // int a = 0, b = 0, num;
    // cin >> a >> b;
    // num = rechange(a,b);
    // cout << a << b << endl;
    //��ϰ6.21
    // int a[5] = {1,2,3,4,5};
    // int b = 3,max;
    // max = compare(b, a);
    // cout << max;
    // int num1 = 5, num2 = 10, *q = &num1, *p = &num2; 
    // cout << p << " " << q << endl;
    // cout << *p << " " << *q << endl;
    // compare1(p, q);
    // cout << p << " " << q << endl;
    // cout << *p << " " << *q << endl;
    // string str;
    // for(int i = 1; i != argc; ++i)
    // {
    //     str += string(argv[i]) + " ";
    // }
    // cout << str << endl;
    // //��ϰ6.32
    // int ia[10];
    // for (int i = 0; i != 10; ++i)
    //     get(ia,i) = i;
    // for(auto &i : ia)
    //     cout << i << " ";
    // //��ϰ6.33
    // vector<int> number = {1,2,3,4,5,6,7,8,9};
    // auto beg = number.begin(), end = number.end();
    // OutPut(beg, end);
    // // ��ϰ6.36
    // string (&fun())[10];
    // // ��ϰ6.37
    // typedef string arr[10];
    // arr& fun();

    // auto fun()->string(&)[10];

    // string s[10]; 
    // decltype(s)& fun();

    // //��ϰ 6.51
    // void f();
    // void f(int);
    // void f(int, int);
    // void f(double, double = 3.0);
    // f();
    // f(5);
    // f(5,7);
    // f(5.0);

    //��ϰ6.54
    int value(int a, int b);
    //��vectorԪ��ָ��ú�����ָ��,ָ��ָ����������ǣ��������ڲ����ú���
    vector<decltype(value)*> p; 
    int add(int a, int b);
    int subtract(int a, int b);
    int multiply(int a, int b);
    int divide(int a, int b);

    p.push_back(add);
    p.push_back(subtract);
    p.push_back(multiply);
    p.push_back(divide);

    for(auto &i : p)
    {
        cout << i(10,2) << " ";
    }

    return 0;
}
int add(int a, int b) { return a + b; }
int subtract(int a, int b) { return a - b; }
int multiply(int a, int b) { return a * b; }
int divide(int a, int b) { return b != 0 ? a / b : 0; }
void f()
{
    cout << " ���Ϊf() ";
}
void f(int)
{
    cout << " ���Ϊf(int) ";
}
void f(int, int)
{
    cout << " ���Ϊf(int, int) ";
}
void f(double, double)
{
    cout << " ���Ϊf(double, double) ";
}

// int compare(int p, int (&q)[5])
// {
//     int max = 0;
//     for(auto &i : q )
//     {
//         if(p > i )
//         {
//             max = p;
//         }
//         else
//         {
//             max = i;
//         }
//     }

//     return max;
// }

int rechange(int *p, int *q)
{
    int temp = 0;
    // temp = *p;
    // q = p;
    // *q = temp;
    temp = *p;
    *p = *q;
    *q = temp;
    return 0;
}
int rechange(int &p, int &q)
{
    int temp = 0;
    temp = p;
    p = q;
    q = temp;
    return 0;
}

int fact(int val)
{
    int ret = 1;
    while (val > 1)
        ret *= (val--);
    return ret;
}
int absolate(int val)
{
    int ret = 0;
    static int num1 = 0;
    return ++num1;
}
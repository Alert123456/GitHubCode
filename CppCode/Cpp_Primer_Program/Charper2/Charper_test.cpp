#include <iostream>
// #include "Sales_item.h"
#include <cstdlib>
int main()
{
    // bool b = 45;            //ֻΪ0/1
    // int i = 1;
    // i =3.14;                //ȡ��
    // double pi = i;
    // unsigned char c = -1;   //�޷����
    // signed char c2 = 256;   //�޷����
    // std::cout << "b:" << b << " i:" << i << " pi:" << pi 
    //           << " c:" << c << " c2:" << c2;
    // return 0;

    // for (int i = 10; i >= 0; --i)
    //     std::cout << i << std::endl;

    // unsigned u = 11; //ȷ��Ҫ�������������ӱ�����1������ʼ
    // while (u > 0)
    // {
    //     --u;    //�ȼ�1���������һ�ε���ʱ�ͻ����0
    //     std::cout << u << std::endl;
    // }
    // // ��ϰ2.3
    // unsigned u = 10, u2 = 42; //���32λ
    // std::cout << u2 - u << std::endl;
    // std::cout << u - u2 << std::endl;

    // int i = 10, i2 = 42;
    // std::cout << i2 - i << std::endl;
    // std::cout << i - i2 << std::endl;
    // std::cout << i - u << std::endl;
    // std::cout << u - i << std::endl;

    //ת���ַ���ʹ��
    // std::cout << '\n';      //ת���µ�һ��
    // std::cout << "\tHi!\n"; //���һ���Ʊ�������"Hi!",ת����һ��
    // int month = 9, day = 7;
    // std::cout << "month" << month << "day" << day;
    // // int month = 09, day = 07;   //09�ڰ˽�����Ч
    // std::cout << "month" << month << "day" << day;
    // int sum = 0, value, //sum value �� units_sold
    //     units_sold = 0;
    // Sales_item item;
    // std::string book("0-201-78345-X");

    // int input_value;
    // std::cin >> input_value;
    // double salary, wage = 9999.99;
    // std::string global_str;
    // int global_int;

    // int local_int = 0;
    // std::string local_str = "0";
    // std::cout << "local_str:\t" << local_str;
    // return 0;
    // double Double;
    // int i, &ri = i;
    // i = 5;
    // ri = 10;
    // std::cout << i << ri << std::endl;
    // // ��ϰ 2.18 
    // int *p1 = nullptr;
    // int *p2 = nullptr;
    // int m = 10, n = 20;
    // p1 = &m; 
    // p2 = &n;
    // // p2 = p1;
    // *p1 = 5;
    // // *p2 = *p1;
    // std::cout << "*p1:" << *p1 << "\n*p2:" << *p2 
    // << "\nm:" << m << std::endl;
    // // ��ϰ 2.20 
    // int i = 42;
    // int *p1 = &i;
    // *p1 = *p1 * *p1;
    // std::cout << "*p1:" << *p1 << std::endl;
    // // i ��һ��int�͵�����p��һ��int��ָ�룬r��һ��int������
    // int i = 1024, *p = &i, &r = i;
    // int i = 42;
    // const int ci = i;
    // int j = ci;
    // // i = 50;
    // std::cout << "i:" << i << " ci: " << ci << " j: " << j << std::endl;
    
    // i = 50;
    // std::cout << "i:" << i << " ci: " << ci << " j: " << j << std::endl;
    int i = 42;
    const int &r1 = i;  //����const int& �󶨵�һ����ͨint����
    const int &r2 = 42; //��ȷ��r2��һ����������
    const int &r3 = r1 * 2; //��ȷ��r3��һ����������
    int &r4 = r1 * 2;   //����r4��һ����ͨ�ķǳ�������
}
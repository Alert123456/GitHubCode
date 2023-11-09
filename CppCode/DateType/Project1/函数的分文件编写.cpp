#include<iostream>
using namespace std;
//函数的分文件编写
//实现两个数字进行交换的函数
#include "swap.h"


int main465() {

	int a = 10;
	int b = 20;
	swap(a, b);
	cout << a << b << endl;
	system("pause");
	return 1;
}
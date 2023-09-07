#include<iostream>
using namespace std;

int main31() {
	/*
	// 加减乘除
	int a1 = 10;
	int b1 = 3;

	cout << a1 + b1 << endl;
	cout << a1 - b1 << endl;
	cout << a1 * b1 << endl;
	// 两个整数相除，结果仍然是整数，小数部分去除
	cout << a1 / b1 << endl;

	// 两个小数可以相除
	double d1 = 0.5;
	double d2 = 0.25;
	// 两个小数相除，结果可以是整数或者小数
	cout << d1 / d2 << endl;
	
	double d1 = 3.14;
	double d2 = 1.1;
	*/
//	cout << d1 % d2 << endl;
	/*
	//1、前置递增
	int a = 10;
	++a; //让变量进行加一
	cout << "a = " << a << endl;

	//2、后置递增
	int b = 10;
	b++; //让变量进行加一
	cout << "b = " << b << endl;
	*/
	

	//前置与后置的区别
	// 前置递增，先让变量+1，然后表达式运算
	int a = 10;
	int b = a++ * 10;
	cout << a << endl;
	cout << b << endl;

	 a = 10;
	 b = ++a * 10;
	cout << a << endl;
	cout << b << endl;



	system("pause");

	return 0;
}

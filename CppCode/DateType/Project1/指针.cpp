#include<iostream>
using namespace std;
int maina() {
	// 1、定义指针
	int a = 10;
	//指针定义的语法；数据类型 * 指针变量名
	int* p;
	//让指针记录变量a的地址
	p = &a;
	cout << " a 的地址为：" << &a << endl;
	cout << " a 的地址为：" << &a << endl;

	//2、使用指针

	system("pause");
	return 0;
}



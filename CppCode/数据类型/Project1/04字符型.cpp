#include<iostream>
using namespace std;

int main2() {

	// 1、字符型变量创建的方式
	char ch = 'a';
	cout << ch << endl;

	// 2、字符串变量所占内存空间

	cout << "char字符变量所占内存" << sizeof("char") << endl;

	int a = (int)ch;

	cout << "a字符变量所占内存" << a << endl;

	system("pause");

	return 0;
}
#include<iostream>
#include<string>
using namespace std;

int main6() {

	// C风格字符串
	// note: char 字符串名 []
	// note2 等到后边 要用双引号 包含起来字符串
	char str[] = "hello world";

	cout << str << endl;

	// C++风格字符串
	// 包含头文件 #include<string>
	string str2 = "hello world";

	cout << str2 << endl;

	system("pause");

	return 0;
}
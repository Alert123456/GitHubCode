#include <iostream>
using namespace std;

//函数的声明
//比较函数，实现两个整形数字进行比较，返回较大的值

//提前告诉编译器的存在，利用函数的声明

int max(int a, int b);
int main444() {
	int a = 10;
	int b = 20;

	cout << max(a, b) << endl;

	system("pause");
	return 0;
}
//定义
int max(int a, int b) {
	return a > b ? a : b;
}
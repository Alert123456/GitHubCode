#include<iostream>
using namespace std;

// 函数默认参数

int func(int a, int b = 20, int c = 30) {
	return a + b + c;
}

int main() {

	cout << func(10,30) << endl;
	system("pause");
	return 0;
}
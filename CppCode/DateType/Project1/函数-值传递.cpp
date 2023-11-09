#include<iostream>
using namespace std;


//值传递

//如果函数不需要返回值，声明的时候可以写void
void swap1(int num1, int num2) {
	cout << "交换前： " << endl;
	cout << "num1 =  " << num1 << endl;
	cout << "num2 =  " << num2 << endl;

	int tmp = num1;
	num1 = num2;
	num2 = tmp;

	cout << "交换后： " << endl;
	cout << "num1 =  " << num1 << endl;
	cout << "num2 =  " << num2 << endl;
}

int main111() {
	int a = 10;
	int b = 20;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	swap(a, b);

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	system("pause");

	return 0;
}
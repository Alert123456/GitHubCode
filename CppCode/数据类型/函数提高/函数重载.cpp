#include<iostream>
using namespace std;

// 函数重载
//可以让函数名相同，提高复用性

void func()
{
	cout << "func 的调用" << endl;
}

//void func(int a)
//{
//	cout << "func(int a) 的调用!" << endl;
//}

void func(int a, double b)
{
	cout << "func(int a, double b) 的调用!" << endl;
}

void func(double a, int b)
{
	cout << "func(double a, int b) 的调用!" << endl;
}

// 引用作为重载的条件
void func(int& a) // int &a = 10; 不合法
{
	cout << "func(int &a)调用" << endl;
}

void func(const int& a) // const int &a = 10; 合法
{
	cout << "func(const int &a)调用" << endl;
}

// 2、函数重载碰到默认参数

void func2(int a, int b = 10)
{
	cout << "func2(int a, int b)的调用" << endl;
}

void func2(int a)
{
	cout << "func2(int a)的调用" << endl;
}

// 注意事项
// 函数的返回值不可以作为函数重载的条件 
int main() {

	//func();
	//int a = 5;
	//func(a);
	//func(5);
	//func(3.14, 5);
	//func(5, 3.14);
	//func2(10); // 当函数重载碰到默认参数，产生二异性
	system("pause");
	return 0;
}
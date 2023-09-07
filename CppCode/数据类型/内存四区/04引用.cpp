#include<iostream>
using namespace std;

//// 1、值交换
//void mySwap01(int a, int b) {
//	int temp = a;
//	a = b;
//	b = temp;
//}
//
//// 2、地址传递
//void mySwap2(int *a, int *b) {
//	int temp = *a;
//	*a = *b;
//	*b = temp;
//}
//// 3、引用传递
//void mySwap03(int &a, int &b) {
//	int temp = a;
//	a = b;
//	b = temp;
//}

// 引用做函数的返回值
// 1、不要返回局部变量的引用
int& test01()
{
	int a = 10;	//局部变量存放在四区中的栈区
	return a;
}
int& test02()
{

	//静态变量存放在四区中的全局区，全局区上的数据在程序结束后释放
	static int a = 10;
	return a;
}
int main10() {

	//引用基本语法
	//数据类型 &别名 = 原名

	//int a = 10;
	////创建引用
	//int& b = a;

	//cout << "a = " << a << endl;
	//cout << "b = " << b << endl;

	//b = 100;

	//cout << "a = " << a << endl;
	//cout << "b = " << b << endl;
	// 引用的注意事项
	//int a = 10;
	////1、引用必须初始化
	//int& b = a;
	////2、引用在初始化后，不可以改变
	//int c = 20;
	//b = c;
	//cout << "a = " << a << endl;
	//cout << "b = " << b << endl;
	//cout << "c = " << c << endl;
	//int a = 10;
	//int b = 20;
	//
	////mySwap01(a, b); // 值传递，形参不会修饰实参
	////mySwap2(&a, &b); // 地址传递，形参会修饰实参的
	//mySwap03(a, b); // 引用传递，形参会修饰实参的

	//cout << "a = " << a << endl;
	//cout << "b = " << b << endl;

	//int& ref = test01();

	//cout << "ref = " << ref << endl; //第一次结果正确，因为编译器做了保留
	//cout << "ref = " << ref << endl; //第二次结果错误，因为a的内存已经释放

	int& ref = test02();
	cout << "ref = " << ref << endl; //第一次结果正确，因为编译器做了保留

	test02() = 1000;//如果函数的返回值是引用，这个函数调用可以做为左值

	cout << "ref = " << ref << endl; //第二次结果错误，因为a的内存已经释放


	system("pause");

	return 0;
}
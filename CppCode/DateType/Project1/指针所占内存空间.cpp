#include<iostream>
using namespace std;
void swap01(int a, int b)
{
	int tmp = a;
	a = b;
	b = tmp;
}

void swap02(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

int main0011() {
	/*
	//指针所占内存空间
	int a = 10;

	int* p = &a;

	cout << "sizeof(int*)" << sizeof(int*) << endl;
	cout << "sizeof(float*)" << sizeof(float*) << endl;
	cout << "sizeof(double*)" << sizeof(double*) << endl;
	cout << "sizeof(char*)" << sizeof(char*) << endl;
	*/

	/*空指针
	1、空指针用于给指针变量进行初始化
	int* p = null;

	2、空指针是不可以进行访问的
	 0-255之间的内存编号是系统占用的
	*p = 100;
	cout << "*p" << *p;*/
	/*
	
	////野指针
	////程序中尽量避免使用野指针
	//int* p = (int*)0x1100;
	int a = 10;
	int b = 20;
	const int* p = &a;
	//cout << *p << endl;
	// 1、const修饰指针 常量指针
	//指针指向的值不可以改，指针的指向可以改
	//* p = 20;
	p = &b;

	//2、const修饰常量
	//指针的指向不可以改，指针指向的值可以改
	int* const p2 = &a;
	*p2 = 100;
	//p2 = &b; //错误指针的指向不可以改

	// const 修饰指针和常量
	const int* const p3 = &a;
	//*p3 = 100;
	//p3 = &b;
	*/

	////指针和数组
	////利用指针访问数组中的元素
	//int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	//cout << "第一个元素为：" << arr[0] << endl;
	//int* p = arr; // arr就是数组元素首地址
	//cout << "利用指针访问第一个元素：" << *p << endl;
	//p++;
	//cout << "利用指针访问第二个元素：" << *p << endl;


	//cout << "利用指针遍历数组" << endl;
	//int* p2 = arr;
	//for (int i = 0; i < 10; i++, p2++)
	//{
	//	cout << *p2 << endl;
	//}

	// 指针和函数
	int a = 10;
	int b = 20;
	swap02(&a, &b);

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	system("pause");
	return 0;
}
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
	//ָ����ռ�ڴ�ռ�
	int a = 10;

	int* p = &a;

	cout << "sizeof(int*)" << sizeof(int*) << endl;
	cout << "sizeof(float*)" << sizeof(float*) << endl;
	cout << "sizeof(double*)" << sizeof(double*) << endl;
	cout << "sizeof(char*)" << sizeof(char*) << endl;
	*/

	/*��ָ��
	1����ָ�����ڸ�ָ��������г�ʼ��
	int* p = null;

	2����ָ���ǲ����Խ��з��ʵ�
	 0-255֮����ڴ�����ϵͳռ�õ�
	*p = 100;
	cout << "*p" << *p;*/
	/*
	
	////Ұָ��
	////�����о�������ʹ��Ұָ��
	//int* p = (int*)0x1100;
	int a = 10;
	int b = 20;
	const int* p = &a;
	//cout << *p << endl;
	// 1��const����ָ�� ����ָ��
	//ָ��ָ���ֵ�����Ըģ�ָ���ָ����Ը�
	//* p = 20;
	p = &b;

	//2��const���γ���
	//ָ���ָ�򲻿��Ըģ�ָ��ָ���ֵ���Ը�
	int* const p2 = &a;
	*p2 = 100;
	//p2 = &b; //����ָ���ָ�򲻿��Ը�

	// const ����ָ��ͳ���
	const int* const p3 = &a;
	//*p3 = 100;
	//p3 = &b;
	*/

	////ָ�������
	////����ָ����������е�Ԫ��
	//int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	//cout << "��һ��Ԫ��Ϊ��" << arr[0] << endl;
	//int* p = arr; // arr��������Ԫ���׵�ַ
	//cout << "����ָ����ʵ�һ��Ԫ�أ�" << *p << endl;
	//p++;
	//cout << "����ָ����ʵڶ���Ԫ�أ�" << *p << endl;


	//cout << "����ָ���������" << endl;
	//int* p2 = arr;
	//for (int i = 0; i < 10; i++, p2++)
	//{
	//	cout << *p2 << endl;
	//}

	// ָ��ͺ���
	int a = 10;
	int b = 20;
	swap02(&a, &b);

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	system("pause");
	return 0;
}
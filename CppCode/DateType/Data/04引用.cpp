#include<iostream>
using namespace std;

//// 1��ֵ����
//void mySwap01(int a, int b) {
//	int temp = a;
//	a = b;
//	b = temp;
//}
//
//// 2����ַ����
//void mySwap2(int *a, int *b) {
//	int temp = *a;
//	*a = *b;
//	*b = temp;
//}
//// 3�����ô���
//void mySwap03(int &a, int &b) {
//	int temp = a;
//	a = b;
//	b = temp;
//}

// �����������ķ���ֵ
// 1����Ҫ���ؾֲ�����������
int& test01()
{
	int a = 10;	//�ֲ���������������е�ջ��
	return a;
}
int& test02()
{

	//��̬��������������е�ȫ������ȫ�����ϵ������ڳ���������ͷ�
	static int a = 10;
	return a;
}
int main10() {

	//���û����﷨
	//�������� &���� = ԭ��

	//int a = 10;
	////��������
	//int& b = a;

	//cout << "a = " << a << endl;
	//cout << "b = " << b << endl;

	//b = 100;

	//cout << "a = " << a << endl;
	//cout << "b = " << b << endl;
	// ���õ�ע������
	//int a = 10;
	////1�����ñ����ʼ��
	//int& b = a;
	////2�������ڳ�ʼ���󣬲����Ըı�
	//int c = 20;
	//b = c;
	//cout << "a = " << a << endl;
	//cout << "b = " << b << endl;
	//cout << "c = " << c << endl;
	//int a = 10;
	//int b = 20;
	//
	////mySwap01(a, b); // ֵ���ݣ��ββ�������ʵ��
	////mySwap2(&a, &b); // ��ַ���ݣ��βλ�����ʵ�ε�
	//mySwap03(a, b); // ���ô��ݣ��βλ�����ʵ�ε�

	//cout << "a = " << a << endl;
	//cout << "b = " << b << endl;

	//int& ref = test01();

	//cout << "ref = " << ref << endl; //��һ�ν����ȷ����Ϊ���������˱���
	//cout << "ref = " << ref << endl; //�ڶ��ν��������Ϊa���ڴ��Ѿ��ͷ�

	int& ref = test02();
	cout << "ref = " << ref << endl; //��һ�ν����ȷ����Ϊ���������˱���

	test02() = 1000;//��������ķ���ֵ�����ã�����������ÿ�����Ϊ��ֵ

	cout << "ref = " << ref << endl; //�ڶ��ν��������Ϊa���ڴ��Ѿ��ͷ�


	system("pause");

	return 0;
}
#include<iostream>
using namespace std;

// ��������
//�����ú�������ͬ����߸�����

void func()
{
	cout << "func �ĵ���" << endl;
}

//void func(int a)
//{
//	cout << "func(int a) �ĵ���!" << endl;
//}

void func(int a, double b)
{
	cout << "func(int a, double b) �ĵ���!" << endl;
}

void func(double a, int b)
{
	cout << "func(double a, int b) �ĵ���!" << endl;
}

// ������Ϊ���ص�����
void func(int& a) // int &a = 10; ���Ϸ�
{
	cout << "func(int &a)����" << endl;
}

void func(const int& a) // const int &a = 10; �Ϸ�
{
	cout << "func(const int &a)����" << endl;
}

// 2��������������Ĭ�ϲ���

void func2(int a, int b = 10)
{
	cout << "func2(int a, int b)�ĵ���" << endl;
}

void func2(int a)
{
	cout << "func2(int a)�ĵ���" << endl;
}

// ע������
// �����ķ���ֵ��������Ϊ�������ص����� 
int main() {

	//func();
	//int a = 5;
	//func(a);
	//func(5);
	//func(3.14, 5);
	//func(5, 3.14);
	//func2(10); // ��������������Ĭ�ϲ���������������
	system("pause");
	return 0;
}
#include<iostream>
using namespace std;


//ֵ����

//�����������Ҫ����ֵ��������ʱ�����дvoid
void swap1(int num1, int num2) {
	cout << "����ǰ�� " << endl;
	cout << "num1 =  " << num1 << endl;
	cout << "num2 =  " << num2 << endl;

	int tmp = num1;
	num1 = num2;
	num2 = tmp;

	cout << "������ " << endl;
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
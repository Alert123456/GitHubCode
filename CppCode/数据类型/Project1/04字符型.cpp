#include<iostream>
using namespace std;

int main2() {

	// 1���ַ��ͱ��������ķ�ʽ
	char ch = 'a';
	cout << ch << endl;

	// 2���ַ���������ռ�ڴ�ռ�

	cout << "char�ַ�������ռ�ڴ�" << sizeof("char") << endl;

	int a = (int)ch;

	cout << "a�ַ�������ռ�ڴ�" << a << endl;

	system("pause");

	return 0;
}
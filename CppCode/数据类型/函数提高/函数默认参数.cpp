#include<iostream>
using namespace std;

// ����Ĭ�ϲ���
int func(int a, int b = 20, int c = 30) {
	return a + b + c;
}

int func2(int a = 10, int b = 10);

int func2(int a, int b) {
	return a + b;
}
int main() {

	cout << func(10,30) << endl;
	system("pause");
	return 0;
}
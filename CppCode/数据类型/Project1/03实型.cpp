#include<iostream>
using namespace std;

int main1() {

	float f1 = 3.14f;

	cout << "f1 = " << f1 << endl;

	double d1 = 3.14;

	cout << "d1 = " << d1 << endl;

	float f2 = 3e2; // 3 * 10 ^ 2;

	cout << "f2 = " << f2 << endl;

	float f3 = 3e-2; // 3 * 0.1 ^ 2;

	cout << "f3 = " << f3 << endl;

	//统计float和double占用的内存空间

	cout << "float 占用的内存空间为：" << sizeof(float) << endl;

	cout << "double 占用的内存空间为：" << sizeof(double) << endl;

	system("pause");

	return 0;
}

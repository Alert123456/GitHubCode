#include<iostream>
using namespace std;

// 占位参数 
// 目前占位用不到
// 占位参数还可以有默认参数
void func(int a, int = 10)
{
	cout << "this is func" << endl;
}

int main() {

	func(10);

	system("pause");
	return 0;
}
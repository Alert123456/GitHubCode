#include<iostream>
using namespace std;
//冒泡排序函数
void bubbleSort(int *arr, int len) {
	for (int i = 0; i < len - 1; i++) {
		for (int j = 0; j < len - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
}
//打印数组
void printArraay(int* arr, int len) {
	for (int i = 0; i < len; i++) {
		cout << arr[i] << endl;
	}
}
int main011() {
	//1、先创建数组
	int arr[10] = { 4,3,6,9,1,2,10,8,7,5 };
	//2、创建函数，实现冒泡排序
	int len = sizeof(arr) / sizeof(arr[0]);
	bubbleSort(arr, len);
	//3、打印数组
	printArraay(arr, len);
	system("pause");
	return 0;
}
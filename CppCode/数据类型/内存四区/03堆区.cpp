#include<iostream>
using namespace std;

// 1��new�Ļ����﷨
int* func01()
{
	// �ڶ���������������
	// new ���ص��� ���������͵�ָ��
	int* p = new int(10);
	return p;
}

void test01()
{
	int* p = func01();
	cout << *p << endl;
	cout << *p << endl;
	//�������� �ɳ���Ա�����٣�����Ա�����ͷ�
	//������ͷŶ������ݣ����ùؼ���delete
	delete p;
	// cout << *p << endl; //�ڴ��Ѿ����ͷţ��ٴη��ʾ��ǷǷ�����
}
// 2���ڶ�������new��������
void test02()
{
	//����10���������ݵ����飬�ڶ���
	int * arr = new int[10]; //����ʮ��Ԫ��
	for (int i = 0; i < 10; i++) {
		arr[i] = i + 100;
	}
	for (int i = 0; i < 10; i++) {
		cout << arr[i] << endl;
	}
	//�ͷŶ�������
	//�ͷ������ʱ�򣬼�[]�ſ���
	delete[] arr;
}
int main03() {
	test01();
	test02();
	system("pause");

	return 0;
}
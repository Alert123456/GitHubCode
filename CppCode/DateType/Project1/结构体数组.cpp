#include<iostream>
#include<string>
using namespace std;

//�ṹ������
//1������ṹ��
struct Student
{
	//����
	string name;
	//����
	int age;
	//����
	int score;
};
int main01221() {

//2�������ṹ������
	struct Student stuArray[3] =
	{
		{"����", 18, 100},
		{"����", 28, 99},
		{"����", 38, 66}
	};
	for (int i = 0; i < 3; i++)
	{
		cout << " ����: " << stuArray[i].name 
			<< " ����: " << stuArray[i].age
			<< " ����: " << stuArray[i].score << endl;
	}
	system("pause");
	return 0;
}
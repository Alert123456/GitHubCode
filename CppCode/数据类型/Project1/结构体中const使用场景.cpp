#include<iostream>
#include<string>
using namespace std;

// const��ʹ�ó���

struct student
{
	string name;
	int age;
	int score;
};
// �������е��βθ�Ϊָ�룬���Լ����ڴ�ռ䣬���Ҳ��ḳֵ�µĸ�������
void printStudents(const student* s) {
	//s->age = 100; //����const֮��һ�����޸ĵĲ����ͻᱨ�����Է�ֹ�����
	cout << "������" << s->name << "���䣺" << s->age
		<< "�ɼ���" << s->score << endl;
}

int main2113() {

	//�����ṹ�����
	student s = { "����", 18, 100 };

	//ͨ��������ӡ�ṹ����Ϣ
	printStudents(&s);

	system("pause");
	return 0;
}
#include<iostream>
#include<string>
using namespace std;

//�ṹ��ָ��
struct student
{
	string name;
	int age;
	int score;
};

//������ʦ�ṹ��
struct teacher
{
	int id;//��ʦ���
	string name; //��ʦ����
	int age; //����
	struct student stu; //������ѧ��

};

// ��ӡѧ����Ϣ����
void printstudent1(struct student s) {
	s.age = 100;
	cout << "�Ӻ���1�д�ӡ ������" << s.name << "���䣺" << s.age
		<< "�ɼ���" << s.score << endl;
}

// ��ӡѧ����Ϣ����
void printstudent2(struct student* s) {
	s->age = 200;
	cout << "�Ӻ���2�д�ӡ ������" << s->name << "���䣺" << s->age
		<< "�ɼ���" << s->score << endl;
}

int main223() {

	////1������ѧ���Ľṹ�����
	//student s = { "����", 18, 100 };
	////2��ͨ��ָ��ָ��ṹ�����
	//student* p = &s;

	////3��ͨ��ָ����ʽṹ������е�����

	//cout << "������" << p->name << "���䣺" << p->age 
	//	<< "�ɼ���" << p->score;

	//�ṹ��Ƕ�׽ṹ��
	//������ʦ
	/*teacher t;
	t.id = 1000;
	t.name = "wang";
	t.age = 50;
	t.stu.name = "С��";
	t.stu.age = 20;
	t.stu.score = 60;

	cout << "��ʦ������" << t.name << "��ʦ��ţ�" << t.id
		<< "��ʦ����" << t.age << t.stu.age << t.stu.name 
		<< t.stu.score;*/

	//�ṹ������������
	// ��ѧ�����뵽һ�������У���ӡѧ������������Ϣ
	student s = { "����", 18, 100 };
	printstudent1(s);
	printstudent2(&s);

	cout << "�������д�ӡ ������" << s.name << "���䣺" << s.age
		<< "�ɼ���" << s.score << endl;

 	system("pause");
	return 0;
}
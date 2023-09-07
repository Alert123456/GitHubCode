#include<iostream>
#include<string>
#include<ctime>
using namespace std;

//�ṹ��ָ��
struct student
{
	string sName;
	int score;
};

//������ʦ�ṹ��
struct Teacher
{
	string tName; //��ʦ����
	struct student sArray[5]; //������ѧ��

};

//����ʦ��ѧ����ֵ�ĺ���
void allocateSpace(struct Teacher tArray[], int len) {

	srand((unsigned int)time(NULL));

	string nameSeed = "ABCDE";
	// ����ʦ��ʼ��ֵ
	for (int i = 0; i < len; i++)
	{
		tArray[i].tName = "Teacher_";
		tArray[i].tName += nameSeed[i];

		//ͨ��ѭ����ÿ����ʦ������ѧ����ֵ
		for (int j = 0; j < 5; j++)
		{
			tArray[i].sArray[j].sName = "Student_";
			tArray[i].sArray[j].sName += nameSeed[j];
			int random = rand() % 61 + 40;
			tArray[i].sArray[j].score = random;
		}
	}
}

//��ӡ������Ϣ
void printInfo(struct Teacher tArray[], int len) {
	for (int i = 0; i < len; i++)
	{
		cout << "��ʦ������" << tArray[i].tName << endl;

		for (int j = 0; j < 5; j++)
		{
			cout << "\tѧ��������" << tArray[i].sArray[j].sName
				<< "ѧ���÷֣�" << tArray[i].sArray[j].score << endl;
		}
	}
}

//1�����Ӣ�۽ṹ��
struct Hero
{
	// ����
	string name;
	// ����
	int age;
	// �Ա�
	string sex;
};

//ð������ ʵ��������������
void bubbleSort(struct Hero heroArray[], int len) {
	for (int i = 0; i < len - 1 ; i++) {
		for (int j = 0; j < len - i - 1; j++) {
			//���j�±��Ԫ������ ���� j + 1 �±��Ԫ�ص����䣬 ��������Ԫ��
			if (heroArray[j].age > heroArray[j + 1].age) {
				struct Hero tmp = heroArray[j];
				heroArray[j] = heroArray[j + 1];
				heroArray[j + 1] = tmp;
			}
		}
	}
}

//��ӡ����������е���Ϣ
void printHero(struct Hero heroArray[], int len) {
	for (int i = 0; i < len; i++) {
		cout << "\t������ " << heroArray[i].name 
			<< "\t���䣺" << heroArray[i].age
			<< "\t�Ա�" << heroArray[i].sex << endl;
	}
}

int main1010101() {

	////����3����ʦ������
	//struct Teacher tArray[3];

	////ͨ��������3����ʦ����Ϣ��ֵ��������ʦ����ѧ����Ϣ��ֵ
	//int len = sizeof(tArray) / sizeof(tArray[0]);
	//allocateSpace(tArray, len);

	////��ӡ������Ϣ
	//printInfo(tArray, len);

	//2������������5��Ӣ��
	struct Hero heroArray[5] =
	{
		{"����",23,"��"},
		{"����",22,"��"},
		{"�ŷ�",20,"��"},
		{"����",21,"��"},
		{"����",19,"Ů"},
	};
	//// ���Դ���
	int len = sizeof(heroArray) / sizeof(heroArray[0]);
	cout << "����ǰ��ӡ" << endl;
	for (int i = 0; i < len; i++)
	{
		cout << "\t������ " << heroArray[i].name 
			<< "\t���䣺" << heroArray[i].age
			<< "\t�Ա�" << heroArray[i].sex << endl;
	}
	//3��������������򣬰������������������
	bubbleSort(heroArray, len);
	//4�������������ӡ���
	cout << "������ӡ" << endl;
	printHero(heroArray, len);

	system("pause");
	return 0;
}
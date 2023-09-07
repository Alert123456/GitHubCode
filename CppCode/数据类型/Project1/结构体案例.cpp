#include<iostream>
#include<string>
#include<ctime>
using namespace std;

//结构体指针
struct student
{
	string sName;
	int score;
};

//定义老师结构体
struct Teacher
{
	string tName; //教师姓名
	struct student sArray[5]; //辅导的学生

};

//给老师和学生赋值的函数
void allocateSpace(struct Teacher tArray[], int len) {

	srand((unsigned int)time(NULL));

	string nameSeed = "ABCDE";
	// 给老师开始赋值
	for (int i = 0; i < len; i++)
	{
		tArray[i].tName = "Teacher_";
		tArray[i].tName += nameSeed[i];

		//通过循环给每名老师所带的学生赋值
		for (int j = 0; j < 5; j++)
		{
			tArray[i].sArray[j].sName = "Student_";
			tArray[i].sArray[j].sName += nameSeed[j];
			int random = rand() % 61 + 40;
			tArray[i].sArray[j].score = random;
		}
	}
}

//打印所有信息
void printInfo(struct Teacher tArray[], int len) {
	for (int i = 0; i < len; i++)
	{
		cout << "老师姓名：" << tArray[i].tName << endl;

		for (int j = 0; j < 5; j++)
		{
			cout << "\t学生姓名：" << tArray[i].sArray[j].sName
				<< "学生得分：" << tArray[i].sArray[j].score << endl;
		}
	}
}

//1、设计英雄结构体
struct Hero
{
	// 姓名
	string name;
	// 年龄
	int age;
	// 性别
	string sex;
};

//冒泡排序 实现年龄升序排列
void bubbleSort(struct Hero heroArray[], int len) {
	for (int i = 0; i < len - 1 ; i++) {
		for (int j = 0; j < len - i - 1; j++) {
			//如果j下标的元素年龄 大于 j + 1 下标的元素的年龄， 交换两个元素
			if (heroArray[j].age > heroArray[j + 1].age) {
				struct Hero tmp = heroArray[j];
				heroArray[j] = heroArray[j + 1];
				heroArray[j + 1] = tmp;
			}
		}
	}
}

//打印排序后数组中的信息
void printHero(struct Hero heroArray[], int len) {
	for (int i = 0; i < len; i++) {
		cout << "\t姓名： " << heroArray[i].name 
			<< "\t年龄：" << heroArray[i].age
			<< "\t性别：" << heroArray[i].sex << endl;
	}
}

int main1010101() {

	////创建3名老师的数组
	//struct Teacher tArray[3];

	////通过函数给3名老师的信息赋值，并给老师带的学生信息赋值
	//int len = sizeof(tArray) / sizeof(tArray[0]);
	//allocateSpace(tArray, len);

	////打印所有信息
	//printInfo(tArray, len);

	//2、创建数组存放5名英雄
	struct Hero heroArray[5] =
	{
		{"刘备",23,"男"},
		{"关羽",22,"男"},
		{"张飞",20,"男"},
		{"赵云",21,"男"},
		{"貂蝉",19,"女"},
	};
	//// 测试代码
	int len = sizeof(heroArray) / sizeof(heroArray[0]);
	cout << "排序前打印" << endl;
	for (int i = 0; i < len; i++)
	{
		cout << "\t姓名： " << heroArray[i].name 
			<< "\t年龄：" << heroArray[i].age
			<< "\t性别：" << heroArray[i].sex << endl;
	}
	//3、对数组进行排序，按照年龄进行升序排序
	bubbleSort(heroArray, len);
	//4、将排序后结果打印输出
	cout << "排序后打印" << endl;
	printHero(heroArray, len);

	system("pause");
	return 0;
}
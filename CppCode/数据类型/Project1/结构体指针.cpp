#include<iostream>
#include<string>
using namespace std;

//结构体指针
struct student
{
	string name;
	int age;
	int score;
};

//定义老师结构体
struct teacher
{
	int id;//教师编号
	string name; //教师姓名
	int age; //年龄
	struct student stu; //辅导的学生

};

// 打印学生信息函数
void printstudent1(struct student s) {
	s.age = 100;
	cout << "子函数1中打印 姓名：" << s.name << "年龄：" << s.age
		<< "成绩：" << s.score << endl;
}

// 打印学生信息函数
void printstudent2(struct student* s) {
	s->age = 200;
	cout << "子函数2中打印 姓名：" << s->name << "年龄：" << s->age
		<< "成绩：" << s->score << endl;
}

int main223() {

	////1、创建学生的结构体变量
	//student s = { "张三", 18, 100 };
	////2、通过指针指向结构体变量
	//student* p = &s;

	////3、通过指针访问结构体变量中的数据

	//cout << "姓名：" << p->name << "年龄：" << p->age 
	//	<< "成绩：" << p->score;

	//结构体嵌套结构体
	//创建老师
	/*teacher t;
	t.id = 1000;
	t.name = "wang";
	t.age = 50;
	t.stu.name = "小王";
	t.stu.age = 20;
	t.stu.score = 60;

	cout << "老师姓名：" << t.name << "老师编号：" << t.id
		<< "老师年龄" << t.age << t.stu.age << t.stu.name 
		<< t.stu.score;*/

	//结构体做函数参数
	// 将学生传入到一个参数中，打印学生身上所有信息
	student s = { "张三", 18, 100 };
	printstudent1(s);
	printstudent2(&s);

	cout << "主函数中打印 姓名：" << s.name << "年龄：" << s.age
		<< "成绩：" << s.score << endl;

 	system("pause");
	return 0;
}
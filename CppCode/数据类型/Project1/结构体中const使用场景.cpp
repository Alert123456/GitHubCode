#include<iostream>
#include<string>
using namespace std;

// const的使用场景

struct student
{
	string name;
	int age;
	int score;
};
// 将函数中的形参改为指针，可以减少内存空间，而且不会赋值新的副本出来
void printStudents(const student* s) {
	//s->age = 100; //加入const之后，一旦有修改的操作就会报错，可以防止误操作
	cout << "姓名：" << s->name << "年龄：" << s->age
		<< "成绩：" << s->score << endl;
}

int main2113() {

	//创建结构体变量
	student s = { "张三", 18, 100 };

	//通过函数打印结构体信息
	printStudents(&s);

	system("pause");
	return 0;
}
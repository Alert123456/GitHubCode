#include<iostream>
#include<queue>
using namespace std;
int main()
{
	priority_queue<int> q;
	q.push(3);     //入队 
	q.push(5);
	q.push(1);
	cout<<q.top()<<endl;     //获取队首元素 
	q.pop();			//令队首元素出队 
	cout<<q.top()<<endl;
	if(q.empty())
	{
		cout<<"Empty"<<endl;
	}
	else
	{
		cout<<"Not empty"<<endl;
	}
	cout<<q.size()<<endl; 
	return 0;
}
#include<iostream>
#include<queue>
using namespace std;
int main()
{
	priority_queue<int> q;
	q.push(3);     //��� 
	q.push(5);
	q.push(1);
	cout<<q.top()<<endl;     //��ȡ����Ԫ�� 
	q.pop();			//�����Ԫ�س��� 
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
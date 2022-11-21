//头文件
#include <iostream>
#include <vector>
#include <string>
#include <list>
#include <ctime>

using namespace std;

#define MAXSIZE 20
#define ERROR 0
#define OK 1
#define FALSE 0

typedef int QElemType;

struct SqQueue
{
    QElemType data[MAXSIZE];
    int front;  /* 头指针 */
    int rear;   /* 尾指针，指向队列尾的下一个位置 */
};

/* 队列支持的操作 */
//初始化操作，建立一个空队列Q
InitQueue(SqQueue *Q);      
//返回队列Q的元素个数
QueueLength(SqQueue Q);   
//若队列Q存在，插入新元素e到队列Q中成为队尾元素
EnQueue(SqQueue *Q, int e);     
//删除队列Q中队头元素，并用e返回其值
DeQueue(SqQueue *Q, int *e);      
// DestroyQueue(*Q);   //若队列存在，则销毁它
// ClearQueue(*Q);     //将队列清空
// QueueEmpty(*Q);     //若队列为空，则返回true，否则返回false
// GetHead(Q, *e);     //若队列Q存在且非空，用e返回队列Q的队头元素


// QueueLength(Q);     //返回队列Q的元素个数
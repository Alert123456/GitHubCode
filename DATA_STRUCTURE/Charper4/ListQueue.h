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

struct Node
{
    QElemType data;
    struct Node *next;
};
typedef Node *QueuePtr;
struct ListQueue
{
    QueuePtr front, rear;   //队头、队尾指针
};

/* 插入元素e为Q的新队尾元素 */
int EnQueue(ListQueue *Q, QElemType e);
/* 删除队列S的头结点元素，抛出e */
int DeQueue(ListQueue *Q, QElemType *e);

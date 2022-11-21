#include "Queue.h"

int main()
{
    return OK;
}

//初始化操作，建立一个空队列Q
 int InitQueue(SqQueue *Q)      
{
    Q->front = 0;
    Q->rear = 0;
}

//返回队列Q的元素个数
int QueueLength(SqQueue Q)
{
    return ( Q.rear - Q.front + MAXSIZE ) % MAXSIZE;
}

//若队列Q存在，插入新元素e到队列Q中成为队尾元素
int EnQueue(SqQueue *Q, int e)
{
    if( (Q->rear + 1) % MAXSIZE == Q->front )
        return ERROR;
    Q->data[Q->rear] = e;
    Q->rear = (Q->front + 1) % MAXSIZE; //rear指针向后移一位置
    return OK;
}
//删除队列Q中队头元素，并用e返回其值
DeQueue(SqQueue *Q, int *e)
{
    if (Q->rear == Q->front)    //队列为空
        return ERROR;
    *e = Q->data[Q->front];
    Q->front = (Q->front + 1) % MAXSIZE; //front指针向后移一位置
    return OK;
}
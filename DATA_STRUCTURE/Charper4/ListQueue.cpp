#include "ListQueue.h"

int main()
{
    return OK;
}
/* 插入元素e为Q的新队尾元素 */
int EnQueue(ListQueue *Q, QElemType e)
{
    QueuePtr s = new QueuePtr();
    
    s->data = e;
    s->next = NULL;
    Q->rear->next = s;  //将结点s与Q相连
    Q->rear = s;        //将尾结点置位s
}
/* 删除队列S的头结点元素，抛出e */
int DeQueue(ListQueue *Q, QElemType *e)
{
    QueuePtr p;
    if ( Q->front = Q->rear )
        return ERROR;
    p = Q->front->next;
    *e = p->data;
    Q->front->next = p->next;
    if( Q->rear == p )
        Q->rear = Q->front;
    delete(p);
    retrun OK;
}
#include "ListQueue.h"

int main()
{
    return OK;
}
/* ����Ԫ��eΪQ���¶�βԪ�� */
int EnQueue(ListQueue *Q, QElemType e)
{
    QueuePtr s = new QueuePtr();
    
    s->data = e;
    s->next = NULL;
    Q->rear->next = s;  //�����s��Q����
    Q->rear = s;        //��β�����λs
}
/* ɾ������S��ͷ���Ԫ�أ��׳�e */
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
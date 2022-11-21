#include "Queue.h"

int main()
{
    return OK;
}

//��ʼ������������һ���ն���Q
 int InitQueue(SqQueue *Q)      
{
    Q->front = 0;
    Q->rear = 0;
}

//���ض���Q��Ԫ�ظ���
int QueueLength(SqQueue Q)
{
    return ( Q.rear - Q.front + MAXSIZE ) % MAXSIZE;
}

//������Q���ڣ�������Ԫ��e������Q�г�Ϊ��βԪ��
int EnQueue(SqQueue *Q, int e)
{
    if( (Q->rear + 1) % MAXSIZE == Q->front )
        return ERROR;
    Q->data[Q->rear] = e;
    Q->rear = (Q->front + 1) % MAXSIZE; //rearָ�������һλ��
    return OK;
}
//ɾ������Q�ж�ͷԪ�أ�����e������ֵ
DeQueue(SqQueue *Q, int *e)
{
    if (Q->rear == Q->front)    //����Ϊ��
        return ERROR;
    *e = Q->data[Q->front];
    Q->front = (Q->front + 1) % MAXSIZE; //frontָ�������һλ��
    return OK;
}
//ͷ�ļ�
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
    int front;  /* ͷָ�� */
    int rear;   /* βָ�룬ָ�����β����һ��λ�� */
};

/* ����֧�ֵĲ��� */
//��ʼ������������һ���ն���Q
InitQueue(SqQueue *Q);      
//���ض���Q��Ԫ�ظ���
QueueLength(SqQueue Q);   
//������Q���ڣ�������Ԫ��e������Q�г�Ϊ��βԪ��
EnQueue(SqQueue *Q, int e);     
//ɾ������Q�ж�ͷԪ�أ�����e������ֵ
DeQueue(SqQueue *Q, int *e);      
// DestroyQueue(*Q);   //�����д��ڣ���������
// ClearQueue(*Q);     //���������
// QueueEmpty(*Q);     //������Ϊ�գ��򷵻�true�����򷵻�false
// GetHead(Q, *e);     //������Q�����ҷǿգ���e���ض���Q�Ķ�ͷԪ��


// QueueLength(Q);     //���ض���Q��Ԫ�ظ���
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

struct Node
{
    QElemType data;
    struct Node *next;
};
typedef Node *QueuePtr;
struct ListQueue
{
    QueuePtr front, rear;   //��ͷ����βָ��
};

/* ����Ԫ��eΪQ���¶�βԪ�� */
int EnQueue(ListQueue *Q, QElemType e);
/* ɾ������S��ͷ���Ԫ�أ��׳�e */
int DeQueue(ListQueue *Q, QElemType *e);

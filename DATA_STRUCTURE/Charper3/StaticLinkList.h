//ͷ�ļ�
#include <iostream>
#include <vector>
#include <string>
#include <list>
#include <ctime>

using namespace std;

#define MAXSIZE 1000
#define ERROR 0
#define OK 1
#define FALSE 0

typedef int ElemType;
typedef int Status;

/* ��̬����ṹ */
struct Component
{
    ElemType data;
    int cur;
};

typedef struct Component StaticLinkList[MAXSIZE];
/*��ʼ������״̬*/
Status InitList(StaticLinkList space);
/*����Ĳ���״̬*/
int Malloc_SLL (StaticLinkList space);
/*������м����״̬*/
int ListInsert (StaticLinkList L, int i, ElemType e);
/*�����ɾ��״̬*/
int Free_SSL (StaticLinkList space, int k);
/*������м�ɾ��״̬*/
int ListDelete (StaticLinkList L, int i);
/*������ĳ���*/
int ListLength (StaticLinkList L);
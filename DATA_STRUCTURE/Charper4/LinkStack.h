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

typedef int SElemType;

struct StackNode
{
    SElemType data;
    struct StackNode    *Next;
};

typedef StackNode *LinkStackPtr;

struct LinkStack
{
    LinkStackPtr top;
    int count;
};
/* ����Ԫ��eΪ�µ�ջ��Ԫ�� */
SElemType Push (LinkStack *S, SElemType e); 
/* ɾ��S��ջ��Ԫ�أ���e����ֵ */
SElemType Pop (LinkStack *S, SElemType *e); 
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

typedef int ElemType;
typedef int Status;
/* ���Ա��˫������洢�ṹ */
struct DulNode
{
    ElemType data;
    struct DulNode *prior;  /* ֱ��ǰ��ָ�� */
    struct DulNode *next;  /* ֱ�Ӻ���ָ�� */   
};
typedef DulNode *DuLinkList;

//�ڵ�i��λ�ò����㣬�������Ϊe
Status ListInsert(DuLinkList *L, int i, ElemType e)   
{
    int j;
    DuLinkList p;
    p = *L;
    j = 1;
    while (p && j < i)
    {
        p = p->next;
        ++j;
    }
    if (!p || j > i)
        return ERROR;
    DuLinkList s = new Node();   //����һ���½��
    s->data = e;
    s->prior = p;   /*p��ֵ��s��ǰ��*/
    s->next = p->next;/*p->next��ֵ��s�ĺ���*/
    p->next->prior = s;/*s��ֵ��p->next��ǰ��*/
    p->next = s;/*s��ֵ��p�ĺ���*/
    return OK; 
}
//ɾ����i����㣬������e��ֵ
Status ListDelete(DuLinkList *L, int i, ElemType *e)   
{
    int j;
    DuLinkList p;
    p = *L;
    j = 1;
    while (p && j < i)
    {
        p = p->next;
        ++j;
    }
    if (!p || j > i)
        return ERROR;
    *e = p->data;
    p->prior->next = p->next;/*p->next��ֵ��p->prior�ĺ���*/
    p->next->prior = p->prior;/*p->prior��ֵ��p->next��ǰ��*/

    delete(p);  //new��ӦDelete��malloc��Ӧfree
    return OK; 
}
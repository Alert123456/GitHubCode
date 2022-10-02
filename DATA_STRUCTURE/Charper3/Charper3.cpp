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
/* ˳��洢�ṹ */
struct sqList
{
    ElemType data[ MAXSIZE ] ;    //����洢����Ԫ��
    int length;     //���Ա�ǰ����
};
/* ������ṹ */
struct Node
{
    ElemType data;
    struct Node *next;
};
typedef struct Node *LinkList; //����LinkList

// Status GetElem(sqList L, int i, ElemType *e)
// {
//     if (L.length == 0 || i < 1 || i > L.length)
//     {
//         return ERROR;
//     }
//     *e = L.data[i-1];
//     return OK;
    
// }

Status ListInsert(sqList *L, int i, ElemType e) //������Ԫ�� 
{
    if ( L->length == MAXSIZE)
        return ERROR;
    if (i < 1 || i > L->length + 1)
    {
        return ERROR;
    }
    if ( i <= L->length ) //���ݲ��ڶ�β
    {
        for (size_t k = L->length - 1; k > i - 1; k--)
        {
            L->data[k+1] = L->data[k];
        }
    }
    L->data[i-1] = e;
    L->length++;
    return OK;
}

Status ListDelect(sqList *L, int i, ElemType *e) //ɾ����i��Ԫ��,����e����
{
    if ( L->length == MAXSIZE)
        return ERROR;
    if (i < 1 || i > L->length + 1)
    {
        return ERROR;
    }
    if ( i <= L->length ) //���ݲ��ڶ�β
    {
        for (size_t k = i; k < L->length; k++)
        {
            L->data[k-1] = L->data[k];
        }
    }
    *e = L->data[i-1];
    L->length--;
    return OK;
}
//����б�ĵ�i��Ԫ��
Status GetElem(LinkList L, int i, ElemType *e)
{
    int j;
    LinkList p;
    p = L;
    j = 1;
    while (p && j < i)
    {
        p = p->next;
        ++j;
    }
    if (!p || j > i)
        return ERROR;
    *e = p->data;
    return OK; 
}
//�ڵ�i��λ�ò����㣬�������Ϊe
Status ListInsert(LinkList *L, int i, ElemType e)   
{
    int j;
    LinkList p;
    p = *L;
    j = 1;
    while (p && j < i)
    {
        p = p->next;
        ++j;
    }
    if (!p || j > i)
        return ERROR;
    LinkList s = new Node();;   //����һ���½��
    s->data = e;
    s->next = p->next;
    p->next = s;
    return OK; 
}
//ɾ����i����㣬������e��ֵ
Status ListDelete(LinkList *L, int i, ElemType *e)   
{
    int j;
    LinkList p, q;
    p = *L;
    j = 1;
    while ((p->next) && j < i)
    {
        p = p->next;
        ++j;
    }
    if (!(p->next) || j > i)
        return ERROR;
    q = p->next;
    p->next = q->next;
    *e = q->data;
    delete(q);  //new��ӦDelete��malloc��Ӧfree
    return OK; 
}
/*�������n��Ԫ�ص�ֵ����������ͷ���ĵ��������Ա�L(ͷ�巨)*/
void CreateListHead(LinkList *L, int n)
{
    // 1.����ָ��p�ͼ�����������
    LinkList p;
    int i = 0; 
    srand(int(time(0)));
    //2.��ʼ������������һ���սڵ㣻
    *L = new Node();
    // 3.��L��ͷ���ָ��ָ��NULL������һ����ͷ���ĵ�����
    (*L)->next = NULL;
    //4.ѭ��������p��㣬�����������p�������򣬽�p����ͷ���֮�С�
    while (i < n)
    {
        ++i;
        p = new Node();
        p->data = rand()%(100)+1;
        p->next = (*L)->next;
        (*L)->next = p;
    }
}
/*�������n��Ԫ�ص�ֵ����������ͷ���ĵ��������Ա�L(β�巨)*/
void CreateListTail(LinkList *L, int n)
{
    // 1.����ָ��p,r�ͼ�����������
    LinkList p,r;
    int i = 0; 
    srand(int(time(0)));
    //2.��ʼ������������һ���սڵ㣻
    *L = new Node();
    // 3.��rָ��β��㡣
    r = *L;
    //4.ѭ��������p��㣬�����������p�������򣬽�p����ͷ���֮�С�
    while (i < n)
    {
        ++i;
        p = new Node();
        p->data = rand()%(100)+1;
        r->next = p;
        r = p;
    }
    // 5.��r��β���ָ��ָ��NULL��
    r->next = NULL;
}
Status ClearList(LinkList *L)
{
    LinkList p,q;
    p = (*L)->next;
    while (!q)
    {
        q = p->next;
        delete(p);
        p = q;
    }
    (*L)->next = NULL;
    return OK;
    
}
//�ϲ�L1��L2ѭ������
void MergeCoverList(LinkList *L1, LinkList *L2)
{
    LinkList p,q;
    //����L1���ͷ���
    p = (*L1)->next;    
    //��ָ��L2��ĵ�һ����㸳��L1.next
    (*L1)->next = (*L2)->next->next;   
    q = (*L2)->next;
    (*L2)->next = p;    //��ԭL1��ͷ��㸳��L2.next
    delete(q);  //�ͷŽ��q
}

int main()
{
    LinkList L;
    ElemType *num;
    int max[5] = {1,2,3,4,5};
    cout << "(*L)->data1" << endl;
    // LinkList (*L) = new LinkList();
    cout << "(*L)->data2" << endl;
    CreateListHead(&L, 5);
    GetElem(L, 3, num);
    
    cout << (*num) << endl;
    ClearList(&L);
    cout << "(*L)->data3" << endl;
    for(int i = 0; L->next!=nullptr;++i)
    {
        cout << L->data << " ";
        L= L->next;
        cout << "Clear!";
    }
    
}
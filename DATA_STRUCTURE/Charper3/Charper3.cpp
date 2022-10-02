//头文件
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
/* 顺序存储结构 */
struct sqList
{
    ElemType data[ MAXSIZE ] ;    //数组存储数据元素
    int length;     //线性表当前长度
};
/* 单链表结构 */
struct Node
{
    ElemType data;
    struct Node *next;
};
typedef struct Node *LinkList; //定义LinkList

// Status GetElem(sqList L, int i, ElemType *e)
// {
//     if (L.length == 0 || i < 1 || i > L.length)
//     {
//         return ERROR;
//     }
//     *e = L.data[i-1];
//     return OK;
    
// }

Status ListInsert(sqList *L, int i, ElemType e) //插入新元素 
{
    if ( L->length == MAXSIZE)
        return ERROR;
    if (i < 1 || i > L->length + 1)
    {
        return ERROR;
    }
    if ( i <= L->length ) //数据不在队尾
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

Status ListDelect(sqList *L, int i, ElemType *e) //删除第i个元素,并用e返回
{
    if ( L->length == MAXSIZE)
        return ERROR;
    if (i < 1 || i > L->length + 1)
    {
        return ERROR;
    }
    if ( i <= L->length ) //数据不在队尾
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
//获得列表的第i个元素
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
//在第i个位置插入结点，结点数据为e
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
    LinkList s = new Node();;   //创建一个新结点
    s->data = e;
    s->next = p->next;
    p->next = s;
    return OK; 
}
//删除第i个结点，并返回e的值
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
    delete(q);  //new对应Delete，malloc对应free
    return OK; 
}
/*随机产生n个元素的值，建立带表头结点的单链表线性表L(头插法)*/
void CreateListHead(LinkList *L, int n)
{
    // 1.声明指针p和计数器变量；
    LinkList p;
    int i = 0; 
    srand(int(time(0)));
    //2.初始化空链表，即建一个空节点；
    *L = new Node();
    // 3.让L的头结点指针指向NULL，建立一个带头结点的单链表。
    (*L)->next = NULL;
    //4.循环：生成p结点，将随机数赋给p的数据域，将p插入头结点之中。
    while (i < n)
    {
        ++i;
        p = new Node();
        p->data = rand()%(100)+1;
        p->next = (*L)->next;
        (*L)->next = p;
    }
}
/*随机产生n个元素的值，建立带表头结点的单链表线性表L(尾插法)*/
void CreateListTail(LinkList *L, int n)
{
    // 1.声明指针p,r和计数器变量；
    LinkList p,r;
    int i = 0; 
    srand(int(time(0)));
    //2.初始化空链表，即建一个空节点；
    *L = new Node();
    // 3.让r指向尾结点。
    r = *L;
    //4.循环：生成p结点，将随机数赋给p的数据域，将p插入头结点之中。
    while (i < n)
    {
        ++i;
        p = new Node();
        p->data = rand()%(100)+1;
        r->next = p;
        r = p;
    }
    // 5.将r的尾结点指针指向NULL。
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
//合并L1、L2循环链表
void MergeCoverList(LinkList *L1, LinkList *L2)
{
    LinkList p,q;
    //保存L1表的头结点
    p = (*L1)->next;    
    //将指向L2表的第一个结点赋给L1.next
    (*L1)->next = (*L2)->next->next;   
    q = (*L2)->next;
    (*L2)->next = p;    //将原L1的头结点赋给L2.next
    delete(q);  //释放结点q
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
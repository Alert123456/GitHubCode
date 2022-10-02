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
/* 线性表的双向链表存储结构 */
struct DulNode
{
    ElemType data;
    struct DulNode *prior;  /* 直接前驱指针 */
    struct DulNode *next;  /* 直接后驱指针 */   
};
typedef DulNode *DuLinkList;

//在第i个位置插入结点，结点数据为e
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
    DuLinkList s = new Node();   //创建一个新结点
    s->data = e;
    s->prior = p;   /*p赋值给s的前驱*/
    s->next = p->next;/*p->next赋值给s的后驱*/
    p->next->prior = s;/*s赋值给p->next的前驱*/
    p->next = s;/*s赋值给p的后驱*/
    return OK; 
}
//删除第i个结点，并返回e的值
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
    p->prior->next = p->next;/*p->next赋值给p->prior的后驱*/
    p->next->prior = p->prior;/*p->prior赋值给p->next的前驱*/

    delete(p);  //new对应Delete，malloc对应free
    return OK; 
}
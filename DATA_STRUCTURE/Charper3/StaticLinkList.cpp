#include <iostream>
#include "StaticLinkList.h"
using namespace std;

int main()
{

}

Status InitList(StaticLinkList space)
{
    int i;
    for (size_t i = 0; i < MAXSIZE-1; ++i)
    {
        space[i].cur = i + 1;
    }
    space[MAXSIZE-1].cur = 0;
    return OK;
}
int Malloc_SLL (StaticLinkList space)
{
    int i = space[0].cur;//当前数组第一个元素的cur存的值
    if (space[0].cur)
        space[0].cur = space[i].cur;
    return i;
}
int ListInsert (StaticLinkList L, int i, ElemType e)
{
    int j,k,l;  
    k = MAXSIZE - 1;
    if(i < 1 || i > MAXSIZE + 1)
        return ERROR;
    j = Malloc_SLL(L);  //待插入元素位置
    if(j)
    {
        L[j].data = e;
        for(l = 1; l<= i - 1; l++)
            k = L[k].cur;
        L[j].cur = L[k].cur;
        L[k].cur = j;  //下一元素需要指引的位置
    }
}
/*数组的删除状态*/
int Free_SSL (StaticLinkList space, int k)
{
    space[k].cur = space[0].cur;
    space[0].cur = k;
}
/*数组的删除第i个元素*/
int ListDelete (StaticLinkList L, int i)
{
    int j,k;
    k = MAXSIZE - 1;
    if(i < 1 || i > MAXSIZE + 1)
        return ERROR;
    for(l = 1; l<= i - 1; l++)
        k = L[k].cur;
    j = L[k].cur;
    L[k].cur = L[j].cur;
    Free_SSL(L,j);
    return OK;
}
int ListLength (StaticLinkList L)
{
    int j = 0;
    int i = L[MAXSIZE-1].cur;
    while (i)
    {
        i = L[i].cur;
        j++;
    }
    return j;
    
}
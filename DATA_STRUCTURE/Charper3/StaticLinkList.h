//头文件
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

/* 静态链表结构 */
struct Component
{
    ElemType data;
    int cur;
};

typedef struct Component StaticLinkList[MAXSIZE];
/*初始化数组状态*/
Status InitList(StaticLinkList space);
/*数组的插入状态*/
int Malloc_SLL (StaticLinkList space);
/*数组的中间插入状态*/
int ListInsert (StaticLinkList L, int i, ElemType e);
/*数组的删除状态*/
int Free_SSL (StaticLinkList space, int k);
/*数组的中间删除状态*/
int ListDelete (StaticLinkList L, int i);
/*求数组的长度*/
int ListLength (StaticLinkList L);
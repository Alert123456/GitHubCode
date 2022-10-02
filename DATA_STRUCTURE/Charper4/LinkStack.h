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
/* 插入元素e为新的栈顶元素 */
SElemType Push (LinkStack *S, SElemType e); 
/* 删除S的栈顶元素，用e返回值 */
SElemType Pop (LinkStack *S, SElemType *e); 
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
/*栈的抽象数据类型*/
// InitStack (*S);     //初始化操作，建立一个空栈S
// DestroyStack (*S);  //若栈存在，则销毁它
// ClearStack (*S);    //将栈清空
// StackEmpty (S);     //若栈为空，返回true，否则返回false
// GetTop (S, *e);     //若栈存在且非空，用e返回S的栈顶元素
// Push (SqStack *S, SElemType e);       //若栈S存在,插入新元素e到栈S中并成为栈顶元素
// Pop (*S, *e);       //删除栈S中栈顶元素，并用e返回其值
// StackLength (S);    //返回栈S的元素个数
typedef int SElemType;
struct SqStack
{
    SElemType data[MAXSIZE];
    int top;    //用于栈顶指针
};
/* 若栈S存在,插入新元素e到栈S中并成为栈顶元素 */
Push (SqStack *S, SElemType e);       
/* 若栈不空，则删除栈顶元素，用e返回其值，并返回OK，否则error */
Pop (SqStack *S, SElemType *e);

/* 两栈共享空间结构 */
struct sqDoubleStack
{
    SElemType data[MAXSIZE];
    int top1;   /* 栈1栈顶指针 */
    int top2;   /* 栈2栈顶指针 */
};
/* 若栈S存在,插入新元素e到栈S中并成为栈顶元素 */
Push (sqDoubleStack *S, SElemType e, int stackNumber);
/* 若栈不空，则删除栈顶元素，用e返回其值，并返回OK，否则error */
Pop (sqDoubleStack *S, SElemType *e, int stackNumber);
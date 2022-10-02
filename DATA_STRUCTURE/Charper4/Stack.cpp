#include "Stack.h"

using namespace std;

int main()
{
    return 0;
}
/* 若栈S存在,插入新元素e到栈S中并成为栈顶元素 */
Push (SqStack *S, SElemType e)
{
    if (S->top == MAXSIZE - 1) /* 栈满 */
    {
        return ERROR;
    }
    S->top++;   //栈顶指针加一
    S->data[S->top] = e;    //将新插入的元素赋给栈顶指针
    return OK;
}
/* 若栈不空，则删除栈顶元素，用e返回其值，并返回OK，否则error */
Pop (SqStack *S, SElemType *e)
{
    if (S->top == -1)
    {
        return ERROR;
    }
    *e = S->data[S->top];   //将要删除的栈顶元素赋给e
    S->top--;   //栈顶指针减一
    return OK;
}
/* 插入新元素e到栈S中并成为栈顶元素 */
Push (sqDoubleStack *S, SElemType e, int stackNumber)
{
    if ( S->top1 + 1 == S->top2 )   //栈满了
    {
        return ERROR;
    }
    if ( stackNumber == 1 ) //栈1有元素入栈
    {
        S->data[++S->top1] = e; //S->top1加1后给数组元素赋值
    }
    else
    {
        S->data[--S->top2] = e; //S->top2减1后给数组元素赋值
    }
    return OK;
}
/* 删除栈顶元素，用e返回其值 */
Pop (sqDoubleStack *S, SElemType *e, int stackNumber)
{
    if ( stackNumber == 1 ) //栈1有元素出栈
    {
        if (S->top1 == -1)
            return ERROR;
        *e = S->data[S->top1--]; //栈1的栈顶元素出栈后，栈顶指针减1
    }
    else
    {
        if (S->top2 == MAXSIZE)
            return ERROR;
        *e = S->data[S->top1++]; //栈2的栈顶元素出栈后，栈顶指针加1
    }
    return OK;
}
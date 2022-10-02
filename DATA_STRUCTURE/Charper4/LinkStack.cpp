#include "LinkStack.h"

int main()
{
    return OK;
}
/* 插入元素e为新的栈顶元素 */
SElemType Push (LinkStack *S, SElemType e)
{
    LinkStackPtr s = new LinkStackPtr();
    s->data = e;
    s->Next = S->top;
    S->top = s;
    S->count++;
    return OK;
}
/* 删除S的栈顶元素，用e返回值 */
SElemType Pop (LinkStack *S, SElemType *e)
{
    LinkStackPtr p;
    
    *e = S->top->data;
    p = S->top; //栈顶结点赋给p
    S->top = S->top->Next;  //栈顶结点下移一位
    delete(p);//释放栈顶结点
    S->count--;
    return OK;
}

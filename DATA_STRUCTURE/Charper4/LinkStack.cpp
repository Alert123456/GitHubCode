#include "LinkStack.h"

int main()
{
    return OK;
}
/* ����Ԫ��eΪ�µ�ջ��Ԫ�� */
SElemType Push (LinkStack *S, SElemType e)
{
    LinkStackPtr s = new LinkStackPtr();
    s->data = e;
    s->Next = S->top;
    S->top = s;
    S->count++;
    return OK;
}
/* ɾ��S��ջ��Ԫ�أ���e����ֵ */
SElemType Pop (LinkStack *S, SElemType *e)
{
    LinkStackPtr p;
    
    *e = S->top->data;
    p = S->top; //ջ����㸳��p
    S->top = S->top->Next;  //ջ���������һλ
    delete(p);//�ͷ�ջ�����
    S->count--;
    return OK;
}

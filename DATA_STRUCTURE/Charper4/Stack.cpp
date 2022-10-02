#include "Stack.h"

using namespace std;

int main()
{
    return 0;
}
/* ��ջS����,������Ԫ��e��ջS�в���Ϊջ��Ԫ�� */
Push (SqStack *S, SElemType e)
{
    if (S->top == MAXSIZE - 1) /* ջ�� */
    {
        return ERROR;
    }
    S->top++;   //ջ��ָ���һ
    S->data[S->top] = e;    //���²����Ԫ�ظ���ջ��ָ��
    return OK;
}
/* ��ջ���գ���ɾ��ջ��Ԫ�أ���e������ֵ��������OK������error */
Pop (SqStack *S, SElemType *e)
{
    if (S->top == -1)
    {
        return ERROR;
    }
    *e = S->data[S->top];   //��Ҫɾ����ջ��Ԫ�ظ���e
    S->top--;   //ջ��ָ���һ
    return OK;
}
/* ������Ԫ��e��ջS�в���Ϊջ��Ԫ�� */
Push (sqDoubleStack *S, SElemType e, int stackNumber)
{
    if ( S->top1 + 1 == S->top2 )   //ջ����
    {
        return ERROR;
    }
    if ( stackNumber == 1 ) //ջ1��Ԫ����ջ
    {
        S->data[++S->top1] = e; //S->top1��1�������Ԫ�ظ�ֵ
    }
    else
    {
        S->data[--S->top2] = e; //S->top2��1�������Ԫ�ظ�ֵ
    }
    return OK;
}
/* ɾ��ջ��Ԫ�أ���e������ֵ */
Pop (sqDoubleStack *S, SElemType *e, int stackNumber)
{
    if ( stackNumber == 1 ) //ջ1��Ԫ�س�ջ
    {
        if (S->top1 == -1)
            return ERROR;
        *e = S->data[S->top1--]; //ջ1��ջ��Ԫ�س�ջ��ջ��ָ���1
    }
    else
    {
        if (S->top2 == MAXSIZE)
            return ERROR;
        *e = S->data[S->top1++]; //ջ2��ջ��Ԫ�س�ջ��ջ��ָ���1
    }
    return OK;
}
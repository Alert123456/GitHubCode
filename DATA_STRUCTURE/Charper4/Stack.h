//ͷ�ļ�
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
/*ջ�ĳ�����������*/
// InitStack (*S);     //��ʼ������������һ����ջS
// DestroyStack (*S);  //��ջ���ڣ���������
// ClearStack (*S);    //��ջ���
// StackEmpty (S);     //��ջΪ�գ�����true�����򷵻�false
// GetTop (S, *e);     //��ջ�����ҷǿգ���e����S��ջ��Ԫ��
// Push (SqStack *S, SElemType e);       //��ջS����,������Ԫ��e��ջS�в���Ϊջ��Ԫ��
// Pop (*S, *e);       //ɾ��ջS��ջ��Ԫ�أ�����e������ֵ
// StackLength (S);    //����ջS��Ԫ�ظ���
typedef int SElemType;
struct SqStack
{
    SElemType data[MAXSIZE];
    int top;    //����ջ��ָ��
};
/* ��ջS����,������Ԫ��e��ջS�в���Ϊջ��Ԫ�� */
Push (SqStack *S, SElemType e);       
/* ��ջ���գ���ɾ��ջ��Ԫ�أ���e������ֵ��������OK������error */
Pop (SqStack *S, SElemType *e);

/* ��ջ����ռ�ṹ */
struct sqDoubleStack
{
    SElemType data[MAXSIZE];
    int top1;   /* ջ1ջ��ָ�� */
    int top2;   /* ջ2ջ��ָ�� */
};
/* ��ջS����,������Ԫ��e��ջS�в���Ϊջ��Ԫ�� */
Push (sqDoubleStack *S, SElemType e, int stackNumber);
/* ��ջ���գ���ɾ��ջ��Ԫ�أ���e������ֵ��������OK������error */
Pop (sqDoubleStack *S, SElemType *e, int stackNumber);
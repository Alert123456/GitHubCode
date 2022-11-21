//ͷ�ļ�
#include <iostream>
#include <vector>
#include <string>
#include <list>
#include <ctime>
#include "Tree.h"
using namespace std;

typedef char VertexType;  /* ��������Ӧ���û����� */
typedef int EdgeType;  /* ���ϵ�Ȩֵ����Ӧ���û����� */
#define MAXVEX 100  /* ��󶥵���Ӧ���û����� */
#define INFINITY 65535 /* ��65535������� */

#define ERROR 0
#define OK 1
#define FALSE 0
#define LH 1 /* ��� */
#define EH 0 /* �ȸ� */
#define RH -1 /* �Ҹ� */

struct BiTNode  /* ���ṹ */
{
    int data;   /* ������� */
    int bf; /* ����ƽ������ */
    struct BiTNode *lchild, *rchild;    /* ���Һ���ָ�� */
};
typedef BiTNode *BiTree; 
/* ����pΪ���Ķ������������������� */
/* ����֮��pָ���µ�������㣬����ת����֮ǰ���������ĸ���� */
void R_Rotate(BiTree *p);
/* ����pΪ���Ķ������������������� */
/* ����֮��pָ���µ�������㣬����ת����֮ǰ���������ĸ���� */
void L_Rotate(BiTree *p);
/* ����ָ��T��ָ���Ϊ���Ķ���������ƽ����ת���� */
/* ���㷨����ʱ��ָ��Tָ���µĸ���� */
void LeftBalance (BiTree *T);
/* ����ָ��T��ָ���Ϊ���Ķ���������ƽ����ת���� */
/* ���㷨����ʱ��ָ��Tָ���µĸ���� */
void RightBalance (BiTree *T);
/* ����ƽ��Ķ���������T�в����ں�e����ͬ�ؼ��ֵĽ�㣬�����һ�� */
/* ����Ԫ��Ϊe���½�㲢����1�����򷵻�0.��������ʹ���������� */
/* ʧȥƽ�⣬����ƽ����ת������������taller��ӳT������� */
int InsertAVL(BiTree *T, int e, int *taller);
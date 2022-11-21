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

/* ˳����ң�aΪ���飬nΪҪ���ҵ����鳤�ȣ�keyΪҪ���ҵĹؼ��� */
int Sequential_Search(int *a, int n, int key);
/* ���ڱ�˳����� */
int Sequential_Search2(int *a, int n, int key);
/* ���ֲ��� */
int Binary_Search(int *a, int n, int key);
/* ���ֲ��� */
int Binary_Search(int *a, int n, int key);
/* 쳲��������� */
int Fibonacci_Search(int *a, int n, int key);

/* ���������� */
/* �ݹ���Ҷ���������T���Ƿ����key
ָ��fָ��T��˫��,���ʼ����ֵΪNULL
�����ҳɹ�,��ָ��pָ�������Ԫ�ؽ��,������TRUE
����ָ��pָ�����·���Ϸ��ʵ����һ����㲢����FALSE*/
int SearchBST(BiTTree T, int key, BiTTree f, BiTTree *p);
/* ������������T�в����ڹؼ��ֵ���key������Ԫ��ʱ��
����key������TRUE,���򷵻�FALSE */
int InsertBST(BiTTree *T, int key);
/* �����������Ĺ��� */
void CreatBST();
/* ������������T�д��ڹؼ��ֵ���key������Ԫ��ʱ����ɾ����Ԫ�ؽ�㣬
������TRUE;���򷵻�FALSE*/
int DeleteBST(BiTTree *T, int key);
/* �Ӷ�����������ɾ�����p, ���ؽ��������������*/
int Delete(BiTTree *p);


//ͷ�ļ�
#include <iostream>
#include <vector>
#include <string>
#include <list>
#include <ctime>
#include "Graph.h"
#include <queue>
#include <stdlib.h>
using namespace std;

#define MAXEDGE 50  /* �������ļ���ֵ */
#define MAXVEX 100  /* ��󶥵���Ӧ���û����� */
#define INFINITY 65535 /* ��65535������� */
#define ERROR 0
#define OK 1
#define FALSE 0

/* Prim �㷨������С������ */
void MiniSpanTree_Prim(MGraph G);


/* �Ա߼�����Edge�ṹ�Ķ��� */
struct Edge
{
    int begin;
    int end;
    int weight;
};
typedef Edge EdgeArray[MAXEDGE]
/* kruskal�㷨������С������ */
void MiniSpanTree_Kruskal(MGraph G); 
/*�ڽӾ���Gת��Ϊ�߼�����edges����Ȩ��С�������еĴ���*/
void Edges_WeightTraversal(MGraph G, EdgeArray *E)
/*�������߶����β���±�*/
int find (int *parent, int f);   

//�����㷨��δѧ��
sort(MGraph G, EdgeArray &E);
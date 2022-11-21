//ͷ�ļ�
#include <iostream>
#include <vector>
#include <string>
#include <list>
#include <ctime>
#include "Graph.h"

using namespace std;

#define MAXVEX 9  /* ��󶥵���Ӧ���û����� */
#define INFINITY 65535 /* ��65535������� */
typedef int Patharc[MAXVEX];    /*���ڴ洢���·���±������*/
typedef int ShortOathTable[MAXVEX]; /*���ڴ洢���������·����Ȩֵ��*/

#define ERROR 0
#define OK 1
#define FALSE 0

/*Dijkstra�㷨��������ͼG��V0���㵽���ඥ��v���·��P[v]����Ȩ����D[v]
P[v]��ֵΪǰ�������±�,D[v]��ʾv0��v�����·�����Ⱥ�*/
void ShortestPath_Dijkstra(MGraph G, int v0, Patharc *P, ShortOathTable *D);

typedef int Pathmatirx[MAXVEX] [MAXVEX]
typedef int ShortPathTable[MAXVEX] [MAXVEX]
/*Floyd�㷨������ͼG�и�����v����������w���·��P[v][w]����Ȩ����D[v][w]*/
void ShortestPath_Floyd(MGraph G, Pathmatirx *P, ShortPathTable *D);
/*Floyd�㷨,���·����ʾ*/
void ShortestPath_Floyd_Show(MGraph G);
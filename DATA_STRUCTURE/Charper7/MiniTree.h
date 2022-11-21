//头文件
#include <iostream>
#include <vector>
#include <string>
#include <list>
#include <ctime>
#include "Graph.h"
#include <queue>
#include <stdlib.h>
using namespace std;

#define MAXEDGE 50  /* 边数量的极大值 */
#define MAXVEX 100  /* 最大顶点数应由用户定义 */
#define INFINITY 65535 /* 用65535来代表∞ */
#define ERROR 0
#define OK 1
#define FALSE 0

/* Prim 算法生成最小生成树 */
void MiniSpanTree_Prim(MGraph G);


/* 对边集数组Edge结构的定义 */
struct Edge
{
    int begin;
    int end;
    int weight;
};
typedef Edge EdgeArray[MAXEDGE]
/* kruskal算法生成最小生成树 */
void MiniSpanTree_Kruskal(MGraph G); 
/*邻接矩阵G转换为边集数组edges并按权由小到大排列的代码*/
void Edges_WeightTraversal(MGraph G, EdgeArray *E)
/*查找连线顶点的尾部下标*/
int find (int *parent, int f);   

//排序算法，未学到
sort(MGraph G, EdgeArray &E);
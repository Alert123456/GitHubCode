//头文件
#include <iostream>
#include <vector>
#include <string>
#include <list>
#include <ctime>
#include "Graph.h"

using namespace std;

#define MAXVEX 9  /* 最大顶点数应由用户定义 */
#define INFINITY 65535 /* 用65535来代表∞ */
typedef int Patharc[MAXVEX];    /*用于存储最短路径下标的数组*/
typedef int ShortOathTable[MAXVEX]; /*用于存储到各点最短路径的权值和*/

#define ERROR 0
#define OK 1
#define FALSE 0

/*Dijkstra算法，求有向图G的V0顶点到其余顶点v最短路径P[v]及带权长度D[v]
P[v]的值为前驱顶点下标,D[v]表示v0到v的最短路径长度和*/
void ShortestPath_Dijkstra(MGraph G, int v0, Patharc *P, ShortOathTable *D);

typedef int Pathmatirx[MAXVEX] [MAXVEX]
typedef int ShortPathTable[MAXVEX] [MAXVEX]
/*Floyd算法，求网图G中各顶点v到其他顶点w最短路径P[v][w]及带权长度D[v][w]*/
void ShortestPath_Floyd(MGraph G, Pathmatirx *P, ShortPathTable *D);
/*Floyd算法,最短路径显示*/
void ShortestPath_Floyd_Show(MGraph G);
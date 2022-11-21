//头文件
#include <iostream>
#include <vector>
#include <string>
#include <list>
#include <ctime>
#include "Graph.h"
#include <queue>
using namespace std;

#define MAX 100  /* 最大顶点数应由用户定义 */
#define INFINITY 65535 /* 用65535来代表∞ */
#define ERROR 0
#define OK 1
#define FALSE 0

typedef bool Boolean;  /* Boolean是布尔类型，其值是TRUE或FALSE */
Boolean visited[MAX];   /*访问标志的数组 */

/* 邻接矩阵的深度优先递归算法 */
void DFS(MGraph G, int i);
/* 邻接矩阵的深度遍历操作 */
void DFSTraverse(MGraph G);
/* 邻接表的深度优先递归算法 */
void DFS(GraphAdjList GL, int i);
/* 邻接表的深度遍历操作 */
void DFSTraverse(GraphAdjList GL);
/* 邻接矩阵的广度优先递归算法 */
void BFSTraverse(MGraph G);
/* 邻接表的广度优先递归算法 */
void BFSTraverse(GraphAdjList GL);
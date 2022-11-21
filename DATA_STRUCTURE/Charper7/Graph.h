//头文件
#include <iostream>
#include <vector>
#include <string>
#include <list>
#include <ctime>

using namespace std;

typedef char VertexType;  /* 顶点类型应由用户定义 */
typedef int EdgeType;  /* 边上的权值类型应由用户定义 */
#define MAXVEX 100  /* 最大顶点数应由用户定义 */
#define INFINITY 65535 /* 用65535来代表∞ */

#define ERROR 0
#define OK 1
#define FALSE 0

struct MGraph
{
    VertexType vexs[MAXVEX];    //顶点表
    EdgeType arc[MAXVEX][MAXVEX]; /* 邻接矩阵，可看做表 */
    int numVertexes, numEdges;  //图中当前的顶点数和边数
};
/* 建立无向网图的邻接矩阵表示 */
void CreatMGraph (MGraph *G);


/* 边表结点 */
struct EdgeNode
{
    int adjvex; //邻接点域，存储该顶点对应的下标
    EdgeType weight;    //用于存储权值，对于非网图可以不需要
    struct EdgeNode *next;  //链域，指向下一个邻接点
};
/* 顶点表结点 */
struct VertexNode
{
    VertexType data;    //顶点域，存储顶点信息
    EdgeNode *firstedge;    //边表头指针
};
typedef VertexNode AdjList[MAXVEX];
struct GraphAdjList
{
    AdjList adjList;
    int numVertexes, numEdges;  //图中当前顶点数和边数
};

/* 建立图的邻接表结构 */
void CreatALGraph ( GraphAdjList *G );

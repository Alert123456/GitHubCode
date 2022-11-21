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

/*关键路径相关变量*/
int *etv ,*ltv; /* 时间最早发生时间和最迟发生时间数组 */
int *stack2;    /* 用于存储拓扑序列的栈 */
int top2;   /* 用于stack2的指针 */

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
    int in;     //顶点入度
    VertexType data;    //顶点域，存储顶点信息
    EdgeNode *firstedge;    //边表头指针
};
typedef VertexNode AdjList[MAXVEX];
struct graphAdjList
{
    AdjList adjList;
    int numVertexes, numEdges;  //图中当前顶点数和边数
};
typedef graphAdjList *GraphAdjList;
/*拓扑排序，若GL无回路，则输出拓扑排序序列并返回OK，若有回路返回ERROR*/
int TopologicalSort(GraphAdjList GL);

/* 求关键路径，GL为有向图，输出GL的各项关键活动 */
void CriticalPath(GraphAdjList GL);
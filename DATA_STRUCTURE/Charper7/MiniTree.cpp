#include "MiniTree.h"

/* Prim 算法生成最小生成树 */
void MiniSpanTree_Prim(MGraph G)
{
    int j,k;
    int adjvex[MAXVEX]; // 保存相关顶点下标
    int lowcost[MAXVEX];    //保存相关顶点间边的权值
    lowcost[0] = 0; //初始化第一个权值，V0生成树，
    //lowcost的值是0，在这里就是此下标的顶点已经加入生成树
    adjex[0] = 0;   //初始化第一个顶点下标0
    for (size_t i = 0; i < G.numVertexes; i++)
    {
        lowcost[i] = G.arc[0][i];   //将V0顶点与之有边的权值存入数组
        adjvex[i] = 0;
    }
    for (size_t i = 0; i < G.numVertexes; i++)
    {
        min = INFINITY; //初始化最小权值为∞
        //通常设置为不可能大的数字如32767、65535等
        j = 1;
        k = 0;
        while (j < G.numVertexes)
        {
            if(lowcost[j] != 0 && lowcost[j] < min)
            {
                min = lowcost[j];   //则让当前权值成为最小值
                k = j;              //将当前最小值的下标存入k
            }
            j++;
        }
        cout << adjvex[k] << k;     //打印当前顶点边中权值最小边
        lowcost[k] = 0; //将当前顶点的权值设置为0，表示此顶点已经完成任务
        for (size_t j = 0; j < G.numVertexes; j++)
        {
            if ( lowcost[j] != 0 && G.arc[k][j] < lowcost[j] )
            {//下标为k的顶点各边权值小于此前这些顶点未被加入生成树权值
                lowcost[j] = G.arc[k][j];   //将较小权值存入lowcost
                adjvex[j] = k;  //下标k存入adjvex
            }
        }    
    }   
}

/*邻接矩阵G转换为边集数组edges并按权由小到大排列的代码*/
void Edges_WeightTraversal(MGraph G, EdgeArray *E)
{
    int k = 0;
    for (size_t i = 0; i < G.numVertexes - 1; i++)
    {
        for (size_t j = i + 1; j < G.numVertexes; j++)
        {
            if ( G.arc[i][j] < INFINITY ) 
            {
                E[k]->begin = i;
                E[k]->end = j;
                E[k]->weight = G.arc[i][j];
                k++;
            }
        }   
    }
    sort(G, &E);
}

/* kruskal算法生成最小生成树 */
void MiniSpanTree_Kruskal(MGraph G)
{
    int n,m;    /*存放尾部下标*/
    Edge edges[MAXEDGE];    /* 定义边集数组 */
    int parent[MAXVEX];     /*定义一数组用来判断边与边是否形成环路*/
    /*省略邻接矩阵G转换为边集数组edges并按权由小到大排列的代码*/
    //自行实现
    Edges_WeightTraversal(G, &edges);

    for (size_t i = 0; i < G.numVertexes; i++)
    {
        parent[i] = 0;  /*初始化数组值0*/
    }
    for (size_t i = 0; i < G.numEdges; i++) /*循环每一条边*/
    {
        n = find(parent, edges[i].begin);
        m = find(parent, edges[i].end);
        if (n != m) /*假如n与m不等，说明此边没有与现有生成树形成环路*/
        {
            parent[n] = m;  /*将此边的结尾顶点放入下标为起点的parent中
                            表示此顶点已经在生成树集合中*/
            cout << edges[i].begin << edges[i].end << edges[i].weight;
        }
    } 
}

/*查找连线顶点的尾部下标*/
int find (int *parent, int f)
{
    while (parent[f] > 0)
    {
        f = parent[f];
    }
    return f;
}
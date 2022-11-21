#include "Graph.h"

int main()
{
    return 0;
}

/* 建立无向网图的邻接矩阵表示 */
void CreatMGraph (MGraph *G)
{
    cout << "输入顶点数和边数:\n";
    cin >> G->numVertexes >> G->numEdges;
    for (int i = 0; i < G->numVertexes; i++)    //读入顶点信息，建立顶点表
    {
        cin >> G->vexs[i];
    }
    for (int i = 0; i < G->numVertexes; i++)    
    {
        for (int j = 0; i < G->numVertexes; i++)
        {
            G->arc[i][j] = INFINITY;    //邻接矩阵初始化
        }
    }
    for (int k = 0; k < G->numEdges; k++)
    {
        int vi, vj, vw;
        cout << "输入边(vi,vj)上的下标i,下标j和权w:\n";
        cin >> vi >> vj >> vw;//输入边(vi,vj)的权w
        G->arc[vi][vj] = vw;
        G->arc[vj][vi] = G->arc[vi][vj];    //无向图，矩阵对称
    }
}

/* 建立图的邻接表结构 */
void CreatALGraph ( GraphAdjList *G )
{
    EdgeNode *e;
    EdgeType m,n;
    cout << "输入顶点数和边数\n";
    cin >> G->numVertexes >> G->numEdges;
    for ( int i = 0; i < G->numVertexes; i++ )
    {
        cout << "依次输入顶点:";
        cin >> G->adjList[i].data;  //输入顶点信息
        G->adjList[i].firstedge = NULL; //边表置为空
    }
    for (int j = 0; j < G->numEdges; j++ )
    {
        cout << "输入每条边的两个顶点序号";
        cin >> m >> n;
        //结点的头插法
        e = new EdgeNode();
        e->adjvex = n;
        e->next = G->adjList[m].firstedge;
        G->adjList[m].firstedge = e;

        e = new EdgeNode();
        e->adjvex = m;
        e->next = G->adjList[n].firstedge;
        G->adjList[n].firstedge = e;
    }
}
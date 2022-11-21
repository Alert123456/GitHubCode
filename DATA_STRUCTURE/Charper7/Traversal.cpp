#include "Traversal.h"

/* 邻接矩阵的深度优先递归算法 */
void DFS(MGraph G, int i)
{
    int j;
    visited[i] = true;
    cout << G.vexs[i];  /* 打印出顶点 */
    for ( j = 0; j < G.numVertexes; j++ )
    {
        if (visited[j] == 0 && G.arc[i][j] == 1)
        {
            DFS(G, j);  /* 对为访问的邻接顶点递归调用 */
        } 
    }
}
/* 邻接矩阵的深度遍历操作 */
void DFSTraverse(MGraph G)
{
    for (int i = 0; i < G.numVertexes; i++)
    {
        visited[i] = false; //初始化所有顶点的状态都是未访问状态
    }
    for (int j = 0; j < G.numVertexes; j++)
    {
        if (!visited[j])    //对未访问的顶点调用DFS
        {
            DFS(G,j);
        }
    }
}

/* 邻接表的深度优先递归算法 */
void DFS(GraphAdjList GL, int i)
{
    EdgeNode *p;
    visitedList[i] = true;
    cout << GL.adjList[i];  /* 打印出顶点 */
    p = GL.adjList[i].firstedge;
    while (p)
    {
        if(!visitedList[p->adjvex])
        {
            DFS(GL, p->adjvex);
        }
        p = p->next;
    }
    
}
/* 邻接表的深度遍历操作 */
void DFSTraverse(GraphAdjList GL)
{
    for (int i = 0; i < G.numVertexes; i++)
    {
        visited[i] = false; //初始化所有顶点的状态都是未访问状态
    }
    for (int j = 0; j < GL.numVertexes; j++)
    {
        if (!visited[j])    //对未访问的顶点调用DFS
        {
            DFS(GL,j);
        }
    }
}
/* 邻接矩阵的广度优先递归算法 */
void BFSTraverse(MGraph G)
{
    int tmp;
    queue<int> Q;
    for (int m = 0; m < G.numVertexes; m++)
    {
        visited[m] = false;
    }
    for (int i = 0; i < G.numVertexes; i++) //对每个顶点做循环
    {
        visited[i] = true;  //当前结点访问过
        cout << G.vexs[i];
        Q.push(i);  //入队列
        while (!Q.empty) //队列不为空
        {
            tmp = Q.pop; //队列值取出
            for (int j = 0; j < G.numVertexes; j++)
            {
                if (G.arc[tmp][j] == 1 && !visited[j])
                {
                    visited[j] = true;
                    cout << G.vexs[j];
                    Q.push(j);
                }
            }  
        }
    } 
}

/* 邻接表的广度优先递归算法 */
void BFSTraverse(GraphAdjList GL)
{
    int tmp;
    EdgeNode *p;
    queue<int>  Q;
    for (size_t i = 0; i < GL.numVertexes; i++)
    {
        visited[i] = false;
    }
    for (size_t i = 0; i < GL.numVertexes; i++)
    {
        if (!visited[i])
        {
            visited[i] = true;
            cout << GL.adjList[i].data;
            Q.push(i);
            while (!Q.empty)
            {
                tmp = Q.pop();
                p = GL.adjList[tmp].firstedge;  //找到当前顶点边表的头指针
                while (p)
                {
                    if (!visited[p->adjvex]) //顶点未访问
                    {
                        visited[p->adjvex] = true;
                        cout << GL.adjList[p->adjvex].data;
                        Q.push(p->adjvex);
                    }
                    p = p->next;    //指针指向下一邻接点
                }
            }    
        }  
    }  
}
#include "Traversal.h"

/* �ڽӾ����������ȵݹ��㷨 */
void DFS(MGraph G, int i)
{
    int j;
    visited[i] = true;
    cout << G.vexs[i];  /* ��ӡ������ */
    for ( j = 0; j < G.numVertexes; j++ )
    {
        if (visited[j] == 0 && G.arc[i][j] == 1)
        {
            DFS(G, j);  /* ��Ϊ���ʵ��ڽӶ���ݹ���� */
        } 
    }
}
/* �ڽӾ������ȱ������� */
void DFSTraverse(MGraph G)
{
    for (int i = 0; i < G.numVertexes; i++)
    {
        visited[i] = false; //��ʼ�����ж����״̬����δ����״̬
    }
    for (int j = 0; j < G.numVertexes; j++)
    {
        if (!visited[j])    //��δ���ʵĶ������DFS
        {
            DFS(G,j);
        }
    }
}

/* �ڽӱ��������ȵݹ��㷨 */
void DFS(GraphAdjList GL, int i)
{
    EdgeNode *p;
    visitedList[i] = true;
    cout << GL.adjList[i];  /* ��ӡ������ */
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
/* �ڽӱ����ȱ������� */
void DFSTraverse(GraphAdjList GL)
{
    for (int i = 0; i < G.numVertexes; i++)
    {
        visited[i] = false; //��ʼ�����ж����״̬����δ����״̬
    }
    for (int j = 0; j < GL.numVertexes; j++)
    {
        if (!visited[j])    //��δ���ʵĶ������DFS
        {
            DFS(GL,j);
        }
    }
}
/* �ڽӾ���Ĺ�����ȵݹ��㷨 */
void BFSTraverse(MGraph G)
{
    int tmp;
    queue<int> Q;
    for (int m = 0; m < G.numVertexes; m++)
    {
        visited[m] = false;
    }
    for (int i = 0; i < G.numVertexes; i++) //��ÿ��������ѭ��
    {
        visited[i] = true;  //��ǰ�����ʹ�
        cout << G.vexs[i];
        Q.push(i);  //�����
        while (!Q.empty) //���в�Ϊ��
        {
            tmp = Q.pop; //����ֵȡ��
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

/* �ڽӱ�Ĺ�����ȵݹ��㷨 */
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
                p = GL.adjList[tmp].firstedge;  //�ҵ���ǰ����߱��ͷָ��
                while (p)
                {
                    if (!visited[p->adjvex]) //����δ����
                    {
                        visited[p->adjvex] = true;
                        cout << GL.adjList[p->adjvex].data;
                        Q.push(p->adjvex);
                    }
                    p = p->next;    //ָ��ָ����һ�ڽӵ�
                }
            }    
        }  
    }  
}
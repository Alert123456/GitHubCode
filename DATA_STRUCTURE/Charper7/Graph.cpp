#include "Graph.h"

int main()
{
    return 0;
}

/* ����������ͼ���ڽӾ����ʾ */
void CreatMGraph (MGraph *G)
{
    cout << "���붥�����ͱ���:\n";
    cin >> G->numVertexes >> G->numEdges;
    for (int i = 0; i < G->numVertexes; i++)    //���붥����Ϣ�����������
    {
        cin >> G->vexs[i];
    }
    for (int i = 0; i < G->numVertexes; i++)    
    {
        for (int j = 0; i < G->numVertexes; i++)
        {
            G->arc[i][j] = INFINITY;    //�ڽӾ����ʼ��
        }
    }
    for (int k = 0; k < G->numEdges; k++)
    {
        int vi, vj, vw;
        cout << "�����(vi,vj)�ϵ��±�i,�±�j��Ȩw:\n";
        cin >> vi >> vj >> vw;//�����(vi,vj)��Ȩw
        G->arc[vi][vj] = vw;
        G->arc[vj][vi] = G->arc[vi][vj];    //����ͼ������Գ�
    }
}

/* ����ͼ���ڽӱ�ṹ */
void CreatALGraph ( GraphAdjList *G )
{
    EdgeNode *e;
    EdgeType m,n;
    cout << "���붥�����ͱ���\n";
    cin >> G->numVertexes >> G->numEdges;
    for ( int i = 0; i < G->numVertexes; i++ )
    {
        cout << "�������붥��:";
        cin >> G->adjList[i].data;  //���붥����Ϣ
        G->adjList[i].firstedge = NULL; //�߱���Ϊ��
    }
    for (int j = 0; j < G->numEdges; j++ )
    {
        cout << "����ÿ���ߵ������������";
        cin >> m >> n;
        //����ͷ�巨
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
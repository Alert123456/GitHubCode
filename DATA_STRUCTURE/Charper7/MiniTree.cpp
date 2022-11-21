#include "MiniTree.h"

/* Prim �㷨������С������ */
void MiniSpanTree_Prim(MGraph G)
{
    int j,k;
    int adjvex[MAXVEX]; // ������ض����±�
    int lowcost[MAXVEX];    //������ض����ߵ�Ȩֵ
    lowcost[0] = 0; //��ʼ����һ��Ȩֵ��V0��������
    //lowcost��ֵ��0����������Ǵ��±�Ķ����Ѿ�����������
    adjex[0] = 0;   //��ʼ����һ�������±�0
    for (size_t i = 0; i < G.numVertexes; i++)
    {
        lowcost[i] = G.arc[0][i];   //��V0������֮�бߵ�Ȩֵ��������
        adjvex[i] = 0;
    }
    for (size_t i = 0; i < G.numVertexes; i++)
    {
        min = INFINITY; //��ʼ����СȨֵΪ��
        //ͨ������Ϊ�����ܴ��������32767��65535��
        j = 1;
        k = 0;
        while (j < G.numVertexes)
        {
            if(lowcost[j] != 0 && lowcost[j] < min)
            {
                min = lowcost[j];   //���õ�ǰȨֵ��Ϊ��Сֵ
                k = j;              //����ǰ��Сֵ���±����k
            }
            j++;
        }
        cout << adjvex[k] << k;     //��ӡ��ǰ�������Ȩֵ��С��
        lowcost[k] = 0; //����ǰ�����Ȩֵ����Ϊ0����ʾ�˶����Ѿ��������
        for (size_t j = 0; j < G.numVertexes; j++)
        {
            if ( lowcost[j] != 0 && G.arc[k][j] < lowcost[j] )
            {//�±�Ϊk�Ķ������ȨֵС�ڴ�ǰ��Щ����δ������������Ȩֵ
                lowcost[j] = G.arc[k][j];   //����СȨֵ����lowcost
                adjvex[j] = k;  //�±�k����adjvex
            }
        }    
    }   
}

/*�ڽӾ���Gת��Ϊ�߼�����edges����Ȩ��С�������еĴ���*/
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

/* kruskal�㷨������С������ */
void MiniSpanTree_Kruskal(MGraph G)
{
    int n,m;    /*���β���±�*/
    Edge edges[MAXEDGE];    /* ����߼����� */
    int parent[MAXVEX];     /*����һ���������жϱ�����Ƿ��γɻ�·*/
    /*ʡ���ڽӾ���Gת��Ϊ�߼�����edges����Ȩ��С�������еĴ���*/
    //����ʵ��
    Edges_WeightTraversal(G, &edges);

    for (size_t i = 0; i < G.numVertexes; i++)
    {
        parent[i] = 0;  /*��ʼ������ֵ0*/
    }
    for (size_t i = 0; i < G.numEdges; i++) /*ѭ��ÿһ����*/
    {
        n = find(parent, edges[i].begin);
        m = find(parent, edges[i].end);
        if (n != m) /*����n��m���ȣ�˵���˱�û���������������γɻ�·*/
        {
            parent[n] = m;  /*���˱ߵĽ�β��������±�Ϊ����parent��
                            ��ʾ�˶����Ѿ���������������*/
            cout << edges[i].begin << edges[i].end << edges[i].weight;
        }
    } 
}

/*�������߶����β���±�*/
int find (int *parent, int f)
{
    while (parent[f] > 0)
    {
        f = parent[f];
    }
    return f;
}
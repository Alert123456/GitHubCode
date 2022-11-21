#include "ShortestPath.h"

/*Dijkstra�㷨��������ͼG��V0���㵽���ඥ��v���·��P[v]����Ȩ����D[v]
P[v]��ֵΪǰ�������±�,D[v]��ʾv0��v�����·�����Ⱥ�*/
void ShortestPath_Dijkstra(MGraph G, int v0, Patharc *P, ShortOathTable *D)
{
    int k;
    int finial[MAXVEX]; /* finial[w]=1 ��ʾ��ö���v0��vw�����·�� */
    for (size_t v = 0; v < G.numVertexes; v++)  /*��ʼ������*/
    {
        finial[v] = 0;  /*ȫ�������ʼ��Ϊδ֪���·��״̬*/
        (*D)[v] = G.arc[v0][v]; /*����v0�����ߵĶ������Ȩֵ*/
        (*P)[v] = 0;    /*��ʼ��·������PΪ0*/
    }
    (*D)[v0] = 0;   /*v0��v0��·��Ϊ��*/
    final[v0] = 1;  /*v0��v0����Ҫ���·��*/

    /*��ʼ��ѭ����ÿ�����v0��ĳ����������·��*/
    for (size_t v = 0; v < G.numVertexes; v++)
    {
        min = INFINITY; /*��ǰ����v0������������*/
        for (size_t w = 0; w < G.numVertexes; w++)  /*Ѱ����v0��������Ķ���*/
        {
            if (!final[w] && (*D)[w] < min)
            {
                k = w;  /*w���Ѿ��ҵ����·��*/
                min = (*D)[w];  /*w������v0�������*/
            }
        }
        final[k] = 1;   /*Ŀǰ�ҵ�������Ķ�����Ϊ1*/
        for (size_t w = 0; w < G.numVertexes; w++)  /*������ǰ�����·��������*/
        {
            /* �������v�����·������������·���ĳ��ȶ̵Ļ� */
            if( !final[w] && ( min + G.arc[k][w] < (*D)[w] ) )
            {
                /*˵���ҵ��˸��̵�·�����޸�D[w]��P[w]*/
                (*D)[w] = min + G.arc[k][w];
                (*P)[w] = k;
            }
        }   
    }
}

/*Floyd�㷨������ͼG�и�����v����������w���·��P[v][w]����Ȩ����D[v][w]*/
void ShortestPath_Floyd(MGraph G, Pathmatirx *P, ShortPathTable *D)
{
    for( int v = 0; v < G.numVertexes; ++v) /*��ʼ��P��D*/
    {
        for (size_t w = 0; w < G.numVertexes; ++w)
        {
            (*D)[v][w] = G.arc[v][w];   /*D[v][w]ֵ��Ӧ�ڽӾ����ֵ*/
            (*P)[v][w] = w; /*��ʼ��P*/
        }
        for (size_t k = 0; k < G.numVertexes; ++k)
        {
            for (size_t v = 0; v < G.numVertexes; ++v)
            {
                for (size_t w = 0; w < G.numVertexes; w++)
                {
                    if ( (*D)[v][w] > (*D)[v][k] + (*D)[k][w] )
                    {
                        /*��������±�Ϊk����·����ԭ�����·�����̣�
                        ����ǰ�����Ȩֵ��Ϊ��С��һ��*/
                        (*D)[v][w] = (*D)[v][k] + (*D)[k][w];
                        (*P)[v][w] = (*P)[v][k];    /*·�����þ����±�Ϊk�Ķ���*/
                    }
                }
                
            }
            
        }
        
    }
}
/*Floyd�㷨,���·����ʾ*/
void ShortestPath_Floyd_Show(MGraph G)
{
    int k;
    for (size_t v = 0; v < G.numVertexes; ++v)
    {
        for (size_t w = v + 1; w < G.numVertexes; ++w)
        {
            cout << v << "-" << w << "weight" << D[v][w];
            k = P[v][w];    /*��ȡ��һ��·�������±�*/
            cout << v;  /*��ӡԴ��*/
            while (k != w)
            {
                cout << k;  /*��ӡ·������*/
                k = P[k][w];    /*��ȡ��һ��·�궥���±�*/
            }
            cout << w;  /*��ӡ�յ�*/
        }
        cout << endl;
    }
    
}
#include "ShortestPath.h"

/*Dijkstra算法，求有向图G的V0顶点到其余顶点v最短路径P[v]及带权长度D[v]
P[v]的值为前驱顶点下标,D[v]表示v0到v的最短路径长度和*/
void ShortestPath_Dijkstra(MGraph G, int v0, Patharc *P, ShortOathTable *D)
{
    int k;
    int finial[MAXVEX]; /* finial[w]=1 表示求得顶点v0到vw的最短路径 */
    for (size_t v = 0; v < G.numVertexes; v++)  /*初始化数据*/
    {
        finial[v] = 0;  /*全部顶点初始化为未知最短路径状态*/
        (*D)[v] = G.arc[v0][v]; /*将于v0有连线的顶点加上权值*/
        (*P)[v] = 0;    /*初始化路径数组P为0*/
    }
    (*D)[v0] = 0;   /*v0至v0的路径为零*/
    final[v0] = 1;  /*v0至v0不需要求解路径*/

    /*开始主循环，每次求得v0到某个顶点的最短路径*/
    for (size_t v = 0; v < G.numVertexes; v++)
    {
        min = INFINITY; /*当前所离v0顶点的最近距离*/
        for (size_t w = 0; w < G.numVertexes; w++)  /*寻找离v0顶点最近的顶点*/
        {
            if (!final[w] && (*D)[w] < min)
            {
                k = w;  /*w点已经找到最短路径*/
                min = (*D)[w];  /*w顶点离v0顶点更近*/
            }
        }
        final[k] = 1;   /*目前找到的最近的顶点置为1*/
        for (size_t w = 0; w < G.numVertexes; w++)  /*修正当前的最短路径及距离*/
        {
            /* 如果经过v顶点的路径比现在这条路径的长度短的话 */
            if( !final[w] && ( min + G.arc[k][w] < (*D)[w] ) )
            {
                /*说明找到了更短的路径，修改D[w]和P[w]*/
                (*D)[w] = min + G.arc[k][w];
                (*P)[w] = k;
            }
        }   
    }
}

/*Floyd算法，求网图G中各顶点v到其他顶点w最短路径P[v][w]及带权长度D[v][w]*/
void ShortestPath_Floyd(MGraph G, Pathmatirx *P, ShortPathTable *D)
{
    for( int v = 0; v < G.numVertexes; ++v) /*初始化P与D*/
    {
        for (size_t w = 0; w < G.numVertexes; ++w)
        {
            (*D)[v][w] = G.arc[v][w];   /*D[v][w]值对应邻接矩阵的值*/
            (*P)[v][w] = w; /*初始化P*/
        }
        for (size_t k = 0; k < G.numVertexes; ++k)
        {
            for (size_t v = 0; v < G.numVertexes; ++v)
            {
                for (size_t w = 0; w < G.numVertexes; w++)
                {
                    if ( (*D)[v][w] > (*D)[v][k] + (*D)[k][w] )
                    {
                        /*如果经过下标为k顶点路径比原两点间路径更短，
                        将当前两点间权值设为更小的一个*/
                        (*D)[v][w] = (*D)[v][k] + (*D)[k][w];
                        (*P)[v][w] = (*P)[v][k];    /*路径设置经过下标为k的顶点*/
                    }
                }
                
            }
            
        }
        
    }
}
/*Floyd算法,最短路径显示*/
void ShortestPath_Floyd_Show(MGraph G)
{
    int k;
    for (size_t v = 0; v < G.numVertexes; ++v)
    {
        for (size_t w = v + 1; w < G.numVertexes; ++w)
        {
            cout << v << "-" << w << "weight" << D[v][w];
            k = P[v][w];    /*获取第一个路径顶点下标*/
            cout << v;  /*打印源点*/
            while (k != w)
            {
                cout << k;  /*打印路径顶点*/
                k = P[k][w];    /*获取下一个路标顶点下标*/
            }
            cout << w;  /*打印终点*/
        }
        cout << endl;
    }
    
}
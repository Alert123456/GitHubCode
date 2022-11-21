#include "Topological.h"

/*拓扑排序，若GL无回路，则输出拓扑排序序列并返回OK，若有回路返回ERROR*/
int TopologicalSort(GraphAdjList GL)
{
    int k,gettop;
    int top = 0;    /*用于栈的指针下标*/
    int count = 0;  /*用于统计输出顶点的个数*/
    int *strack;    /*建栈存储入度为0的顶点*/
    strack = new int();
    for (size_t i = 0; i < GL->numVertexes; i++)
    {
        if (GL->adjList[i].in == 0)
        {
            strack[++top] = i;  /*将入度为0的顶点入栈*/
        }
        
    }
    /* 关键路径加入 */
    top2 = 0;   /* 初始化为0 */
    etv = new int();    /* 时间最早发生时间 */
    for (size_t i = 0; i < GL->numVertexes; i++)
    {
        etv[i] = 0; /* 初始化为 0 */
    }
    stack2 = new int();
    /***************/
    while(top!=0)
    {
        gettop = strack[top--]; /*出栈*/
        cout << "%d->" << GL->adjList[gettop].data; /*打印此结点*/
        count++;    /*统计输出顶点数*/
        /* 关键路径加入 */
        stack2[++top2] = gettop;    /* 弹出的顶点序号压入拓扑序列的栈 */
        /***************/
        for (EdgeNode *e = GL->adjList[gettop].firstedge; e; e = e->next)
        {
            /*对此顶点弧表进行遍历*/
            k = e->adjvex;
            if(!(--GL->adjList[k].in))  /*将k号顶点邻接点的入度减1*/
            {
                stack[++top] = k;   /*若为0则入栈，以便于下次循环输出*/
            }
            /* 关键路径加入 */
            if ( ( etv[gettop] + e->weight ) > etv[k] )   /* 求各顶点事件最早发生时间值 */
            {
                etv[k] = etv[gettop] + e->weight; 
            }
            /***************/
        }
        
    }
    if(count < GL->numVertexes) /*如果count小于顶点数，说明存在环*/
    {
        return ERROR;
    }
    else
    {
        return OK;
    }
}
/* 求关键路径，GL为有向图，输出GL的各项关键活动 */
void CriticalPath(GraphAdjList GL)
{
    EdgeNode *e;
    int k,;
    int ete, lte;   /* 声明活动最早发生时间和最迟发生时间*/
    TopologicalSort(GL);    /* 求拓扑排序，计算数组etv和stack2的值 */
    ltv = new int();    /* 初始化ltv*/
    for (size_t i = 0; i < GL->numVertexes; i++)
    {
        ltv[i] = etv[GL->numVertexes-1];    /* 初始化ltv */
    }
    
    while(top2 != 0)    /* 计算ltv */
    {
        int gettop = starck2[top2--];   /* 将拓扑序列出栈，后进先出*/
        for ( e = GL->adjList[gettop].firstedge; e; e = e->next )
        {
            /* 求各顶点事件的最迟发生时间ltv值 */
            k = e->adjvex;
            if(ltv[k] - e->weight < ltv[gettop])    /* 求各顶点事件最晚发生时间 ltv*/
            {
                ltv[gettop] = ltv[k] - e->weight;   /*更新ltv表*/
            }
        }
    }
    for (size_t j = 0; j < GL->numVertexes; j++)    /* 求ete,lte和关键活动 */
    {
        for ( e = GL->adjList[j].firstedge; e; e = e->next )
        {
            k = e->adjvex;
            ete = etv[k];   /* 活动最早发生时间 */
            lte = ltv[k] - e->weight;   /* 活动最迟发生时间 */
            if (ete = lte)  /* 两者相等即在关键路径上*/
            {
                cout << "length: " << GL->adjList[j].data << GL->adjList[k].data << e->weight;
            }
        }
        
    }
    
}
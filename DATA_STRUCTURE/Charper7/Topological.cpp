#include "Topological.h"

/*����������GL�޻�·������������������в�����OK�����л�·����ERROR*/
int TopologicalSort(GraphAdjList GL)
{
    int k,gettop;
    int top = 0;    /*����ջ��ָ���±�*/
    int count = 0;  /*����ͳ���������ĸ���*/
    int *strack;    /*��ջ�洢���Ϊ0�Ķ���*/
    strack = new int();
    for (size_t i = 0; i < GL->numVertexes; i++)
    {
        if (GL->adjList[i].in == 0)
        {
            strack[++top] = i;  /*�����Ϊ0�Ķ�����ջ*/
        }
        
    }
    /* �ؼ�·������ */
    top2 = 0;   /* ��ʼ��Ϊ0 */
    etv = new int();    /* ʱ�����緢��ʱ�� */
    for (size_t i = 0; i < GL->numVertexes; i++)
    {
        etv[i] = 0; /* ��ʼ��Ϊ 0 */
    }
    stack2 = new int();
    /***************/
    while(top!=0)
    {
        gettop = strack[top--]; /*��ջ*/
        cout << "%d->" << GL->adjList[gettop].data; /*��ӡ�˽��*/
        count++;    /*ͳ�����������*/
        /* �ؼ�·������ */
        stack2[++top2] = gettop;    /* �����Ķ������ѹ���������е�ջ */
        /***************/
        for (EdgeNode *e = GL->adjList[gettop].firstedge; e; e = e->next)
        {
            /*�Դ˶��㻡����б���*/
            k = e->adjvex;
            if(!(--GL->adjList[k].in))  /*��k�Ŷ����ڽӵ����ȼ�1*/
            {
                stack[++top] = k;   /*��Ϊ0����ջ���Ա����´�ѭ�����*/
            }
            /* �ؼ�·������ */
            if ( ( etv[gettop] + e->weight ) > etv[k] )   /* ��������¼����緢��ʱ��ֵ */
            {
                etv[k] = etv[gettop] + e->weight; 
            }
            /***************/
        }
        
    }
    if(count < GL->numVertexes) /*���countС�ڶ�������˵�����ڻ�*/
    {
        return ERROR;
    }
    else
    {
        return OK;
    }
}
/* ��ؼ�·����GLΪ����ͼ�����GL�ĸ���ؼ�� */
void CriticalPath(GraphAdjList GL)
{
    EdgeNode *e;
    int k,;
    int ete, lte;   /* ��������緢��ʱ�����ٷ���ʱ��*/
    TopologicalSort(GL);    /* ���������򣬼�������etv��stack2��ֵ */
    ltv = new int();    /* ��ʼ��ltv*/
    for (size_t i = 0; i < GL->numVertexes; i++)
    {
        ltv[i] = etv[GL->numVertexes-1];    /* ��ʼ��ltv */
    }
    
    while(top2 != 0)    /* ����ltv */
    {
        int gettop = starck2[top2--];   /* ���������г�ջ������ȳ�*/
        for ( e = GL->adjList[gettop].firstedge; e; e = e->next )
        {
            /* ��������¼�����ٷ���ʱ��ltvֵ */
            k = e->adjvex;
            if(ltv[k] - e->weight < ltv[gettop])    /* ��������¼�������ʱ�� ltv*/
            {
                ltv[gettop] = ltv[k] - e->weight;   /*����ltv��*/
            }
        }
    }
    for (size_t j = 0; j < GL->numVertexes; j++)    /* ��ete,lte�͹ؼ�� */
    {
        for ( e = GL->adjList[j].firstedge; e; e = e->next )
        {
            k = e->adjvex;
            ete = etv[k];   /* ����緢��ʱ�� */
            lte = ltv[k] - e->weight;   /* ���ٷ���ʱ�� */
            if (ete = lte)  /* ������ȼ��ڹؼ�·����*/
            {
                cout << "length: " << GL->adjList[j].data << GL->adjList[k].data << e->weight;
            }
        }
        
    }
    
}
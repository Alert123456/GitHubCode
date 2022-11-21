//ͷ�ļ�
#include <iostream>
#include <vector>
#include <string>
#include <list>
#include <ctime>

using namespace std;

typedef char VertexType;  /* ��������Ӧ���û����� */
typedef int EdgeType;  /* ���ϵ�Ȩֵ����Ӧ���û����� */
#define MAXVEX 100  /* ��󶥵���Ӧ���û����� */
#define INFINITY 65535 /* ��65535������� */

#define ERROR 0
#define OK 1
#define FALSE 0

/*�ؼ�·����ر���*/
int *etv ,*ltv; /* ʱ�����緢��ʱ�����ٷ���ʱ������ */
int *stack2;    /* ���ڴ洢�������е�ջ */
int top2;   /* ����stack2��ָ�� */

/* �߱��� */
struct EdgeNode
{
    int adjvex; //�ڽӵ��򣬴洢�ö����Ӧ���±�
    EdgeType weight;    //���ڴ洢Ȩֵ�����ڷ���ͼ���Բ���Ҫ
    struct EdgeNode *next;  //����ָ����һ���ڽӵ�
};
/* ������� */
struct VertexNode
{
    int in;     //�������
    VertexType data;    //�����򣬴洢������Ϣ
    EdgeNode *firstedge;    //�߱�ͷָ��
};
typedef VertexNode AdjList[MAXVEX];
struct graphAdjList
{
    AdjList adjList;
    int numVertexes, numEdges;  //ͼ�е�ǰ�������ͱ���
};
typedef graphAdjList *GraphAdjList;
/*����������GL�޻�·������������������в�����OK�����л�·����ERROR*/
int TopologicalSort(GraphAdjList GL);

/* ��ؼ�·����GLΪ����ͼ�����GL�ĸ���ؼ�� */
void CriticalPath(GraphAdjList GL);
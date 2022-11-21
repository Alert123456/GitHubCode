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

struct MGraph
{
    VertexType vexs[MAXVEX];    //�����
    EdgeType arc[MAXVEX][MAXVEX]; /* �ڽӾ��󣬿ɿ����� */
    int numVertexes, numEdges;  //ͼ�е�ǰ�Ķ������ͱ���
};
/* ����������ͼ���ڽӾ����ʾ */
void CreatMGraph (MGraph *G);


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
    VertexType data;    //�����򣬴洢������Ϣ
    EdgeNode *firstedge;    //�߱�ͷָ��
};
typedef VertexNode AdjList[MAXVEX];
struct GraphAdjList
{
    AdjList adjList;
    int numVertexes, numEdges;  //ͼ�е�ǰ�������ͱ���
};

/* ����ͼ���ڽӱ�ṹ */
void CreatALGraph ( GraphAdjList *G );

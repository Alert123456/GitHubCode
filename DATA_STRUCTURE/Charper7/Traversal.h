//ͷ�ļ�
#include <iostream>
#include <vector>
#include <string>
#include <list>
#include <ctime>
#include "Graph.h"
#include <queue>
using namespace std;

#define MAX 100  /* ��󶥵���Ӧ���û����� */
#define INFINITY 65535 /* ��65535������� */
#define ERROR 0
#define OK 1
#define FALSE 0

typedef bool Boolean;  /* Boolean�ǲ������ͣ���ֵ��TRUE��FALSE */
Boolean visited[MAX];   /*���ʱ�־������ */

/* �ڽӾ����������ȵݹ��㷨 */
void DFS(MGraph G, int i);
/* �ڽӾ������ȱ������� */
void DFSTraverse(MGraph G);
/* �ڽӱ��������ȵݹ��㷨 */
void DFS(GraphAdjList GL, int i);
/* �ڽӱ����ȱ������� */
void DFSTraverse(GraphAdjList GL);
/* �ڽӾ���Ĺ�����ȵݹ��㷨 */
void BFSTraverse(MGraph G);
/* �ڽӱ�Ĺ�����ȵݹ��㷨 */
void BFSTraverse(GraphAdjList GL);
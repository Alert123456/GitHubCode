//头文件
#include <iostream>
#include <vector>
#include <string>
#include <list>
#include <ctime>
#include "Tree.h"
using namespace std;

typedef char VertexType;  /* 顶点类型应由用户定义 */
typedef int EdgeType;  /* 边上的权值类型应由用户定义 */
#define MAXVEX 100  /* 最大顶点数应由用户定义 */
#define INFINITY 65535 /* 用65535来代表∞ */

#define ERROR 0
#define OK 1
#define FALSE 0
#define LH 1 /* 左高 */
#define EH 0 /* 等高 */
#define RH -1 /* 右高 */

struct BiTNode  /* 结点结构 */
{
    int data;   /* 结点数据 */
    int bf; /* 结点的平衡因子 */
    struct BiTNode *lchild, *rchild;    /* 左右孩子指针 */
};
typedef BiTNode *BiTree; 
/* 对以p为根的二叉排序树作右旋处理 */
/* 处理之后p指向新的树根结点，即旋转处理之前的左子树的根结点 */
void R_Rotate(BiTree *p);
/* 对以p为根的二叉排序树作左旋处理 */
/* 处理之后p指向新的树根结点，即旋转处理之前的右子树的根结点 */
void L_Rotate(BiTree *p);
/* 对以指针T所指结点为根的二叉树作左平衡旋转处理 */
/* 本算法结束时，指针T指向新的根结点 */
void LeftBalance (BiTree *T);
/* 对以指针T所指结点为根的二叉树作左平衡旋转处理 */
/* 本算法结束时，指针T指向新的根结点 */
void RightBalance (BiTree *T);
/* 若在平衡的二叉排序树T中不存在和e有相同关键字的结点，则插入一个 */
/* 数据元素为e的新结点并返回1，否则返回0.若因插入而使二叉排序树 */
/* 失去平衡，则作平衡旋转处理，布尔变量taller反映T长高与否。 */
int InsertAVL(BiTree *T, int e, int *taller);
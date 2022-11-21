//头文件
#include <iostream>
#include <vector>
#include <string>
#include <list>
#include <ctime>

using namespace std;

#define MAX_TREE_SIZE 100
#define ERROR 0
#define OK 1
#define FALSE 0

typedef int TElemType;  /* 树结点的数据类型，目前暂定为整型 */

/* 树的双亲表示法结构定义 */
struct PTNode   /* 结点结构 */
{
    TElemType data; /* 结点数据 */
    int parent;     /* 双亲位置 */
};
struct PTree    /* 树结构 */
{
    PTNode nodes[MAX_TREE_SIZE];    /* 结点数组 */
    int r,n;        /* 根的位置和结点数 */
};

/* 树的孩子表示法结构定义 */
struct CTNode   /* 孩子结点 */
{
    int child;
    struct CTNode *next;
};
typedef CTNode *ChildPtr;
struct CTBox
{
    TElemType data;
    ChildPtr firstchild;
};
struct CTree
{
    CTBox nodes[MAX_TREE_SIZE]; /* 结点数组 */
    int r,n;    /* 根的位置和结点数 */
};
/* 树的孩子兄弟表示法结构定义 */
struct CSNode
{
    TElemType data;
    struct CSNode *firstchild, *rightsib;
};
typedef CSNode *CSTree;

/* 二叉树的二叉链表结点结构定义 */
struct BiTNode
{
    char data;
    struct BiTNode *lchild, *rchild;
};
typedef BiTNode *BiTTree;

//建立二叉树
void CreatdeTree (BiTTree *T);

/********** 二叉树遍历算法 **********/
//前序遍历算法
void PreOrderTravere (BiTTree T);
//中序遍历算法
void InOrderTravere (BiTTree T);
//后序遍历算法
void PostOrderTravere (BiTTree T);

/********** 二叉树的二叉线索存储结构定义 **********/
enum PointerTag{Link,Thread};    //Link==0 表示指向前驱或后继的线索，Thread==1 表示指向前驱或后继的线索

/********** 二叉线索存储结点结构 **********/
struct BiThrNode
{
    TElemType data; //结点数据
    struct BiThrNode *lchild, *rchild; //左右孩子指针
    PointerTag Ltag, Rtag;  //左右标志
};
typedef BiThrNode *BiThrTree;

BiThrTree pre; //全局变量，始终指向刚刚访问过的结点
/********** 中序遍历进行中序线索化 **********/
void InTreading(BiThrTree p);

/********** 线索二叉树遍历操作 **********/
TElemType InOrderTravere_Thr(BiThrTree T);




/********** 二叉树的基本操作 **********/
// InitTree(*T);   //构造空树
// DestroyTree(*T);    //销毁树
// CreateTree(*T, definition); //按definition中给出的树的定义来构造树
// ClearTree(*T);  //若树存在，则将树T清为空树
// TreeEmpty(T);   //若T为空树，返回true，否则返回false
// TreeDepth(T);   //返回T的深度
// Root(T);    //返回T的根节点
// Value(T, cur_e); //cur_e是树T中的一个结点，返回此结点的值
// Assign(T, cur_e, value);    //给树T的结点cur_e赋值为value
// Parent(T, cur_e);   //若cur_e是树T的非根结点，则返回返回它的双亲，否则返回空
// LeftChild(T, cur_e);    //若cur_e是树T的非叶结点，则返回它的最左孩子，否则返回空
// RightSibling(T, cur_e); //若cur_e有右兄弟，则返回它的右兄弟，否则返回空
// InsertChild(*T, *p, i, c);  //其中p指向树T的某个结点，i为所指结点p的度加上1，非空
//                             //树c与T不相交，操作结果为插入c为树T中p指结点的第i棵子树。
// DeleteChild(*T, *p, i);     //其中p指向树T的某个结点，i为所指结点p的度，操作结果为
//                             //删除T中p所指结点的第i棵子树。
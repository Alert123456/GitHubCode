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

/* 顺序查找，a为数组，n为要查找的数组长度，key为要查找的关键字 */
int Sequential_Search(int *a, int n, int key);
/* 有哨兵顺序查找 */
int Sequential_Search2(int *a, int n, int key);
/* 二分查找 */
int Binary_Search(int *a, int n, int key);
/* 二分查找 */
int Binary_Search(int *a, int n, int key);
/* 斐波那契查找 */
int Fibonacci_Search(int *a, int n, int key);

/* 二叉排序树 */
/* 递归查找二叉排序树T中是否存在key
指针f指向T的双亲,其初始调用值为NULL
若查找成功,则指针p指向该数据元素结点,并返回TRUE
否则指针p指向查找路径上访问的最后一个结点并返回FALSE*/
int SearchBST(BiTTree T, int key, BiTTree f, BiTTree *p);
/* 当二叉排列树T中不存在关键字等于key的数据元素时，
插入key并返回TRUE,否则返回FALSE */
int InsertBST(BiTTree *T, int key);
/* 二叉排列树的构建 */
void CreatBST();
/* 若二叉排序树T中存在关键字等于key的数据元素时，则删除该元素结点，
并返回TRUE;否则返回FALSE*/
int DeleteBST(BiTTree *T, int key);
/* 从二叉排列树中删除结点p, 并重接它的左或右子树*/
int Delete(BiTTree *p);


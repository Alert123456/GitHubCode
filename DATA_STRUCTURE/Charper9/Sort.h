//头文件
#include <iostream>
#include <vector>
#include <string>
#include <list>
#include <ctime>
#include "Tree.h"
using namespace std;

#define MAXSIZE 10  /* 用于要排序数组个数最大值，可根据需要修改 */
#define MAX_LENGTH_INSERT_SORT 7    /* 数组长度阀值 */
struct SqList
{
    int r[MAXSIZE + 1]; /* 用于存储要排序数组，r[0]用作哨兵或临时变量 */
    int length; /* 用于记录顺序表的长度 */
};

/* 交换L中数组r的下标为i和j的值 */
void swap(SqList *L, int i, int j);
/* 对顺序表L作交换排序(冒泡排序初级版) */
void BubbleSort0( SqList *L );
/* 对顺序表L作冒泡排序 */
void BubbleSort( SqList *L );
/* 对顺序表L作改进冒泡算法 */
void BubbleSort2( SqList *L );
/* 对顺序表L作简单选择排序 */
void SelectSort (SqList *L);
/* 对顺序表L作直接插入排序 */
void InsertSort(SqList *L);
/* 对顺序表L作直接希尔排序 */
void ShellSort(SqList *L);
/* 对顺序表L进行堆排列 */
void HeapSort(SqList *L);
/* 已知L->r[s..m]中记录的关键字除L->r[s]之外均满足堆的定义 */
/* 本函数调整L->r[s]的关键字，使L->r[s..m]成为一个大顶堆 */
void HeapAdjust(SqList *L, int s, int m);
/* 对顺序表L作归并排序 */
void MergeSort(SqList *L);
/* 将SR[s..t]归并排序为TR1[s..t] */
void MSort(int SR[], int TR1[], int s, int t);
/* 将有序的SR[i..m]和SR[m+1..n]归并为有序的TR[i..n] */
void Merge(int SR[], int TR[], int i, int m, int n);
/* 对顺序表L作归并非递归排序*/
void MergeSort2 (SqList *L);
/* 将SR[]中相邻长度为s的子序列两两归并到TR[] */
void MergePass (int SR[], int TR[], int s, int n);
/* 对顺序表作快速排序 */
void QuickSort (SqList *L);
/* 对顺序表L中的子序列L->r[low..high]作快速排序 */
void QSort(SqList *L, int low, int high);
/* 对顺序表L中的子序列L->r[low..high]作递归优化 */
void QSort1(SqList *L, int low, int high);
/* 交换顺序表L中子表的记录，使枢纽记录到位并返回其所在位置 */
/* 此时在它之前(后)的记录均不大(小)于它。*/
void Partition(SqList *L, int low, int high);
/* 快速排序优化算法 */
void Partition1(SqList *L, int low, int high);
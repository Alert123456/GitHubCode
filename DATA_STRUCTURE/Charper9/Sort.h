//ͷ�ļ�
#include <iostream>
#include <vector>
#include <string>
#include <list>
#include <ctime>
#include "Tree.h"
using namespace std;

#define MAXSIZE 10  /* ����Ҫ��������������ֵ���ɸ�����Ҫ�޸� */
#define MAX_LENGTH_INSERT_SORT 7    /* ���鳤�ȷ�ֵ */
struct SqList
{
    int r[MAXSIZE + 1]; /* ���ڴ洢Ҫ�������飬r[0]�����ڱ�����ʱ���� */
    int length; /* ���ڼ�¼˳���ĳ��� */
};

/* ����L������r���±�Ϊi��j��ֵ */
void swap(SqList *L, int i, int j);
/* ��˳���L����������(ð�����������) */
void BubbleSort0( SqList *L );
/* ��˳���L��ð������ */
void BubbleSort( SqList *L );
/* ��˳���L���Ľ�ð���㷨 */
void BubbleSort2( SqList *L );
/* ��˳���L����ѡ������ */
void SelectSort (SqList *L);
/* ��˳���L��ֱ�Ӳ������� */
void InsertSort(SqList *L);
/* ��˳���L��ֱ��ϣ������ */
void ShellSort(SqList *L);
/* ��˳���L���ж����� */
void HeapSort(SqList *L);
/* ��֪L->r[s..m]�м�¼�Ĺؼ��ֳ�L->r[s]֮�������ѵĶ��� */
/* ����������L->r[s]�Ĺؼ��֣�ʹL->r[s..m]��Ϊһ���󶥶� */
void HeapAdjust(SqList *L, int s, int m);
/* ��˳���L���鲢���� */
void MergeSort(SqList *L);
/* ��SR[s..t]�鲢����ΪTR1[s..t] */
void MSort(int SR[], int TR1[], int s, int t);
/* �������SR[i..m]��SR[m+1..n]�鲢Ϊ�����TR[i..n] */
void Merge(int SR[], int TR[], int i, int m, int n);
/* ��˳���L���鲢�ǵݹ�����*/
void MergeSort2 (SqList *L);
/* ��SR[]�����ڳ���Ϊs�������������鲢��TR[] */
void MergePass (int SR[], int TR[], int s, int n);
/* ��˳������������� */
void QuickSort (SqList *L);
/* ��˳���L�е�������L->r[low..high]���������� */
void QSort(SqList *L, int low, int high);
/* ��˳���L�е�������L->r[low..high]���ݹ��Ż� */
void QSort1(SqList *L, int low, int high);
/* ����˳���L���ӱ�ļ�¼��ʹ��Ŧ��¼��λ������������λ�� */
/* ��ʱ����֮ǰ(��)�ļ�¼������(С)������*/
void Partition(SqList *L, int low, int high);
/* ���������Ż��㷨 */
void Partition1(SqList *L, int low, int high);
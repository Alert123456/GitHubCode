#include "Sort.h"

/* ����L������r���±�Ϊi��j��ֵ */
void swap(SqList *L, int i, int j)
{
    int temp = L->r[i];
    L->r[i] = L->r[j];
    L->r[j] = temp;
}
/* ��˳���L����������(ð�����������) */
void BubbleSort0( SqList *L )
{
    for (size_t i = 1; i < L->length; i++)
    {
        for (size_t j = i+1; j < L->length; j++)
        {
            if (L->r[i] > L->r[j])
            {
                swap(L, i, j);  /* ����L->r[i] �� L->r[j]��ֵ*/
            }    
        }    
    }
}
/* ��˳���L��ð������ */
void BubbleSort( SqList *L )
{
    for (size_t i = 1; i < L->length; i++)
    {
        for (size_t j = L->length - 1; j >= i; j--)  /* ע��j�ǴӺ���ǰѭ�� */
        {
            if (L->r[j] > L->r[j+1])    /* ��ǰ�ߴ��ں���(ע��������һ�㷨����)*/
            {
                swap(L, j, j+1);    /* ����L->r[j] �� L->r[j+1]��ֵ */
            }
        }
        
    }
    
}
/* ��˳���L���Ľ�ð���㷨 */
void BubbleSort2( SqList *L )
{
    int flag = true;    /* flag������Ϊ��� */
    for (size_t i = 1; i < L->length && flag; i++)  /* ��flagΪfalse���˳�ѭ�� */
    {
        flag = false;   /* ��ʼ��Ϊflase */
        for (size_t j = L->length - 1; j >= i; j--)
        {
            if( L->r[j] > L->r[j+1])
            {
                swap(L, j, j+1);    /* ����L->r[j] �� L->r[j+1]��ֵ */
                flag = true;    /* ��������ݽ�������flagΪtrue */
            }
        }
    }
}
/* ��˳���L����ѡ������ */
void SelectSort (SqList *L)
{
    int min;
    for (size_t i = 1; i < L->length; i++)
    {
        min = i;    /* ����ǰ�±궨��Ϊ��Сֵ�±� */
        for (size_t j = i + 1; j <= L->length; j++) /* ѭ��֮������� */
        {
            if (L->r[min] > L->r[j])    /* �����С�ڵ�ǰ��Сֵ�Ĺؼ��� */
            {
                min = j;    /* ���˹ؼ��ֵ��±긳ֵ��min*/
            }
        }
        if(i != min)    /* ��min������i��˵���ҵ���Сֵ������*/
        {
            swap(L, i, min);    /* ����L->r[i] �� L->r[min] ��ֵ */
        }  
    }    
}
/* ��˳���L��ֱ�Ӳ������� */
void InsertSort(SqList *L)
{
    for (size_t i = 2; i < L->length; i++)
    {
        if (L->r[i] < L->r[i-1])    /* �轫L->r[i]���������ӱ� */
        {
            L->r[0] = L->r[i];  /* �����ڱ� */
            for (size_t j = i - 1; L->r[j] > L->r[0]; j--)
            {
                L->r[j+1] = L->r[j];    /* ��¼���� */
            }
            L->r[j+1] = L->r[0];    /* ���뵽��ȷ��λ�� */
        }
    }
}
/* ��˳���L��ֱ��ϣ������ */
void ShellSort(SqList *L)
{
    int increment = L->length;
    do
    {
        increment = increment/3 + 1;    /* �������� */
        for (size_t i = increment + 1; i < L->length; i++)
        {
            if (L->r[i] < L->r[i - increment])
            {
                /* �轫L->r[i] �������������ӱ� */
                L->r[0] = L->r[i];  /* �ݴ���L->r[0] */
                for (size_t j = i - increment; j > 0 && L->r[0] < L->r[j]; j-=increment)
                {
                    L->r[j+increment] = L->r[j];    /* ��¼���ƣ����Ҳ���λ�� */
                }
                L->r[j + increment] = L->r[0];  /* ���� */
            } 
        }
    } while (increment > 1);
}
/* ��˳���L���ж����� */
void HeapSort(SqList *L)
{
    for (size_t i = L->length/2; i > 0; i--)    /* ��L�е�r������һ���󶥶� */
    {
        HeapAdjust(L, i, L->length);
    }
    for (size_t i = L->length; i > 1; i--)
    {
        swap(L, 1, i);  /* ���Ѷ���¼�͵�ǰδ�����������е����һ����¼���� */
        HeapAdjust(L, 1, L->length);    /* ��L->r[1..i-1]���µ���Ϊ�󶥶� */
    }
    
}
/* ��֪L->r[s..m]�м�¼�Ĺؼ��ֳ�L->r[s]֮�������ѵĶ��� */
/* ����������L->r[s]�Ĺؼ��֣�ʹL->r[s..m]��Ϊһ���󶥶� */
void HeapAdjust(SqList *L, int s, int m)
{
    int temp = L->r[s];
    for (size_t j = 2*s; j < m; j*=2)   /* �عؼ��ֽϴ�ĺ��ӽ������ɸѡ */
    {
        if(j < m && L->r[j] < L->r[j+1])    /* jΪ�ؼ����нϴ�ļ�¼�±� */
            ++j;
        if(temp >= L->r[j])
            break;
        L->r[s] = L->r[j];
        s = j;
    }
    L->r[s] = temp; /* ���� */
}
/* ��˳���L���鲢���� */
void MergeSort(SqList *L)
{
    MSort(L->r, L->r, 1, L->length);
}
/* ��SR[s..t]�鲢����ΪTR1[s..t] */
void MSort(int SR[], int TR1[], int s, int t)
{
    int m;
    int TR2[MAXSIZE + 1];
    if (s == t)
    {
        TR1[s] = SR[s];
    }
    else
    {
        m = (s + t)/2;  /* ��SR[s..t]ƽ��ΪSR[s..m]��SR[m+1..t] */
        MSort(SR, TR2, s, m);   /* �ݹ齫SR[s..m]�鲢Ϊ�����TR2[s..m] */
        Msort(SR, TR2, m+1, t); /* �ݹ齫SR[m+1..t]�鲢Ϊ����TR2[m+1..t] */
        Merge(TR2, TR1, s, m, t);   /*��TR2[s..m]��TR2[m+1..t]�鲢��TR1[s..t]*/
    }
}
/* �������SR[i..m]��SR[m+1..n]�鲢Ϊ�����TR[i..n] */
void Merge(int SR[], int TR[], int i, int m, int n)
{
    int j, k, h;
    for ( j = m + 1, k = i; i <= m && j <= n; k++)  /* ��SR�м�¼��С����鲢��TR */
    {
        if(SR[i] < SR[j])
            TR[k] = SR[i++];
        else
            TR[k] = SR[j++];
    }
    if (i <= m)
    {
        for ( h = 0; h <= m-i; h++)
        {
            TR[k + h] = SR[i + h];  /* ��ʣ���SR[i..m]���Ƶ�TR */
        }
    }
    if (j <= n)
    {
        for ( h = 0; h <= n - j; h++)
        {
            TR[k + h] = SR[j + h];  /* ��ʣ���SR[j..n]���Ƶ�TR */
        }       
    }
}
/* ��˳���L���鲢�ǵݹ�����*/
void MergeSort2 (SqList *L)
{
    int* TR = new int();
    int k = 1;
    while (k < L->length)
    {
        MergePass(L->r, TR, k, L->length);
        k = 2 * k;  /* �����г��ȼӱ� */
        MergePass(TR, L->r, k, L->length);
        k = 2 * k;  /* �����г��ȼӱ� */
    }
}
/* ��SR[]�����ڳ���Ϊs�������������鲢��TR[] */
void MergePass (int SR[], int TR[], int s, int n)
{
    int i = 1;
    int j;
    while (i <= n - 2 * s + 1)
    {
        Merge(SR, TR, i, i + s - 1, i + 2 * s - 1);   /* �����鲢 */
        i = i + 2 * s;
    }
    if (i < n - s + 1)  /* �鲢����������� */
        Merge(SR, TR, i, i + s - 1, n);
    else
    {
        for(j = i; j <= n; j++)
        {
            TR[j] = SR[j];
        }
    }
}
/* ��˳������������� */
void QuickSort (SqList *L)
{    
    QSort(L, 1, L->length);
}
/* ��˳���L�е�������L->r[low..high]���������� */
void QSort(SqList *L, int low, int high)
{
    int pivot;
    
    if ( (L->length - 1) > MAX_LENGTH_INSERT_SORT ) /* ���ڳ���ʱ�ÿ��� */
    {
        // pivot = Partition(L, low, high);    /* ��L->r[low..high]һ��Ϊ���������Ŧֵpivot */
        pivot = Partition1(L, low, high);   /* ��L->r[low..high]һ��Ϊ���������Ŧֵpivot,�Ľ� */
        QSort(L, low, pivot - 1);           /* �Ե��ӱ�ݹ����� */
        QSort(L, pivot + 1, high);          /* �Ը��ӱ�ݹ����� */
    }
    else    /* С�ڵ��ڳ���ʱ��ֱ�Ӳ�������*/
        InsertSort(L);
}
void QSort(SqList *L, int low, int high)
{
    int pivot;
    
    if ( (L->length - 1) > MAX_LENGTH_INSERT_SORT ) /* ���ڳ���ʱ�ÿ��� */
    {
        while (low < high)
        {
            
            pivot = Partition1(L, low, high);   /* ��L->r[low..high]һ��Ϊ���������Ŧֵpivot,�Ľ� */
            QSort1(L, low, pivot - 1);           /* �Ե��ӱ�ݹ����� */
            low = pivot + 1;
        }
        
    }
    else    /* С�ڵ��ڳ���ʱ��ֱ�Ӳ�������*/
        InsertSort(L);
}
/* ����˳���L���ӱ�ļ�¼��ʹ��Ŧ��¼��λ������������λ�� */
/* ��ʱ����֮ǰ(��)�ļ�¼������(С)������*/
void Partition(SqList *L, int low, int high)
{
    int pivotkey;
    int m = low + (high - low) / 2; /* ���������м�Ԫ�ص��±� */
    if (L->r[low] > L->r[high])
        swap(L, low, high); /* ����������Ҷ����ݣ���֤�����С */
    if (L->r[m] > L->r[high])
        swap(L, high, m); /* ����������Ҷ����ݣ���֤�м���С */
    if (L->r[m] > L->r[low])
        swap(L, m, low); /* �����м���������ݣ���֤�����С */
    /* ��ʱL->r[low]�Ѿ����������������������ؼ��ֵ��м�ֵ */

    pivotkey = L->r[low];   /* ���ӱ�ĵ�һ����¼����Ŧ��¼ */
    while (low < high)  /* �ӱ�����˽������м�ɨ�� */
    {
        while (low < high && L->r[high] >= pivotkey)
        {
            high--;
        }
        swap(L, low, high); /* ������Ŧ��¼С�ļ�¼�������Ͷ� */
        while (low < high && L->r[low] <= pivotkey)
        {
            low++;
        }
        swap(L, low, high); /* ������Ŧ��¼��ļ�¼�������߶� */
    }
    return low; /* ������������λ�� */
}
/* ���������Ż��㷨 */
void Partition1(SqList *L, int low, int high)
{
    int pivotkey;
    int m = low + (high - low) / 2; /* ���������м�Ԫ�ص��±� */
    if (L->r[low] > L->r[high])
        swap(L, low, high); /* ����������Ҷ����ݣ���֤�����С */
    if (L->r[m] > L->r[high])
        swap(L, high, m); /* ����������Ҷ����ݣ���֤�м���С */
    if (L->r[m] > L->r[low])
        swap(L, m, low); /* �����м���������ݣ���֤�����С */
    /* ��ʱL->r[low]�Ѿ����������������������ؼ��ֵ��м�ֵ */
    
    pivotkey = L->r[low];   /* ���ӱ�ĵ�һ����¼����Ŧ��¼ */
    L->r[0] = pivotkey; /* ������ؼ��ֱ��ݵ�L.r[0] */
    while (low < high)  /* �ӱ�����˽������м�ɨ�� */
    {
        while (low < high && L->r[high] >= pivotkey)
        {
            high--;
        }
        L->r[low] = L->r[high]; /* �����滻�����ǽ����ķ�ʽ���� */
        while (low < high && L->r[low] <= pivotkey)
        {
            low++;
        }
        L->r[high] = L->r[low]; /* �����滻�����ǽ����ķ�ʽ���� */
    }
    L->r[low] = L->r[0];    /* ��������ֵ�滻��L.r[low]*/
    return low; /* ������������λ�� */
}
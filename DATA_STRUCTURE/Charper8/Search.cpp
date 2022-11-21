#include "Search.h"

/* ˳����ң�aΪ���飬nΪҪ���ҵ����鳤�ȣ�keyΪҪ���ҵĹؼ��� */
int Sequential_Search(int *a, int n, int key)
{
    for (size_t i = 1; i < n; i++)
    {
        if ( a[i] = key )
        {
            return i;
        }
    }
    return 0;
    
}
/* ���ڱ�˳����� */
int Sequential_Search2(int *a, int n, int key)
{
    int i = n;  /* ѭ��������β����ʼ */
    a[0] = key; /* ����a[0]Ϊ�ؼ���ֵ�����ǳ�֮Ϊ"�ڱ�" */ 
    while (a[i]!=key)
    {
        i--;
    }
    return i;   /* ����0��˵������ʧ�� */
    
}
/* ���ֲ��� */
int Binary_Search(int *a, int n, int key)
{
    int low, high, mid; 
    low = 1;    /* ��������±�Ϊ��¼��λ*/
    high = n;   /* ��������±�Ϊ��¼ĩλ*/
    while (low <= high)
    {
        mid = (low + high)/2;   /* �۰� */
        mid = low + (high - low) * (key - a[low])/(a[high] - a[low]); 
        if( a[mid] = key )  /* ������ֵ������ֵ�����ҵ�λ��*/
        {
            return mid;
        }
        else if (a[mid] > key)  /* ������ֵ����ֵС */
        {
            high = mid - 1; /* ����±��������λ�±�Сһλ*/
        }
        else    /* ������ֵ����ֵ�� */
        {
            low = mid + 1;  /* ����±��������λ�±��һλ*/
        }
    }
    return 0;
    
}
/* 쳲��������� */
int Fibonacci_Search(int *a, int n, int key)
{
    int low, high, mid, k;
    low = 1;    /* ��������±�Ϊ��¼��λ */
    high = n;   /* ��������±�Ϊ��¼ĩλ */
    k = 0;  
    /* ����쳲��������� */
    int F[10] = {0,1,1,2,3,5,8,13,21,34};

    while (n > F[k] - 1)    /* ����nλ��쳲��������е�λ�� */
    {
        k++;
    }
    for (size_t i = n; i < F[k] - 1; i++)   /* ����������ֵ��ȫ */
    {
        a[i] = a[n];
    }
    while (low <= high)
    {
        mid = low + F[k-1] - 1; /* ���㵱ǰ�ָ����±� */
        if (key < a[mid])   /* ���Ҽ�¼С�ڵ�ǰ�ָ���¼ */
        {
            high = mid - 1; /* ����±�������ָ��±�mid-1�� */
            k = k - 1;  /* 쳲����������±��һλ*/
        }
        else if (key > a[mid])   /* ���Ҽ�¼���ڵ�ǰ�ָ���¼ */
        {
            low = mid + 1; /* ����±�������ָ��±�mid+1�� */
            k = k - 2;  /* 쳲����������±����λ*/
        }
        else
        {
            if(mid <= n)
            {
                return mid; /* �������˵��mid��Ϊ���ҵ���λ��*/
            }
            else
            {
                return n;   /* ��mid > n˵���ǲ�ȫ��ֵ������n */
            }
        }
        
    }
    
}

/* ���������� */
/* �ݹ���Ҷ���������T���Ƿ����key
ָ��fָ��T��˫��,���ʼ����ֵΪNULL
�����ҳɹ�,��ָ��pָ�������Ԫ�ؽ��,������TRUE
����ָ��pָ�����·���Ϸ��ʵ����һ����㲢����FALSE*/
int SearchBST(BiTTree T, int key, BiTTree f, BiTTree *p)
{
    if(!T)  /* ���Ҳ��ɹ� */
    {
        *p = f;
        return false;
    }
    else if (key == T->data)    /* ���ҳɹ� */
    {
        *p = T;
        return true;
    }
    else if (key < T->data)
    {
        return SearchBST(T->lchild, key, T, p); /* �������������� */
    }
    else if (key > T->data)
    {
        return SearchBST(T->rchild, key, T, p); /* �������������� */
    }
}
/* ������������T�в����ڹؼ��ֵ���key������Ԫ��ʱ��
����key������TRUE,���򷵻�FALSE */
int InsertBST(BiTTree *T, int key)
{
    BiTTree p,s;
    if (!SearchBST(*T, key, NULL, &p))  /* ���Ҳ��ɹ� */
    {
        s = new BiTNode();
        s->data = key;
        s->lchild = NULL;
        s->rchild = NULL;
        if (!p)
        {
            *T = s; /* ����sΪ�µĸ���� */
        }
        else if (key < p->data)
        {
            p->lchild = s;  /* ����sΪ���� */
        }
        else 
        {
            p->rchild = s;  /* ����sΪ�Һ��� */
        }
        return true;
    }
    else
    {
        return false;
    }
}
/* �����������Ĺ��� */
void CreatBST()
{
    int a[10] = {62, 88, 58, 47, 35, 73, 51, 99, 37, 93};
    BiTTree T = NULL;
    for (size_t i = 0; i < 10; i++)
    {
        InsertBST(&T, a[i]);
    }
}
/* ������������T�д��ڹؼ��ֵ���key������Ԫ��ʱ����ɾ����Ԫ�ؽ�㣬
������TRUE;���򷵻�FALSE*/
int DeleteBST(BiTTree *T, int key)
{
    if (!*T)    /* �����ڹؼ��ֵ���key������Ԫ�� */
    {
        return false;
    }
    else
    {
        if (key == (*T)->data)  /* �ҵ��ؼ��ֵ���key������Ԫ�� */
        {
            return Delete(T);
        }
        else if (key < (*T)->data)
        {
            return DeleteBST((*T)->lchild, key);
        }
        else
        {
            return DeleteBST((*T)->rchild, key);
        }
    }
}
/* �Ӷ�����������ɾ�����p, ���ؽ��������������*/
int Delete(BiTTree *p)
{
    BiTTree q,s;
    if ( (*p)->rchild == NULL ) /* ������Ϊ����ֻ���ؽ����������� */
    {
        q = *p;
        *p = (*p)->lchild;
        delete(q);
    }
    else if ( (*p)->lchild == NULL ) /* ������Ϊ����ֻ���ؽ����������� */
    {
        q = *p;
        *p = (*p)->rchild;
        delete(q);
    }
    else
    {
        q = *p;
        s = (*p)->lchild;
        while (s->rchild)   /* ת��Ȼ�����ҵ���ͷ(�Ҵ�ɾ������ǰ��) */
        {
            q = s;
            s = s->rchild;
        }
        (*p)->data = s->data;   /* sָ��ɾ������ֱ��ǰ�� */
        if(q!=*p)
        {
            q->rchild = s->lchild;  /* �ؽ�q�������� */
        }
        else
        {
            q->lchild = s->lchild;  /* �ؽ�q�������� */
        }
        delete(s);
    }
    return true; 
}
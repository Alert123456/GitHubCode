#include "Search.h"

/* 顺序查找，a为数组，n为要查找的数组长度，key为要查找的关键字 */
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
/* 有哨兵顺序查找 */
int Sequential_Search2(int *a, int n, int key)
{
    int i = n;  /* 循环从数组尾部开始 */
    a[0] = key; /* 设置a[0]为关键字值，我们称之为"哨兵" */ 
    while (a[i]!=key)
    {
        i--;
    }
    return i;   /* 返回0则说明查找失败 */
    
}
/* 二分查找 */
int Binary_Search(int *a, int n, int key)
{
    int low, high, mid; 
    low = 1;    /* 定义最低下标为记录首位*/
    high = n;   /* 定义最高下标为记录末位*/
    while (low <= high)
    {
        mid = (low + high)/2;   /* 折半 */
        mid = low + (high - low) * (key - a[low])/(a[high] - a[low]); 
        if( a[mid] = key )  /* 若查找值等于中值，查找到位置*/
        {
            return mid;
        }
        else if (a[mid] > key)  /* 若查找值比中值小 */
        {
            high = mid - 1; /* 最高下标调整到中位下标小一位*/
        }
        else    /* 若查找值比中值大 */
        {
            low = mid + 1;  /* 最低下标调整到中位下标大一位*/
        }
    }
    return 0;
    
}
/* 斐波那契查找 */
int Fibonacci_Search(int *a, int n, int key)
{
    int low, high, mid, k;
    low = 1;    /* 定义最低下标为记录首位 */
    high = n;   /* 定义最高下标为记录末位 */
    k = 0;  
    /* 生成斐波那契数列 */
    int F[10] = {0,1,1,2,3,5,8,13,21,34};

    while (n > F[k] - 1)    /* 计算n位于斐波那契数列的位置 */
    {
        k++;
    }
    for (size_t i = n; i < F[k] - 1; i++)   /* 将不满的数值补全 */
    {
        a[i] = a[n];
    }
    while (low <= high)
    {
        mid = low + F[k-1] - 1; /* 计算当前分隔的下标 */
        if (key < a[mid])   /* 查找记录小于当前分隔记录 */
        {
            high = mid - 1; /* 最高下标调整到分割下标mid-1处 */
            k = k - 1;  /* 斐波那契数列下标减一位*/
        }
        else if (key > a[mid])   /* 查找记录大于当前分隔记录 */
        {
            low = mid + 1; /* 最低下标调整到分割下标mid+1处 */
            k = k - 2;  /* 斐波那契数列下标减两位*/
        }
        else
        {
            if(mid <= n)
            {
                return mid; /* 若相等则说明mid即为查找到的位置*/
            }
            else
            {
                return n;   /* 若mid > n说明是补全数值，返回n */
            }
        }
        
    }
    
}

/* 二叉排序树 */
/* 递归查找二叉排序树T中是否存在key
指针f指向T的双亲,其初始调用值为NULL
若查找成功,则指针p指向该数据元素结点,并返回TRUE
否则指针p指向查找路径上访问的最后一个结点并返回FALSE*/
int SearchBST(BiTTree T, int key, BiTTree f, BiTTree *p)
{
    if(!T)  /* 查找不成功 */
    {
        *p = f;
        return false;
    }
    else if (key == T->data)    /* 查找成功 */
    {
        *p = T;
        return true;
    }
    else if (key < T->data)
    {
        return SearchBST(T->lchild, key, T, p); /* 左子树继续查找 */
    }
    else if (key > T->data)
    {
        return SearchBST(T->rchild, key, T, p); /* 右子树继续查找 */
    }
}
/* 当二叉排列树T中不存在关键字等于key的数据元素时，
插入key并返回TRUE,否则返回FALSE */
int InsertBST(BiTTree *T, int key)
{
    BiTTree p,s;
    if (!SearchBST(*T, key, NULL, &p))  /* 查找不成功 */
    {
        s = new BiTNode();
        s->data = key;
        s->lchild = NULL;
        s->rchild = NULL;
        if (!p)
        {
            *T = s; /* 插入s为新的根结点 */
        }
        else if (key < p->data)
        {
            p->lchild = s;  /* 插入s为左孩子 */
        }
        else 
        {
            p->rchild = s;  /* 插入s为右孩子 */
        }
        return true;
    }
    else
    {
        return false;
    }
}
/* 二叉排列树的构建 */
void CreatBST()
{
    int a[10] = {62, 88, 58, 47, 35, 73, 51, 99, 37, 93};
    BiTTree T = NULL;
    for (size_t i = 0; i < 10; i++)
    {
        InsertBST(&T, a[i]);
    }
}
/* 若二叉排序树T中存在关键字等于key的数据元素时，则删除该元素结点，
并返回TRUE;否则返回FALSE*/
int DeleteBST(BiTTree *T, int key)
{
    if (!*T)    /* 不存在关键字等于key的数据元素 */
    {
        return false;
    }
    else
    {
        if (key == (*T)->data)  /* 找到关键字等于key的数据元素 */
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
/* 从二叉排列树中删除结点p, 并重接它的左或右子树*/
int Delete(BiTTree *p)
{
    BiTTree q,s;
    if ( (*p)->rchild == NULL ) /* 右子树为空则只需重接它的左子树 */
    {
        q = *p;
        *p = (*p)->lchild;
        delete(q);
    }
    else if ( (*p)->lchild == NULL ) /* 左子树为空则只需重接它的右子树 */
    {
        q = *p;
        *p = (*p)->rchild;
        delete(q);
    }
    else
    {
        q = *p;
        s = (*p)->lchild;
        while (s->rchild)   /* 转左，然后向右到尽头(找待删除结点的前驱) */
        {
            q = s;
            s = s->rchild;
        }
        (*p)->data = s->data;   /* s指向被删除结点的直接前驱 */
        if(q!=*p)
        {
            q->rchild = s->lchild;  /* 重接q的右子树 */
        }
        else
        {
            q->lchild = s->lchild;  /* 重接q的左子树 */
        }
        delete(s);
    }
    return true; 
}
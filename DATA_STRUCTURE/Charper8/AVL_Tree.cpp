#include "AVL_Tree.h"


/* 对以p为根的二叉排序树作右旋处理 */
/* 处理之后p指向新的树根结点，即旋转处理之前的左子树的根结点 */
void R_Rotate(BiTree *p)
{
    BiTree L;
    L = (*p)->lchild;   /* L指向p的左子树根结点 */
    (*p)->lchild = L->rchild;   /* L的右子树挂接为p的左子树 */
    L->rchild = (*p);   
    *p = L; /* p指向新的根结点 */

}
/* 对以p为根的二叉排序树作左旋处理 */
/* 处理之后p指向新的树根结点，即旋转处理之前的右子树的根结点 */
void L_Rotate(BiTree *p)
{
    BiTree R;
    R = (*p)->rchild;   /* R指向p的右子树根结点 */
    (*p)->rchild = R->lchild;   /* L的右子树挂接为p的右子树 */
    R->lchild = (*p);   
    *p = L; /* p指向新的根结点 */

}
/* 对以指针T所指结点为根的二叉树作左平衡旋转处理 */
/* 本算法结束时，指针T指向新的根结点 */
void LeftBalance (BiTree *T)
{
    BiTree L, Lr;
    L = (*T)->lchild;   /* L指向T的左子树根结点 */
    switch (L->bf)
    {
        /* 检查T的左子树的平衡度，并作相应平衡处理 */
    case LH:    /* 新结点插入在T的左子树的左子树上，要做单右旋处理*/
        L->bf = EH;
        (*T)->bf = L->bf;   /* 刷新bf值 */
        R_Rotate(T);    /* 右旋操作 */
        break;
    
    case RH:    /* 新结点插入在T的左子树的右子树上，要做双旋处理*/
        Lr = L->rchild; /* Lr指向T的左子树的右子树根*/
        switch (Lr->bf) /* 修改T及其左子树的平衡因子*/
        {
        case LH:
            (*T)->bf = RH;
            L->bf = EH;
            break;
        case EH:
            (*T)->bf = EH;
            L->bf = EH;
            break;
        case RH:
            (*T)->bf = EH;
            L->bf = LH;
            break;
        }
        Lr->bf = EH;
        L_Rotate(& (*T)->lchild);   /* 对T的左子树作左旋平衡处理 */
        R_Rotate(T);    /* 对T作右旋平衡处理 */
    }
}
/* 对以指针T所指结点为根的二叉树作左平衡旋转处理 */
/* 本算法结束时，指针T指向新的根结点 */
void RightBalance (BiTree *T)
{
    BiTree L, Lr;
    L = (*T)->rchild;   /* L指向T的右子树根结点 */
    switch (L->bf)
    {
        /* 检查T的左子树的平衡度，并作相应平衡处理 */
    case LH:    /* 新结点插入在T的左子树的左子树上，要做单右旋处理*/
        L->bf = EH;
        (*T)->bf = L->bf;   /* 刷新bf值 */
        L_Rotate(T);    /* 左旋操作 */
        break;
    
    case RH:    /* 新结点插入在T的左子树的右子树上，要做双旋处理*/
        Lr = L->lchild; /* Lr指向T的右子树的右子树根*/
        switch (Lr->bf) /* 修改T及其右子树的平衡因子*/
        {
        case LH:
            (*T)->bf = RH;
            L->bf = EH;
            break;
        case EH:
            (*T)->bf = EH;
            L->bf = EH;
            break;
        case RH:
            (*T)->bf = EH;
            L->bf = LH;
            break;
        }
        Lr->bf = EH;
        R_Rotate(& (*T)->rchild);   /* 对T的右子树作右旋平衡处理 */
        L_Rotate(T);    /* 对T作左旋平衡处理 */
    }
}
/* 若在平衡的二叉排序树T中不存在和e有相同关键字的结点，则插入一个 */
/* 数据元素为e的新结点并返回1，否则返回0.若因插入而使二叉排序树 */
/* 失去平衡，则作平衡旋转处理，布尔变量taller反映T长高与否。 */
int InsertAVL(BiTree *T, int e, int *taller)
{
    if(!*T)
    {
        /* 插入新结点，树“长高”，置taller为True */
        *T = new BiTNode();
        (*T)->data = e;
        (*T)->lchild = NULL;
        (*T)->rchild = NULL;
        (*T)->bf = EH;
        *taller = true;
    }
    else
    {
        if ( e == (*T)->data )
        {
            /* 树中已存在和e有相同关键字的结点则不再插入 */
            *taller = false;
            return false;
        }
        if ( e < (*T)->data )
        {
            /* 应继续在T的左子树中进行搜索 */
            if(!InsertAVL(&(*T)->lchild, e, taller))    /* 未插入 */
            {
                return false;
            }
            if(*taller) /* 已插入到T的左子树中且左子树“长高” */
            {
                switch ((*T)->bf)/* 检查T的平衡度 */
                {
                case LH:    /* 原本左子树比右子树高，需要做左平衡处理 */
                    LeftBalance(T);
                    *taller = false;
                    break;
                case EH:    /* 原本左右子树等高，现因左子树增高而树增高 */
                    (*T)->bf = LH;
                    *taller = true;
                    break;
                case RH:    /* 原本右子树比左子树高，现左右子树等高 */
                    (*T)->bf = EH;
                    *taller = false;
                    break;
                }
            }
        }
        else    /* 应继续在T的右子树中进行搜索 */
        {
            if (!InsertAVL(&(*T)->rchild, e, taller) ) /* 未插入 */
            {
                return false;
            }
            if (*taller) /* 已插入到T的右子树且右子树“长高” */
            {
                switch ((*T)->bf)/* 检查T的平衡度 */
                {
                case LH:    /* 原本左子树比右子树高，现左右子树等高 */
                    (*T)->bf = EH;
                    *taller = false;
                    break;
                case EH:    /* 原本左右子树等高，现因右子树增高而树增高 */
                    (*T)->bf = RH;
                    *taller = true;
                    break;
                case RH:    /* 原本右子树比左子树高，需要作右平衡处理 */
                    RightBalance(T);
                    *taller = false;
                    break;
                }
            }
        }
    }
    return true;
}

int main()
{
    int a[10] = {3, 2, 1, 4, 5, 6, 7, 10, 9, 8};
    BiTree T = NULL;
    int taller;
    for (size_t i = 0; i < 10; i++)
    {
        InsertAVL(&T, a[i], &taller);
    }
    
    return 0;
}
#include "AVL_Tree.h"


/* ����pΪ���Ķ������������������� */
/* ����֮��pָ���µ�������㣬����ת����֮ǰ���������ĸ���� */
void R_Rotate(BiTree *p)
{
    BiTree L;
    L = (*p)->lchild;   /* Lָ��p������������� */
    (*p)->lchild = L->rchild;   /* L���������ҽ�Ϊp�������� */
    L->rchild = (*p);   
    *p = L; /* pָ���µĸ���� */

}
/* ����pΪ���Ķ������������������� */
/* ����֮��pָ���µ�������㣬����ת����֮ǰ���������ĸ���� */
void L_Rotate(BiTree *p)
{
    BiTree R;
    R = (*p)->rchild;   /* Rָ��p������������� */
    (*p)->rchild = R->lchild;   /* L���������ҽ�Ϊp�������� */
    R->lchild = (*p);   
    *p = L; /* pָ���µĸ���� */

}
/* ����ָ��T��ָ���Ϊ���Ķ���������ƽ����ת���� */
/* ���㷨����ʱ��ָ��Tָ���µĸ���� */
void LeftBalance (BiTree *T)
{
    BiTree L, Lr;
    L = (*T)->lchild;   /* Lָ��T������������� */
    switch (L->bf)
    {
        /* ���T����������ƽ��ȣ�������Ӧƽ�⴦�� */
    case LH:    /* �½�������T�����������������ϣ�Ҫ������������*/
        L->bf = EH;
        (*T)->bf = L->bf;   /* ˢ��bfֵ */
        R_Rotate(T);    /* �������� */
        break;
    
    case RH:    /* �½�������T�����������������ϣ�Ҫ��˫������*/
        Lr = L->rchild; /* Lrָ��T������������������*/
        switch (Lr->bf) /* �޸�T������������ƽ������*/
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
        L_Rotate(& (*T)->lchild);   /* ��T��������������ƽ�⴦�� */
        R_Rotate(T);    /* ��T������ƽ�⴦�� */
    }
}
/* ����ָ��T��ָ���Ϊ���Ķ���������ƽ����ת���� */
/* ���㷨����ʱ��ָ��Tָ���µĸ���� */
void RightBalance (BiTree *T)
{
    BiTree L, Lr;
    L = (*T)->rchild;   /* Lָ��T������������� */
    switch (L->bf)
    {
        /* ���T����������ƽ��ȣ�������Ӧƽ�⴦�� */
    case LH:    /* �½�������T�����������������ϣ�Ҫ������������*/
        L->bf = EH;
        (*T)->bf = L->bf;   /* ˢ��bfֵ */
        L_Rotate(T);    /* �������� */
        break;
    
    case RH:    /* �½�������T�����������������ϣ�Ҫ��˫������*/
        Lr = L->lchild; /* Lrָ��T������������������*/
        switch (Lr->bf) /* �޸�T������������ƽ������*/
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
        R_Rotate(& (*T)->rchild);   /* ��T��������������ƽ�⴦�� */
        L_Rotate(T);    /* ��T������ƽ�⴦�� */
    }
}
/* ����ƽ��Ķ���������T�в����ں�e����ͬ�ؼ��ֵĽ�㣬�����һ�� */
/* ����Ԫ��Ϊe���½�㲢����1�����򷵻�0.��������ʹ���������� */
/* ʧȥƽ�⣬����ƽ����ת������������taller��ӳT������� */
int InsertAVL(BiTree *T, int e, int *taller)
{
    if(!*T)
    {
        /* �����½�㣬�������ߡ�����tallerΪTrue */
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
            /* �����Ѵ��ں�e����ͬ�ؼ��ֵĽ�����ٲ��� */
            *taller = false;
            return false;
        }
        if ( e < (*T)->data )
        {
            /* Ӧ������T���������н������� */
            if(!InsertAVL(&(*T)->lchild, e, taller))    /* δ���� */
            {
                return false;
            }
            if(*taller) /* �Ѳ��뵽T�����������������������ߡ� */
            {
                switch ((*T)->bf)/* ���T��ƽ��� */
                {
                case LH:    /* ԭ�����������������ߣ���Ҫ����ƽ�⴦�� */
                    LeftBalance(T);
                    *taller = false;
                    break;
                case EH:    /* ԭ�����������ȸߣ��������������߶������� */
                    (*T)->bf = LH;
                    *taller = true;
                    break;
                case RH:    /* ԭ�����������������ߣ������������ȸ� */
                    (*T)->bf = EH;
                    *taller = false;
                    break;
                }
            }
        }
        else    /* Ӧ������T���������н������� */
        {
            if (!InsertAVL(&(*T)->rchild, e, taller) ) /* δ���� */
            {
                return false;
            }
            if (*taller) /* �Ѳ��뵽T���������������������ߡ� */
            {
                switch ((*T)->bf)/* ���T��ƽ��� */
                {
                case LH:    /* ԭ�����������������ߣ������������ȸ� */
                    (*T)->bf = EH;
                    *taller = false;
                    break;
                case EH:    /* ԭ�����������ȸߣ��������������߶������� */
                    (*T)->bf = RH;
                    *taller = true;
                    break;
                case RH:    /* ԭ�����������������ߣ���Ҫ����ƽ�⴦�� */
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
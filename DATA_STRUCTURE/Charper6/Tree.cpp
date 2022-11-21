#include "Tree.h"

using namespace std;

int main()
{
    BiTTree root;
    CreatdeTree (&root);
    PreOrderTravere(root);
    cout << endl;
    InOrderTravere(root);
    cout << endl;
    return 0;
}

//前序遍历算法
void PreOrderTravere (BiTTree T)
{
    if (T == NULL)  // 结点为空，返回操作
    {
        return;
    }
    cout << "结点数据为:" << T->data << " ";   //显示结点数据，也可更改为其他对结点操作
    PreOrderTravere(T->lchild); //再先序遍历左子树
    PreOrderTravere(T->rchild); //最后先序遍历右子树
}

//中序遍历算法
void InOrderTravere (BiTTree T)
{
    if (T == NULL)  // 结点为空，返回操作
    {
        return;
    }
    
    InOrderTravere(T->lchild); //再先序遍历左子树
    cout << "结点数据为:" << T->data << " ";   //显示结点数据，也可更改为其他对结点操作
    InOrderTravere(T->rchild); //最后先序遍历右子树
}

//后序遍历算法
void PostOrderTravere (BiTTree T)
{
    if (T == NULL)  // 结点为空，返回操作
    {
        return;
    }
    
    PostOrderTravere(T->lchild); //再先序遍历左子树
    PostOrderTravere(T->rchild); //最后先序遍历右子树
    cout << "结点数据为:" << T->data << " ";   //显示结点数据，也可更改为其他对结点操作
}

//建立二叉树
void CreatdeTree (BiTTree *T)
{
    char Node;
    cin >> Node;

    if (Node == '#')  // 结点为空，返回操作
    {
        (*T) = nullptr;
    }
    else
    {
        (*T) = new BiTNode(); 
        (*T)->data = Node;
        CreatdeTree(&((*T)->lchild)); //再先序遍历左子树
        CreatdeTree(&((*T)->rchild)); //最后先序遍历右子树
    }
}

/********** 中序遍历进行中序线索化 **********/
void InTreading(BiThrTree p)
{
    if(p)
    {
        InTreading(p->lchild);      //递归左子树
        if(!p->lchild)
        {
            p->Ltag = Thread;       //前驱线索
            p->lchild = pre;        //左孩子指向前驱
        }
        if(!pre->rchild)
        {
            pre->Rtag = Thread;     //后继线索
            pre->rchild = p;        //前驱右孩子指针指向后继(当前结点p)
        }
        pre = p;                    //保持pre指向p的前驱
        InTreading(p->rchild);      //递归右子树
    }
}

/********** 线索二叉树遍历操作 **********/
// T指向头结点，头结点左脸lchild指向根节点，头结点右链rchild指向中序遍历的
//最后一个结点，中序遍历二叉线索表表示的二叉树T
TElemType InOrderTravere_Thr(BiThrTree T)
{
    BiThrTree p;
    p = T->lchild;  //p指向根节点
    while (p != T)
    {
        while (p->Ltag == Link)   //当Ltag == 0循环到中序序列第一个结点
            p = p->lchild;
        cout << p->data;    //显示结点数据
        while (p->Rtag == Thread && p->rchild != T)
        {
            p = p->rchild;
            cout << p->data;
        }
        p = p->rchild;  //进入右子树
    }
    return OK;
}
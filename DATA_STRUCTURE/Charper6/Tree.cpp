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

//ǰ������㷨
void PreOrderTravere (BiTTree T)
{
    if (T == NULL)  // ���Ϊ�գ����ز���
    {
        return;
    }
    cout << "�������Ϊ:" << T->data << " ";   //��ʾ������ݣ�Ҳ�ɸ���Ϊ�����Խ�����
    PreOrderTravere(T->lchild); //���������������
    PreOrderTravere(T->rchild); //����������������
}

//��������㷨
void InOrderTravere (BiTTree T)
{
    if (T == NULL)  // ���Ϊ�գ����ز���
    {
        return;
    }
    
    InOrderTravere(T->lchild); //���������������
    cout << "�������Ϊ:" << T->data << " ";   //��ʾ������ݣ�Ҳ�ɸ���Ϊ�����Խ�����
    InOrderTravere(T->rchild); //����������������
}

//��������㷨
void PostOrderTravere (BiTTree T)
{
    if (T == NULL)  // ���Ϊ�գ����ز���
    {
        return;
    }
    
    PostOrderTravere(T->lchild); //���������������
    PostOrderTravere(T->rchild); //����������������
    cout << "�������Ϊ:" << T->data << " ";   //��ʾ������ݣ�Ҳ�ɸ���Ϊ�����Խ�����
}

//����������
void CreatdeTree (BiTTree *T)
{
    char Node;
    cin >> Node;

    if (Node == '#')  // ���Ϊ�գ����ز���
    {
        (*T) = nullptr;
    }
    else
    {
        (*T) = new BiTNode(); 
        (*T)->data = Node;
        CreatdeTree(&((*T)->lchild)); //���������������
        CreatdeTree(&((*T)->rchild)); //����������������
    }
}

/********** ��������������������� **********/
void InTreading(BiThrTree p)
{
    if(p)
    {
        InTreading(p->lchild);      //�ݹ�������
        if(!p->lchild)
        {
            p->Ltag = Thread;       //ǰ������
            p->lchild = pre;        //����ָ��ǰ��
        }
        if(!pre->rchild)
        {
            pre->Rtag = Thread;     //�������
            pre->rchild = p;        //ǰ���Һ���ָ��ָ����(��ǰ���p)
        }
        pre = p;                    //����preָ��p��ǰ��
        InTreading(p->rchild);      //�ݹ�������
    }
}

/********** ������������������ **********/
// Tָ��ͷ��㣬ͷ�������lchildָ����ڵ㣬ͷ�������rchildָ�����������
//���һ����㣬������������������ʾ�Ķ�����T
TElemType InOrderTravere_Thr(BiThrTree T)
{
    BiThrTree p;
    p = T->lchild;  //pָ����ڵ�
    while (p != T)
    {
        while (p->Ltag == Link)   //��Ltag == 0ѭ�����������е�һ�����
            p = p->lchild;
        cout << p->data;    //��ʾ�������
        while (p->Rtag == Thread && p->rchild != T)
        {
            p = p->rchild;
            cout << p->data;
        }
        p = p->rchild;  //����������
    }
    return OK;
}
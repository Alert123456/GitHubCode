//ͷ�ļ�
#include <iostream>
#include <vector>
#include <string>
#include <list>
#include <ctime>

using namespace std;

#define MAX_TREE_SIZE 100
#define ERROR 0
#define OK 1
#define FALSE 0

typedef int TElemType;  /* �������������ͣ�Ŀǰ�ݶ�Ϊ���� */

/* ����˫�ױ�ʾ���ṹ���� */
struct PTNode   /* ���ṹ */
{
    TElemType data; /* ������� */
    int parent;     /* ˫��λ�� */
};
struct PTree    /* ���ṹ */
{
    PTNode nodes[MAX_TREE_SIZE];    /* ������� */
    int r,n;        /* ����λ�úͽ���� */
};

/* ���ĺ��ӱ�ʾ���ṹ���� */
struct CTNode   /* ���ӽ�� */
{
    int child;
    struct CTNode *next;
};
typedef CTNode *ChildPtr;
struct CTBox
{
    TElemType data;
    ChildPtr firstchild;
};
struct CTree
{
    CTBox nodes[MAX_TREE_SIZE]; /* ������� */
    int r,n;    /* ����λ�úͽ���� */
};
/* ���ĺ����ֵܱ�ʾ���ṹ���� */
struct CSNode
{
    TElemType data;
    struct CSNode *firstchild, *rightsib;
};
typedef CSNode *CSTree;

/* �������Ķ���������ṹ���� */
struct BiTNode
{
    char data;
    struct BiTNode *lchild, *rchild;
};
typedef BiTNode *BiTTree;

//����������
void CreatdeTree (BiTTree *T);

/********** �����������㷨 **********/
//ǰ������㷨
void PreOrderTravere (BiTTree T);
//��������㷨
void InOrderTravere (BiTTree T);
//��������㷨
void PostOrderTravere (BiTTree T);

/********** �������Ķ��������洢�ṹ���� **********/
enum PointerTag{Link,Thread};    //Link==0 ��ʾָ��ǰ�����̵�������Thread==1 ��ʾָ��ǰ�����̵�����

/********** ���������洢���ṹ **********/
struct BiThrNode
{
    TElemType data; //�������
    struct BiThrNode *lchild, *rchild; //���Һ���ָ��
    PointerTag Ltag, Rtag;  //���ұ�־
};
typedef BiThrNode *BiThrTree;

BiThrTree pre; //ȫ�ֱ�����ʼ��ָ��ոշ��ʹ��Ľ��
/********** ��������������������� **********/
void InTreading(BiThrTree p);

/********** ������������������ **********/
TElemType InOrderTravere_Thr(BiThrTree T);




/********** �������Ļ������� **********/
// InitTree(*T);   //�������
// DestroyTree(*T);    //������
// CreateTree(*T, definition); //��definition�и��������Ķ�����������
// ClearTree(*T);  //�������ڣ�����T��Ϊ����
// TreeEmpty(T);   //��TΪ����������true�����򷵻�false
// TreeDepth(T);   //����T�����
// Root(T);    //����T�ĸ��ڵ�
// Value(T, cur_e); //cur_e����T�е�һ����㣬���ش˽���ֵ
// Assign(T, cur_e, value);    //����T�Ľ��cur_e��ֵΪvalue
// Parent(T, cur_e);   //��cur_e����T�ķǸ���㣬�򷵻ط�������˫�ף����򷵻ؿ�
// LeftChild(T, cur_e);    //��cur_e����T�ķ�Ҷ��㣬�򷵻����������ӣ����򷵻ؿ�
// RightSibling(T, cur_e); //��cur_e�����ֵܣ��򷵻��������ֵܣ����򷵻ؿ�
// InsertChild(*T, *p, i, c);  //����pָ����T��ĳ����㣬iΪ��ָ���p�Ķȼ���1���ǿ�
//                             //��c��T���ཻ���������Ϊ����cΪ��T��pָ���ĵ�i��������
// DeleteChild(*T, *p, i);     //����pָ����T��ĳ����㣬iΪ��ָ���p�Ķȣ��������Ϊ
//                             //ɾ��T��p��ָ���ĵ�i��������
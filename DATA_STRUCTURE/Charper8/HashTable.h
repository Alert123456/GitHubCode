//ͷ�ļ�
#include <iostream>
#include <vector>
#include <string>
#include <list>
#include <ctime>
#include "Tree.h"
using namespace std;

#define SUCCESS 1
#define UNSUCCESS 0
#define HASHSIZE 12 /* ����ɢ�б�Ϊ����ĳ��� */
#define NULLKEY -32768
struct HashTable
{
    int *elem;  /* ����Ԫ�ش洢��ַ����̬�������� */
    int count;  /* ��ǰ����Ԫ�ظ��� */
};
int  m = 0; /* ɢ�б����ȫ�ֱ��� */
/* ��ʼ��ɢ�б� */
int InitHashTable ( HashTable *H );
/* ɢ�к��� */
int Hash(int key);
/* ����ؼ��ֽ�ɢ�б� */
void InsertHash ( HashTable *H, int key );
/* ɢ�б���ҹؼ��� */
int SearchHash ( HashTable H, int key, int *addr );
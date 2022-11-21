#include "HashTable.h"
/* ��ʼ��ɢ�б� */
int InitHashTable ( HashTable *H )
{
    m = HASHSIZE;
    H->count = m;
    H->elem = new int();
    for (size_t i = 0; i < m; i++)
    {
        H->elem[i] = NULLKEY;   /*��ʼ��ֵ*/
    }
    return OK;
}
/* ɢ�к��� */
int Hash(int key)
{
    return key % m; /* ���������� */
}
/* ����ؼ��ֽ�ɢ�б� */
void InsertHash ( HashTable *H, int key )
{
    int addr = Hash(key);   /* ��ɢ�е�ַ */
    while(H->elem[addr] != NULLKEY) /* �����Ϊ�գ����ͻ */
    {
        addr = (addr +1) % m;   /* ���Ŷ�ַ��������̽�� */
    }
    H->elem[addr] = key;    /* ֱ���п�λ�����ؼ��� */
}
/* ɢ�б���ҹؼ��� */
int SearchHash ( HashTable H, int key, int *addr )
{
    *addr = Hash (key); /* ��ɢ�е�ַ */
    while (H.elem[*addr] != key)    /* �����Ϊ�գ����ͻ */
    {
        *addr = (*addr + 1) % m;    /* ���Ŷ�ַ��������̽�� */
        if (H.elem[*addr] == NULLKEY || *addr == Hash ( key ) )
        {
            /* ���ѭ���ص�ԭ�� */
            return UNSUCCESS;   /* ��˵���ؼ��ֲ����� */
        }
    }
    return SUCCESS;
}
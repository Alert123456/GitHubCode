#include "HashTable.h"
/* 初始化散列表 */
int InitHashTable ( HashTable *H )
{
    m = HASHSIZE;
    H->count = m;
    H->elem = new int();
    for (size_t i = 0; i < m; i++)
    {
        H->elem[i] = NULLKEY;   /*初始化值*/
    }
    return OK;
}
/* 散列函数 */
int Hash(int key)
{
    return key % m; /* 除留余数法 */
}
/* 插入关键字进散列表 */
void InsertHash ( HashTable *H, int key )
{
    int addr = Hash(key);   /* 求散列地址 */
    while(H->elem[addr] != NULLKEY) /* 如果不为空，则冲突 */
    {
        addr = (addr +1) % m;   /* 开放定址法的线性探测 */
    }
    H->elem[addr] = key;    /* 直到有空位后插入关键字 */
}
/* 散列表查找关键字 */
int SearchHash ( HashTable H, int key, int *addr )
{
    *addr = Hash (key); /* 求散列地址 */
    while (H.elem[*addr] != key)    /* 如果不为空，则冲突 */
    {
        *addr = (*addr + 1) % m;    /* 开放定址法的线性探测 */
        if (H.elem[*addr] == NULLKEY || *addr == Hash ( key ) )
        {
            /* 如果循环回到原点 */
            return UNSUCCESS;   /* 则说明关键字不存在 */
        }
    }
    return SUCCESS;
}
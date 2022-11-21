//头文件
#include <iostream>
#include <vector>
#include <string>
#include <list>
#include <ctime>
#include "Tree.h"
using namespace std;

#define SUCCESS 1
#define UNSUCCESS 0
#define HASHSIZE 12 /* 定义散列表长为数组的长度 */
#define NULLKEY -32768
struct HashTable
{
    int *elem;  /* 数据元素存储基址，动态分配数组 */
    int count;  /* 当前数据元素个数 */
};
int  m = 0; /* 散列表表长，全局变量 */
/* 初始化散列表 */
int InitHashTable ( HashTable *H );
/* 散列函数 */
int Hash(int key);
/* 插入关键字进散列表 */
void InsertHash ( HashTable *H, int key );
/* 散列表查找关键字 */
int SearchHash ( HashTable H, int key, int *addr );
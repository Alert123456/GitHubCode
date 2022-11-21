//头文件
#include <iostream>
#include <vector>
#include <string>
#include <list>
#include <ctime>

using namespace std;

#define MAXSIZE 20
#define ERROR 0
#define OK 1
#define FALSE 0

typedef int SElemType;

// /************************* 字符串的基本操作 *************************/
// /* 生成一个其值等于字符串常量chars的串T */
// StrAssign(T, *chars);   
// /* 串S存在，由串S复制得串T */
// StrCopy(T, S);
// /* 串S存在，将串清空 */
// ClearString(S);
// /* 若串S为空，返回true，否则返回false */
// StringEmpty(S);
/* 返回串S的元素个数，即串的长度 */
int StrLength(string S);
/* 若S>T，返回值>0，若S=T，返回0，若S<T，返回值<0 */
int StrCompare(string S, string T);
// /* 用T返回由S1和S2联接而成的新串 */
// Concat(T, S1, S2);
// /* 串S存在，1 <= pos <= StrLength(S)，
// 且0 <= len <= StrLength(S) - pos + 1，
/* 用Sub返回串S的第pos个字符起长度为len的子串 */
string SubString(string *Sub, string S, int pos, int len);    
/* 若T为S的子串，则返回主串S第pos个字符后第一次出现的位置，否则返回0 */
int Index(string S, string T, int pos);   
/* 若T为S的子串，则返回主串S第pos个字符后第一次出现的位置，否则返回0 */
int Index_KMP(string S, string T, int pos); 
// Replace(S, T, V);   //串S、T和V存在，T为非空串，用V替换主串S中出现的所有与T相等的不重叠子串
// StrInsert(S, pos, T);   //串S、T存在，1 <= pos <= StrLength(S) + 1,在串S的第pos个字符之前插入串T
// StrDelete(S, pos, len); //串S存在，1 <= pos <= StrLength(S)-len+1,从串S中删除第pos个字符起长度为len的子串
/* 通过计算返回子串T的next数组 */
void get_next(string T, int *next);
/* 通过计算返回子串T的nextval数组 */
void get_nextval(string T, int *nextval);
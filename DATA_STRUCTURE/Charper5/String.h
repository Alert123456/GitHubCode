//ͷ�ļ�
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

// /************************* �ַ����Ļ������� *************************/
// /* ����һ����ֵ�����ַ�������chars�Ĵ�T */
// StrAssign(T, *chars);   
// /* ��S���ڣ��ɴ�S���Ƶô�T */
// StrCopy(T, S);
// /* ��S���ڣ�������� */
// ClearString(S);
// /* ����SΪ�գ�����true�����򷵻�false */
// StringEmpty(S);
/* ���ش�S��Ԫ�ظ����������ĳ��� */
int StrLength(string S);
/* ��S>T������ֵ>0����S=T������0����S<T������ֵ<0 */
int StrCompare(string S, string T);
// /* ��T������S1��S2���Ӷ��ɵ��´� */
// Concat(T, S1, S2);
// /* ��S���ڣ�1 <= pos <= StrLength(S)��
// ��0 <= len <= StrLength(S) - pos + 1��
/* ��Sub���ش�S�ĵ�pos���ַ��𳤶�Ϊlen���Ӵ� */
string SubString(string *Sub, string S, int pos, int len);    
/* ��TΪS���Ӵ����򷵻�����S��pos���ַ����һ�γ��ֵ�λ�ã����򷵻�0 */
int Index(string S, string T, int pos);   
/* ��TΪS���Ӵ����򷵻�����S��pos���ַ����һ�γ��ֵ�λ�ã����򷵻�0 */
int Index_KMP(string S, string T, int pos); 
// Replace(S, T, V);   //��S��T��V���ڣ�TΪ�ǿմ�����V�滻����S�г��ֵ�������T��ȵĲ��ص��Ӵ�
// StrInsert(S, pos, T);   //��S��T���ڣ�1 <= pos <= StrLength(S) + 1,�ڴ�S�ĵ�pos���ַ�֮ǰ���봮T
// StrDelete(S, pos, len); //��S���ڣ�1 <= pos <= StrLength(S)-len+1,�Ӵ�S��ɾ����pos���ַ��𳤶�Ϊlen���Ӵ�
/* ͨ�����㷵���Ӵ�T��next���� */
void get_next(string T, int *next);
/* ͨ�����㷵���Ӵ�T��nextval���� */
void get_nextval(string T, int *nextval);
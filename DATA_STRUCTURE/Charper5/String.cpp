#include "String.h"

int main()
{
    string m = "123s56789", n= "",sub = "6789";
    int Index_Num = 0;
    // SubString(&n, m, 2, 4);
    Index_Num = Index(m, sub, 2);
    cout << Index_Num << endl;
    Index_Num = Index_KMP(m, sub, 2);
    cout << Index_Num << endl;
    return OK;
}


// /* ��TΪS���Ӵ����򷵻�����S��pos���ַ����һ�γ��ֵ�λ�ã����򷵻�0 */
// int Index(string S, string T, int pos)
// {
//     int SLength, TLength, m_pos;
//     string Sub;
//     if ( pos > 0 )
//     {
//         SLength = StrLength(S);
//         TLength = StrLength(T);
//         m_pos = pos;
//         while (m_pos <= SLength - TLength + 1)  
//         {
//             SubString(Sub, S, m_pos, TLength); //��ȡm_posλ�ú󳤶�ΪTLength�Ĵ�
//             if ( StrCompare(Sub, T) != 0 )
//                 ++i;
//             else
//                 return i;
//         }
        
//     }
//     return ERROR;
// }

/* ���ش�S��Ԫ�ظ����������ĳ��� */
int StrLength(string S)
{
    int num = 0;
    for(auto &i : S)
        ++num;
    return num;
}
/* ��Sub���ش�S�ĵ�pos���ַ��𳤶�Ϊlen���Ӵ� */
string SubString(string *Sub, string S, int pos, int len)
{
    int num = 0;
    if (pos > 0 && len > 0)
    {
        while ( num < pos + len - 1 )
        {
            if ( num >= pos - 1 )
                Sub->push_back(S[num]);
            ++num;
        }
        return *Sub;
    }
    else
        return ERROR;
}

/* ��TΪS���Ӵ����򷵻�����S��pos���ַ����һ�γ��ֵ�λ�ã����򷵻�0 */
int Index(string S, string T, int pos)
{
    int i = pos;    //i��������S�е�ǰλ���±꣬��pos��Ϊ1�����posλ��ƥ��
    int j = 1;      //j�����Ӵ�T�е�ǰλ���±�ֵ
    while ( i <= StrLength(S) && j <= StrLength(T) )
    {
        if (S[i] == T[j])
        {
            ++i;
            ++j;
        }
        else
        {
            i = i - j + 2;
            j = 1;
        }
    }
    if ( j > StrLength(T) )
        return i - StrLength(T);
    else
        return ERROR;
}

/* ͨ�����㷵���Ӵ�T��next���� */
void get_next(string T, int *next)
{
    int i = 1, j = 0;
    next[1] = 0;
    while ( i < StrLength(T) )
    {
        if ( j == 0 || T[i] == T[j] )
        {
            ++i;
            ++j;
            next[i] = j;  //jΪԭ�ַ�������ǰƥ��
        }
        else
            j = next[j];    //�ַ���ͬ����jֵ����
    }
    
}

/* ��TΪS���Ӵ����򷵻�����S��pos���ַ����һ�γ��ֵ�λ�ã����򷵻�0 */
int Index_KMP(string S, string T, int pos)
{
    int i = pos;    //i��������S�е�ǰλ���±꣬��pos��Ϊ1�����posλ��ƥ��
    int j = 1;      //j�����Ӵ�T�е�ǰλ���±�ֵ

    int next[255];  //����next����
    get_next(T, next);  //  �õ�next����

    while ( i <= StrLength(S) && j <= StrLength(T) )
    {
        if ( j == 0 || S[i] == T[j])
        {
            ++i;
            ++j;
        }
        else
        {
            j = next[j];    //j�˻غ��ʵ�λ�ã�i����
        }
    }
    if ( j > StrLength(T) )
        return i - StrLength(T);
    else
        return ERROR;
}
/* ͨ�����㷵���Ӵ�T��nextval���� */
void get_nextval(string T, int *nextval)
{
    int i = 1, j = 0;
    nextval[1] = 0;
    while ( i < StrLength(T) )
    {
        if ( j == 0 || T[i] == T[j] )
        {
            ++i;
            ++j;
            if ( T[i] != T[j] )
                nextval[i] = j;
            else
                nextval[i] = nextval[j];
        }
        else
            j = nextval[j];    //�ַ���ͬ����jֵ����
    }
}
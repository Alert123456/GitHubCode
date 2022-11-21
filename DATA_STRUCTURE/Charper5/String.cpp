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


// /* 若T为S的子串，则返回主串S第pos个字符后第一次出现的位置，否则返回0 */
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
//             SubString(Sub, S, m_pos, TLength); //截取m_pos位置后长度为TLength的串
//             if ( StrCompare(Sub, T) != 0 )
//                 ++i;
//             else
//                 return i;
//         }
        
//     }
//     return ERROR;
// }

/* 返回串S的元素个数，即串的长度 */
int StrLength(string S)
{
    int num = 0;
    for(auto &i : S)
        ++num;
    return num;
}
/* 用Sub返回串S的第pos个字符起长度为len的子串 */
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

/* 若T为S的子串，则返回主串S第pos个字符后第一次出现的位置，否则返回0 */
int Index(string S, string T, int pos)
{
    int i = pos;    //i用于主串S中当前位置下标，若pos不为1，则从pos位置匹配
    int j = 1;      //j用于子串T中当前位置下标值
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

/* 通过计算返回子串T的next数组 */
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
            next[i] = j;  //j为原字符串，做前匹配
        }
        else
            j = next[j];    //字符不同，则j值回溯
    }
    
}

/* 若T为S的子串，则返回主串S第pos个字符后第一次出现的位置，否则返回0 */
int Index_KMP(string S, string T, int pos)
{
    int i = pos;    //i用于主串S中当前位置下标，若pos不为1，则从pos位置匹配
    int j = 1;      //j用于子串T中当前位置下标值

    int next[255];  //定义next数组
    get_next(T, next);  //  得到next数组

    while ( i <= StrLength(S) && j <= StrLength(T) )
    {
        if ( j == 0 || S[i] == T[j])
        {
            ++i;
            ++j;
        }
        else
        {
            j = next[j];    //j退回合适的位置，i不变
        }
    }
    if ( j > StrLength(T) )
        return i - StrLength(T);
    else
        return ERROR;
}
/* 通过计算返回子串T的nextval数组 */
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
            j = nextval[j];    //字符不同，则j值回溯
    }
}
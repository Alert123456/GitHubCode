//ͷ�ļ�
#include <iostream>
#include <vector>
#include <string>

using namespace std;
// // ��� 1-100
// int main()
// {
//     int sum = 0, n = 100;           /* ִ��1�� */
//     for(int i = 1; i <= n; i++)     /* ִ��n+1�� */
//     {
//         sum += i;                   /* ִ��n�� */
//     }
//     cout << sum;                    /* ִ��1�� */
//     return 0;
// }
// ��� 1-10000 �������㷨
int main()
{
    int sum = 0, n = 100, x = 0;            /* ִ��1�� */
    for(int i = 1; i <= n; i++)             /* ִ��n+1�� */
    {
        for (size_t j = 0; j < n; j++)  
        {
            x++;
            sum = sum + x;                  /* ִ��n*n�� */
        } 
    }
    cout << sum;                            /* ִ��1�� */
    return 0;
}
// ��� 1-100 �ø�˹���㷨
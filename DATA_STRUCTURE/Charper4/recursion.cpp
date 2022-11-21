#include "recursion.h"

// /* 不使用递归的方式进行计算 */
// int main()
// {
//     int a[40];
//     a[0] = 0;
//     a[1] = 1;
//     cout << a[0] << " " << a[1] << " ";
//     for(int i = 2; i < 40; ++i)
//     {
//         a[i] = a[i-1] + a[i-2];
//         cout << a[i] << " ";
//     }
//     cout << endl;
//     return OK;
// }

int main()
{
    for(int i = 0; i < 40; ++i)
        cout << Fbi(i) << " ";
    cout << endl;
    return OK;
}

/* 递归循环 */
int Fbi(int i)
{
    if(i < 2)
        return i == 0 ? 0 : 1;
    return Fbi(i-1) + Fbi(i-2);
}


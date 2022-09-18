//头文件
#include <iostream>
#include <vector>
#include <string>

using namespace std;
// // 求和 1-100
// int main()
// {
//     int sum = 0, n = 100;           /* 执行1次 */
//     for(int i = 1; i <= n; i++)     /* 执行n+1次 */
//     {
//         sum += i;                   /* 执行n次 */
//     }
//     cout << sum;                    /* 执行1次 */
//     return 0;
// }
// 求和 1-10000 用神奇算法
// int main()
// {
//     int sum = 0, n = 100, x = 0;            /* 执行1次 */
//     for(int i = 1; i <= n; i++)             /* 执行n+1次 */
//     {
//         for (size_t j = 0; j < n; j++)  
//         {
//             x++;
//             sum = sum + x;                  /* 执行n*n次 */
//         } 
//     }
//     cout << sum;                            /* 执行1次 */
//     return 0;
// }
// // 求和 1-100 用高斯的算法
// int main()
// {
//     int sum = 0, n = 100;           /* 执行1次 */
//     sum = (1 + n) * n / 2;          /* 执行1次 */
//     cout << sum;                    /* 执行1次 */
//     return 0;
// }
// // 复杂度O[n]
// int main()
// {
//     int i, n = 10, sum = 0;
//     for(i = 0; i < n; i++)
//     {
//         sum += i;
//     }
//     cout << sum << endl;
//     return 0;
// }
// 复杂度O[logn]
int main()
{
    int count = 1, n = 100;
    while (count < n)
    {
        count = count * 2;
    }
    
    return 0;
}
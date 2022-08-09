// 娴嬭瘯灏忕▼搴?1.1
// int main()
// {
//     return -1;
// }
// 涓�涓?浣跨敤IO搴撶殑绋嬪簭
// #include <iostream>
// int main()
// {
//     std::cout << "Enter twp numbers: " << std::endl;
//     int v1 = 0, v2 = 0;
//     std::cin >> v1 >> v2;
//     std::cout << "The sum of " << v1 << " and " << v2
//               << " is " << v1 + v2 << std::endl;
//     return 0;
// }
//缁冧範 1.3
// #include<iostream>

// int main()
// {
//     std::cout << "Hello, World!" << std::endl;
//     return 0; //涓嶈?佸繕浜嗚繖涓�鍙ワ紝int绫诲瀷鍑芥暟蹇呴』瑕佹湁杩斿洖鍊?
// }
// #include<iostream>
//求积函数
// int main()
// {
//     std::cout << "输入两个数字，求这两个数的积" << std::endl;
//     int i = 0, j = 0;
//     std::cin >> i >> j;
//     std::cout << i << "与" << j << "的积为" << i * j <<std::endl;
//     return 0;
// }
// //练习1.7
// #include<iostream>
// int main()
// {
//     std::cout << /*""*/ */;
//     return 0;
// }
// //练习1.8
// #include<iostream>
// int main()
// {
//     std::cout << "/*";
//     std::cout << "*/";
//     std::cout << /*"*/"*/;
//     std::cout << /*"*/" /* "/*" */;
//     return 0;
// }
// /* while语句的使用 */
// #include <iostream>
// int main()
// {
//     int sum = 0, val = 1;
//     //只要val的值小于等于10，while循环就会持续执行
//     while (val <= 10)
//     {
//         sum += val; //将sum + val 赋给 sum
//         ++val;      //将val加1
//     }
//     std::cout << "从一到十的和为" << sum <<std::endl;
//     return 0;
// }
// /*
// 练习1.9
// while循环从50加到100
// */
// #include <iostream>

// int main()
// {
//     int vel = 50, sum = 0;
//     while(vel <= 100)
//     {
//         sum += vel;
//         ++vel;
//     }
//     std::cout << "vel: " << vel << std::endl;
//     std::cout << "从50到100相加之和为" << sum << std::endl; 
//     return 0;
// }
// // 练习1.10
// #include<iostream>
// int main()
// {
//     int val = 10;
//     std::cout << "从10-0之间的整数有:" << std::endl;
//     while (val >= 0)
//     {
//          std::cout << val << std::endl;
//          --val;
//     }
    
// }
// // 练习1.11
// #include<iostream>
// int main()
// {
//     std::cout << "请输入两个数,将打印出这个两个数之间的整数值" 
//               << std::endl;
//     int uplimit = 0, downlimit = 0;
//     std::cin >> uplimit >> downlimit;
//     while(true)
//     {
//         std::cout << uplimit << std::endl;
//         if (uplimit > downlimit)
//         {
//             --uplimit;
//         }
//         else if (uplimit < downlimit)
//         {
//             ++uplimit;
//         }
//         else
//         {
//             break;
//         }
//     }
    
//     return 0;
// }
// // for语句的使用
// #include<iostream>
// int main()
// {
//     int sum = 0;
//     //从1加到10
//     for (int val = 1; val <= 10; ++val)
//         sum += val; //等价于sum = sum + val
//     std::cout << "Sum of 1 to 10 inclusive is"
//               << sum << std::endl;
//     return 0;
// }
// //练习1.12 
// #include<iostream>
// int main()
// {
//     int sum = 0;
//     for (int i = -100; i <= 100; ++i)
//         sum += i;
//     std::cout << sum << std::endl;
// }
// #include <iostream>
// int main()
// {
//     int sum = 0, value = 0;
//     //读取数据直到遇到文件尾，计算所有读入的值的和
//     while (std::cin >> value)
//         sum += value;
//     std::cout << "Sum is: " << sum << std::endl;
//     return 0;
// }
// //练习 1.16
// #include <iostream>
// int main()
// {
//     int sum = 0;
//     for(int value = 0; std::cin >> value;)
//         sum += value;
//     std::cout << sum << std::endl;
// }
//if语句的使用
// #include <iostream>
// int main()
// {
//     // currVal 是我们正在统计的数；我们将读入的新值存入val
//     int currVal = 0, val = 0;
//     // 读取第一个数，并确保确实有数据可以处理
//     if (std::cin >> currVal)
//     {
//         int cnt = 1;    //保存我们正在处理的当前值的个数
//         while (std::cin >> val) //读取剩余的数
//         {
//             if (val == currVal) //如果值相同
//                 ++cnt;
//             else                //否则打印前一个值的个数
//             {
//                 std::cout << currVal << " occurs "
//                           << cnt << " times " << std::endl;
//                 currVal = val;
//                 cnt = 1;
//             }
//         }
//         std::cout << currVal << " occurs " << cnt << " times "
//                   << std::endl; //打印文件最后一个值的个数
//     }
//     return 0;
// }
//练习1.19
// #include<iostream>
// int main()
// {
//     std::cout << "请输入两个数,其中第二个数要比第一个数大" 
//               << std::endl;
//     int start = 0, end = 0;
//     std::cin >> start >> end; 
//     if (start <= end)
//     {
//         while (start <= end)
//         {
//             std::cout << start << " ";
//             ++start; 
//         }
//         std::cout << std::endl;
//     }
//     else
//     {
//         std::cout << "输入有错" << std::endl;
//     }
// } 

#include <iostream>
#include "Sales_item.h"
int main()
{
    // /* 读写Sales_item */
    // Sales_item book;
    // // 读入ISBN号、售出的册数以及销售价格
    // std::cin >> book;
    // // 写入ISBN号、售出的册数、总销售额和平均价格
    // std::cout << book << std::endl;
    /* Sales_item对象的加法 */
    // Sales_item item1, item2;
    // std::cin >> item1 >> item2;     //读取一对交易记录
    // std::cout << item1 + item2 << std::endl;    //打印他们的和
    //练习1.20
    // for(Sales_item item; std::cin >> item; std::cout << item << std::endl);
    // // 练习1.21
    // Sales_item item1, item2;
    // std::cin >> item1;
    // std::cout << item1 << std::endl;
    // std::cin >> item2;
    // std::cout << item2 << std::endl;
    // std::cout << "Sum: " << item1 + item2 << std::endl;
    // return 0;
    // // 练习1.22
    // Sales_item sum_item;
    // std::cin >> sum_item;
    // std::cout << sum_item << std::endl;
    // for(Sales_item item; std::cin >> item; std::cout << item << std::endl)
    // {
    //     sum_item += item;
    // }
    // std::cout << "Sum: " <<sum_item << std::endl;
    // return 0;
    // /*认识成员函数*/
    // Sales_item item1, item2;
    // std::cin >> item1 >> item2;
    // //首先检查item1和item2是否表示相同的书
    // if (item1.isbn() == item2.isbn())
    // {
    //     std::cout << item1 + item2 << std::endl;
    //     return 0;   //写入成功
    // }
    // else
    // {
    //     std::cerr << "Data must refer to same ISBN"
    //                 << std::endl;
    //     return -1;  //写入失败
    // }
    // //练习1.23
    // Sales_item sum_item;
    // int sum = 1;
    // std::cin >> sum_item;
    // std::cout << sum_item << std::endl;
    // for (Sales_item item;std::cin >> item;)
    // {
    //     if (item.isbn() == sum_item.isbn())
    //     {
    //         sum += 1;
    //     }
    //     else
    //     {
    //         std::cout << sum_item << " number sum is: " << sum << std::endl;
    //         sum = 1;
    //         sum_item = item;
    //     }
    // }
    // std::cout << sum_item << " number sum is: " << sum << std::endl;
    // return 0;
    Sales_item total; //保存下一条交易记录的变量
    //读入第一条交易记录，并确保有数据可以处理
    if (std::cin >> total)
    {
        Sales_item trans;   //保存和的变量
        // 读入并处理剩余交易记录
        while (std::cin >> trans)
        {
            //如果我们仍在处理相同的书
            if (total.isbn() == trans.isbn())
                total += trans; // 更新总销售额
            else
            {
                //打印前一本书的结果
                std::cout << total << std::endl;
                total = trans;  // total现在表示下一本书的销售额
            }
        }
        std::cout << total << std::endl;    //打印最后一本书的结果
    }
    else
    {
        //没有输入！警告读者
        std::cerr << "No data?" << std::endl;
        return -1; // 表示失败
    }
    return 0;
}
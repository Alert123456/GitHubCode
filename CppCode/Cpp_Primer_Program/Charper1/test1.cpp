// 测试小程�?1.1
// int main()
// {
//     return -1;
// }
// 一�?使用IO库的程序
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
//练习 1.3
// #include<iostream>

// int main()
// {
//     std::cout << "Hello, World!" << std::endl;
//     return 0; //不�?�忘了这一句，int类型函数必须要有返回�?
// }
// #include<iostream>
//�������
// int main()
// {
//     std::cout << "�����������֣������������Ļ�" << std::endl;
//     int i = 0, j = 0;
//     std::cin >> i >> j;
//     std::cout << i << "��" << j << "�Ļ�Ϊ" << i * j <<std::endl;
//     return 0;
// }
// //��ϰ1.7
// #include<iostream>
// int main()
// {
//     std::cout << /*""*/ */;
//     return 0;
// }
// //��ϰ1.8
// #include<iostream>
// int main()
// {
//     std::cout << "/*";
//     std::cout << "*/";
//     std::cout << /*"*/"*/;
//     std::cout << /*"*/" /* "/*" */;
//     return 0;
// }
// /* while����ʹ�� */
// #include <iostream>
// int main()
// {
//     int sum = 0, val = 1;
//     //ֻҪval��ֵС�ڵ���10��whileѭ���ͻ����ִ��
//     while (val <= 10)
//     {
//         sum += val; //��sum + val ���� sum
//         ++val;      //��val��1
//     }
//     std::cout << "��һ��ʮ�ĺ�Ϊ" << sum <<std::endl;
//     return 0;
// }
// /*
// ��ϰ1.9
// whileѭ����50�ӵ�100
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
//     std::cout << "��50��100���֮��Ϊ" << sum << std::endl; 
//     return 0;
// }
// // ��ϰ1.10
// #include<iostream>
// int main()
// {
//     int val = 10;
//     std::cout << "��10-0֮���������:" << std::endl;
//     while (val >= 0)
//     {
//          std::cout << val << std::endl;
//          --val;
//     }
    
// }
// // ��ϰ1.11
// #include<iostream>
// int main()
// {
//     std::cout << "������������,����ӡ�����������֮�������ֵ" 
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
// // for����ʹ��
// #include<iostream>
// int main()
// {
//     int sum = 0;
//     //��1�ӵ�10
//     for (int val = 1; val <= 10; ++val)
//         sum += val; //�ȼ���sum = sum + val
//     std::cout << "Sum of 1 to 10 inclusive is"
//               << sum << std::endl;
//     return 0;
// }
// //��ϰ1.12 
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
//     //��ȡ����ֱ�������ļ�β���������ж����ֵ�ĺ�
//     while (std::cin >> value)
//         sum += value;
//     std::cout << "Sum is: " << sum << std::endl;
//     return 0;
// }
// //��ϰ 1.16
// #include <iostream>
// int main()
// {
//     int sum = 0;
//     for(int value = 0; std::cin >> value;)
//         sum += value;
//     std::cout << sum << std::endl;
// }
//if����ʹ��
// #include <iostream>
// int main()
// {
//     // currVal ����������ͳ�Ƶ��������ǽ��������ֵ����val
//     int currVal = 0, val = 0;
//     // ��ȡ��һ��������ȷ��ȷʵ�����ݿ��Դ���
//     if (std::cin >> currVal)
//     {
//         int cnt = 1;    //�����������ڴ���ĵ�ǰֵ�ĸ���
//         while (std::cin >> val) //��ȡʣ�����
//         {
//             if (val == currVal) //���ֵ��ͬ
//                 ++cnt;
//             else                //�����ӡǰһ��ֵ�ĸ���
//             {
//                 std::cout << currVal << " occurs "
//                           << cnt << " times " << std::endl;
//                 currVal = val;
//                 cnt = 1;
//             }
//         }
//         std::cout << currVal << " occurs " << cnt << " times "
//                   << std::endl; //��ӡ�ļ����һ��ֵ�ĸ���
//     }
//     return 0;
// }
//��ϰ1.19
// #include<iostream>
// int main()
// {
//     std::cout << "������������,���еڶ�����Ҫ�ȵ�һ������" 
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
//         std::cout << "�����д�" << std::endl;
//     }
// } 

#include <iostream>
#include "Sales_item.h"
int main()
{
    // /* ��дSales_item */
    // Sales_item book;
    // // ����ISBN�š��۳��Ĳ����Լ����ۼ۸�
    // std::cin >> book;
    // // д��ISBN�š��۳��Ĳ����������۶��ƽ���۸�
    // std::cout << book << std::endl;
    /* Sales_item����ļӷ� */
    // Sales_item item1, item2;
    // std::cin >> item1 >> item2;     //��ȡһ�Խ��׼�¼
    // std::cout << item1 + item2 << std::endl;    //��ӡ���ǵĺ�
    //��ϰ1.20
    // for(Sales_item item; std::cin >> item; std::cout << item << std::endl);
    // // ��ϰ1.21
    // Sales_item item1, item2;
    // std::cin >> item1;
    // std::cout << item1 << std::endl;
    // std::cin >> item2;
    // std::cout << item2 << std::endl;
    // std::cout << "Sum: " << item1 + item2 << std::endl;
    // return 0;
    // // ��ϰ1.22
    // Sales_item sum_item;
    // std::cin >> sum_item;
    // std::cout << sum_item << std::endl;
    // for(Sales_item item; std::cin >> item; std::cout << item << std::endl)
    // {
    //     sum_item += item;
    // }
    // std::cout << "Sum: " <<sum_item << std::endl;
    // return 0;
    // /*��ʶ��Ա����*/
    // Sales_item item1, item2;
    // std::cin >> item1 >> item2;
    // //���ȼ��item1��item2�Ƿ��ʾ��ͬ����
    // if (item1.isbn() == item2.isbn())
    // {
    //     std::cout << item1 + item2 << std::endl;
    //     return 0;   //д��ɹ�
    // }
    // else
    // {
    //     std::cerr << "Data must refer to same ISBN"
    //                 << std::endl;
    //     return -1;  //д��ʧ��
    // }
    // //��ϰ1.23
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
    Sales_item total; //������һ�����׼�¼�ı���
    //�����һ�����׼�¼����ȷ�������ݿ��Դ���
    if (std::cin >> total)
    {
        Sales_item trans;   //����͵ı���
        // ���벢����ʣ�ཻ�׼�¼
        while (std::cin >> trans)
        {
            //����������ڴ�����ͬ����
            if (total.isbn() == trans.isbn())
                total += trans; // ���������۶�
            else
            {
                //��ӡǰһ����Ľ��
                std::cout << total << std::endl;
                total = trans;  // total���ڱ�ʾ��һ��������۶�
            }
        }
        std::cout << total << std::endl;    //��ӡ���һ����Ľ��
    }
    else
    {
        //û�����룡�������
        std::cerr << "No data?" << std::endl;
        return -1; // ��ʾʧ��
    }
    return 0;
}
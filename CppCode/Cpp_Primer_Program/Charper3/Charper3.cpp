#include <string>
#include <iostream>
#include <cctype>
#include <vector>
#include <iterator>
#include <cstring>

// using std::string;
// using std::cin;
// using std::cout;
// using std::endl;
// using std::vector;
using namespace std;
int main()
{
    // string s1;              //默认初始化，s1是一个空字符串
    // string s2 = s1;         //s2是s1的副本
    // string s3 = "hiya";     //s3是该字符串字面值的副本
    // string s4(10, 'c');     //s4的内容是10个"c"

    // std::cout << "s1:" << s1 << " s2:" << s2 << " s3:" << s3 
    // << " s4:" << s4 << std::endl;   
    // 读写 string 对象
    // string s1, s2;   // 空字符串
    // cin >> s1 >> s2;
    // cout << s1 << " " << s2 << "!" << endl;
    // return 0;

    // string line;
    // while(getline(cin, line) )     //反复读取，直到到达文件末尾
    //     cout << line << endl;   //逐个输出单词，每个单词后边紧跟一个换行
    // return 0;
    // string str("some string");
    // //每行输出str中的一个字符
    // for (auto c : str)
    //     cout << c << endl;

    // string s("Hello World!!!");
    // decltype(s.size()) punct_cnt = 0;
    // for (auto c : s)
    // {
    //     if (ispunct(c))
    //     {
    //         ++punct_cnt;
    //     }
    // }
    // cout << punct_cnt << " punctuation characters in " << s << endl;
    // string s("some string");
    // if (!s.empty())
    // {
    //     s[0] = toupper(s[0]);
    // }
    // cout << s << endl;
    // return 0;
    // string s = "some thing!";
    // for (auto &c : s)
    // {
    //     if (isalpha(c))
    //     {
    //         c = 'X';
    //     }
    // }
    // cout << s << endl;
    // vector 
    // vector<int> ivec;               //ivec保存int类型的对象
    // vector<vector<string>> file;    //该向量的元素是vector对象
    // vector<int> ivec2(ivec);        //把ivec的元素拷贝给ivec2
    // vector<int> ivec3 = ivec;       //把ivec的元素拷贝给ivec3
    // vector<string> svec(ivec2);     //错误：svec的元素是string，不是int
    // vector<string> v1{"a","an","the"};
    // vector<int> v2{1,2,3};
    // vector<int> ivec(10,-1);        // 10个int类型的元素，每个都被初始化为-1
    // vector<string> svec(10,"hi");   //10个string类型，都被初始化为“hi”
    // vector<int> v2;     //空vector对象
    // for (int i = 0; i != 100; ++i)
    // {
    //     v2.push_back(i);    //依次把整数值放到v2尾端
    // }
    // for (auto &i :v2)
    // {
    //     cout << i << endl;
    // }
    // vector<int> ivec;               //ivec保存int类型的对象
    // int i;
    // while(cin >> i)
    // { 
    //     ivec.push_back(i);    //依次把整数值放到v2尾端
    // }
    // for(auto &i : ivec)
    // {
    //     cout << i << " ";
    // }
    // cout << endl;

    // vector<int> v{1,2,3,4,5,6,7,8,9};
    // for (auto &i : v)
    //     i *= i;             //求元素值的平方
    // for (auto i : v)        
    //     cout << i << " ";   //输出该元素
    // cout << endl;

    // vector<string> ivec;               //ivec保存int类型的对象
    // string i;
    // while(cin >> i)
    // { 
    //     ivec.push_back(i);    //依次把整数值放到v2尾端
    //     cout << i << endl;
    // }

    // for(auto &s : ivec)
    // {
    //     for(auto &m : s)
    //     {
    //         m = toupper(m);
    //     }  
    // }

    // for(auto &k : ivec)
    // {
    //     cout << k << " " << endl;
    // }
    // vector<int> ivec;               //ivec保存int类型的对象
    // int i;
    // while(cin >> i)
    // { 
    //     ivec.push_back(i);    //依次把整数值放到v2尾端
    // }
    // for (int i = 0; i < ivec.size()-1; ++i)
    // {
    //     cout << ivec[i] + ivec[i+1] << endl;
    // }
    // int m = 0 ,n = ivec.size()-1;
    // while ( m < n)
    // {
    //     cout << ivec[m] + ivec[n] << endl;
    //     ++m;
    //     --n;
    // }
    //迭代器使用
    // string s("some string");
    // // auto it = s.begin();    //it表示s的第一个字符
    // // while (it != s.end())
    // // {
    // //     *it = toupper(*it);     //当前字符改成大写形式
    // //     ++it;
    // // }
    // for(auto it = s.begin(); it != s.end() && !isspace(*it); ++it)
    // {
    //     *it = toupper(*it);     //当前字符改成大写形式
    // }
    // cout << s << endl;

    // //练习3.21
    // vector<string> v1{"a","an","the"};
    // vector<int> v2{1,2,3};
    // vector<int> ivec(10,-1);        // 10个int类型的元素，每个都被初始化为-1
    // vector<string> svec(10,"hi");   //10个string类型，都被初始化为“hi”

    // for(auto it = v1.cbegin(); it != v1.cend(); ++it)
    // {
    //     cout << *it << " ";
    // }
    // cout << endl;

    // for(auto it = v2.cbegin(); it != v2.cend(); ++it)
    // {
    //     cout << *it << " ";
    // }
    // cout << endl;

    //练习3.22
    // string s("some string");
    // for(auto it = s.begin(); it != s.end(); ++it)
    // {
    //     *it = toupper(*it);     //当前字符改成大写形式
    // }
    // cout << s << endl;
    
    // //练习3.23
    // vector<int> v{1,2,3,4,5,6,7,8,9,10};
    // for(auto it = v.begin(); it != v.end(); ++it)
    // {
    //     (*it) *= 2;
    //     cout << *it << " ";
    // }
    // cout << endl;

    // //练习3.24
    // vector<int> v{1,2,3,4,5,6,7,8,9,10};
    // auto beg = v.begin(), en = v.end()-1;
    // while(beg < v.end())
    // {
    //     cout << *beg + *(beg+1) << " ";
    //     beg+=2;
    // }
    // cout << endl;

    // beg = v.begin();
    // while(beg < en)
    // {
    //     cout << *beg + *en << " ";
    //     beg++;
    //     en--;
    // }
    // cout << endl;

    // //练习3.25
    // vector<int> score(11, 0);
    // unsigned grade;
    // while(cin >> grade)
    // {
    //     if(grade <= 100)
    //     {
    //         ++*(score.begin() + grade/10);
    //     }
    // }

    // for (auto &c : score)
    // {
    //     cout << c << " ";
    // }
    // cout << endl;   

    // //练习3.26 程序确保在允许范围内，不会溢出

    /****************************************************************/
    //3.5数组
    // unsigned cnt = 42;  //不是常量表达式
    // constexpr unsigned sz = 42; //常量表达式
    // int arr[10];        //含有十个整数的数组
    // int *parr[sz];      //含有42个整数指针的数组
    // string bad[cnt];    //error:cnt不是常量表达式
    // string strs[get_size()];

    // const unsigned sz = 3;
    // int ial[sz] = {0,1,2};  //含有三个元素的数组。0,1,2
    // int a2[] = {0,1,2};     //维度是3的数组
    // int a3[5] = {0,1,2};    //等价于 a3[] = {0,1,2,0,0}

    // char a1[] = {'C', '+', '+'};    //列表初始化，没有空字符
    // char a2[] = {'C', '+', '+', '\0'};  //列表初始化，含有显式的空字符
    // char a3[] = "C++";      //自动添加表示字符串结束的空字符
    // const char a4[6] = "Daniel";    //错误：没有空间可存放空字符！

    // int *ptrs[10];  //ptrs是含有10个整形指针的数组
    // int &refs[10] = arr;    //错误：不存在引用的数组
    // int (*Parray)[10] = &arr;   //Parray指向一个含有10个整数的数组
    // int (&arrRef)[10] = arr;    //arrRef引用一个含有10个整数的数组

    //练习3.27
    //a非法，b合法，c非法，d非法
    //练习3.28
    //sa2[10] 都为'',ia2[10]都为0
    //练习3.29
    //必须固定，编译指定，不能auto，不能随意增加元素，不允许拷贝和赋值

    // unsigned scores[11] = {};    // 11个分数段，全部初始化为0
    // unsigned grade;
    // while (cin >> grade)
    // {
    //     if (grade <= 100)
    //     {
    //         ++scores[grade/10]; //将当前分数段的计数值加1
    //     }
    // }
    // for(auto i : scores)
    // {
    //     cout << i << " ";
    // }
    // cout << endl;

    // //练习3.31 
    // int number[10] = {};
    // for(auto i = 0; i < 10; ++i)
    // {
    //     number[i] = i;
    // }
    // for(auto j : number)
    // {
    //     cout << j << " ";
    // }
    // cout << endl;

    // //练习3.32
    // int number[10] = {};
    // int number1[10] = {};
     
    // for(auto i = 0; i < 10; ++i)
    // {
    //     number[i] = i;
    // }
    // for(auto i = 0; i < 10; ++i)
    // {
    //     number1[i] = number[i];
    // }

    // vector<int> num(10);
    // for(auto i = 0; i < 10; ++i)
    // {
    //     num[i] = number[i];
    // }
    // vector<int> num1(num);
    // for(auto j : num1)
    // { 
    //     cout << j << " ";
    // }
    // cout << endl;
    // //练习3.33

    // //指针和数组
    // string nums[] = {"one", "two", "three"};    //数组的元素是string对象
    // string *p = &nums[0];       //p指向nums的第一个元素
    // string *p2 = nums;          //等价于p2 = &nums[0]
    
    // int ia[] = {0,1,2,3,4,5,6,7,8,9};   //ia是一个含有10个整数的数组
    // int *p3 = &ia[0];
    // auto ia2(ia);   //ia2 是一个整数指针，指向ia的第一个元素
    // ia2 = p3;
    // decltype(ia) ia3;
    // ia3[0] = *p3;

    // int arr[] = {0,1,2,3,4,5,6,7,8,9};
    // int *p = arr;   //p指向arr的第一个元素
    // ++p;            //p指向arr[1]
    // cout << *p << endl;

    // //不可以数组越界
    // int *e = &arr[10];  //指向arr尾元素的下一位置的指针

    // for(int *b = arr; b != e; ++b)
    // {
    //     cout << *b << endl; //输出arr的元素
    // }

    // int ia[] = {0,1,2,3,4,5,6,7,8,9};   //ia是一个含有10个整数的数组
    // int *beg = begin(ia);       //指向ia首元素的指针
    // int *last = end(ia);        //指向ia尾元素的下一位置的指针
    // while (beg != last && *beg >= 0)
    // {
    //     cout << *beg << " ";
    //     ++beg;  
    // }
    // cout << endl;

    // constexpr size_t sz = 5;
    // int arr[sz] = {1,2,3,4,5};
    // int *ip = arr;  //等价于 int *ip = &arr[0]
    // int *ip2 = ip + 4;  //ip2指向arr的尾元素arr[4]

    // int *p = arr + sz;
    // int *p2 = arr + 10;
    // auto n = end(arr) - begin(arr); //n的值为5，为arr中元素的数量
    // // cout << "n: " << n << endl;
    // int *b = arr, *e = arr + sz;
    // while(b < e)
    // {
    //     cout << *b << " ";
    //     ++b;
    // }
    // cout << endl;
    
    // //练习3.34 
    // int ia[] = {0,2,4,6,8};     //含有5个整数的数组
    // int ib[] = {0,2,4,6,8};     //含有5个整数的数组
    // int last = *(ia + 4);       //正确：把last初始化成8，也就是ia[4]的值
    // last = *ia + 4;     //正确：last = 4 等价于 ia[0] + 4
    // int *p1, *p2;
    // p1 = &ia[1];
    // p2 = &ia[1];
    // p1 += p2 - p1;

    // // cout << *p1 << endl;

    // //练习3.35
    // *p1 = 0;
    // // cout << ia[1];

    // //练习3.36
    // vector<int> a(10,5);
    // vector<int> b(10,5);
    // if(ia == ib)    //需要单个比较
    // {
    //    cout << "ia = ib";
    // }

    // if(a == b)  //vector直接比较
    // {
    //    cout << "a = b";
    // }

    // // C风格字符串
    // char ca[] = {'C', '+', '+', '\0'};    //不以空字符结束
    // cout << strlen(ca) << endl;

    //练习3.37
    // const char ca[] = {'h', 'e', 'l', 'l', 'o','\0'};
    // const char cb[] = {'h', 'e', 'l', 'l', 'o','\0'};
    // const char *cp = ca;
    // while (*cp) {
    //     cout << *cp << endl;
    //     ++cp;
    // } 
    //练习3.39

    // if (!strcmp(ca,cb))
    // {
    //     cout << "yes" << endl;
    // }
    // string ca = "hello";
    // string cb = "hello";
    // if (ca==cb)
    // {
    //     cout << "yes" << endl;
    // }

    // //练习3.40
    // char ca[] = {'h', 'e', 'l', 'l', 'o','\0'};
    // char cb[] = {'h', 'a', 'l', 'l', 'e','\0'};
    // char cc[13];
    // strcpy(cc, ca);
    // strcat(cc, " ");
    // strcat(cc, cb);
    // cout << cc << endl;

    // string s("hello world");
    // char *str = s;      //错误
    // const char *str = s.c_str();    //正确

    // int arr[] = {0,1,2,3,4,5};
    // vector<int> ivec(begin(arr), end(arr));
    // vector<int> subvec(arr + 1, arr + 4);

    // //练习3.41
    // int arr[] = {0,1,2,3,4,5};
    // vector<int> a(begin(arr),end(arr));
    // for(auto &i : a)
    //     cout << i << endl;
    // //练习3.42
    // vector<int> a = {0,1,2,3,4,5};
    // int arr[6];
    // for (auto &i : a)
    // {
    //     *(arr+i) = i;
    //     cout << *(arr+i);
    // }
    // cout << endl;

    // // 多维数组
    // int ia[3][4];   //大小为3的数组，每个元素是含有4个整数的数组
    // //大小为10的数组。它的每个元素都是大小为20的数组
    // //这些数组的元素是含有30个整数的数组
    // int arr[10][20][30] = {0};  //将所有元素初始化为0
    // int ia[3][4] = {
    //     {0, 1, 2, 3},      //第1行的初始值
    //     {4, 5, 6, 7},      //第2行的初始值
    //     {8, 9, 10, 11},    //第3行的初始值
    // };
    // //没有标识每行的花括号，与之前的初始化语句是等价的
    // int ia[3][4] = {0,1,2,3,4,5,6,7,8,9,10,11};
    // //想初始化，每一行的第一个元素
    // // int ia[3][4] = {{0},{4},{8}};
    // // 显式的初始化第一行，其他元素执行值初始化
    // int ix[3][4] = {0, 3, 6, 9};
    // // 用arr的首元素为ia最后一行的最后一个元素赋值
    // ia[2][3] = arr[0][0][0];
    // int (&row)[4] = ia[1];  //把row绑定到ia的第二个4元素数组上
    // for(auto &i : row)
    //     cout << i << " ";
    // cout << endl;

    // //双层嵌套for循环处理多维数组
    // constexpr size_t rowCnt = 3, colCnt = 4;
    // int ia[rowCnt][colCnt]; //12个未初始化的元素
    // // 对于每一行
    // for (size_t i = 0; i != rowCnt; ++i)
    // {
    //     //对于每行
    //     for (size_t j = 0; j != colCnt; ++j)
    //     {
    //         ia[i][j] = i * colCnt + j;
    //     }
    // }

    // for (auto p = begin(ia); p != end(ia); ++p)
    // {
    //     for (auto q = begin(*p); q != end(*p); ++q)
    //     {
    //         cout << *q << " ";
    //     }
    //     cout << endl;
    // }

    //练习3.43
    int ia[3][4] = {0,1,2,3,4,5,6,7,8,9,10,11};
    for (int i = 0; i != 3; ++i)
    {
        for (int j = 0; j != 4; ++j)
        {
            cout << ia[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    for (const int (&row)[4] : ia)
    {
        for (int col : row)
        {
            cout << col << " ";
        }
        cout << endl;
    }
    cout << endl;
    for (int (*row)[4] = begin(ia); row != end(ia); ++row)
    {
        for (int *col = begin(*row); col != end(*row); ++col)
        {
            cout << *col << " ";
        }
        cout << endl;
    }
    cout << endl;
    return 0;

}
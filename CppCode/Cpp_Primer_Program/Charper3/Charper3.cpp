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
    // string s1;              //Ĭ�ϳ�ʼ����s1��һ�����ַ���
    // string s2 = s1;         //s2��s1�ĸ���
    // string s3 = "hiya";     //s3�Ǹ��ַ�������ֵ�ĸ���
    // string s4(10, 'c');     //s4��������10��"c"

    // std::cout << "s1:" << s1 << " s2:" << s2 << " s3:" << s3 
    // << " s4:" << s4 << std::endl;   
    // ��д string ����
    // string s1, s2;   // ���ַ���
    // cin >> s1 >> s2;
    // cout << s1 << " " << s2 << "!" << endl;
    // return 0;

    // string line;
    // while(getline(cin, line) )     //������ȡ��ֱ�������ļ�ĩβ
    //     cout << line << endl;   //���������ʣ�ÿ�����ʺ�߽���һ������
    // return 0;
    // string str("some string");
    // //ÿ�����str�е�һ���ַ�
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
    // vector<int> ivec;               //ivec����int���͵Ķ���
    // vector<vector<string>> file;    //��������Ԫ����vector����
    // vector<int> ivec2(ivec);        //��ivec��Ԫ�ؿ�����ivec2
    // vector<int> ivec3 = ivec;       //��ivec��Ԫ�ؿ�����ivec3
    // vector<string> svec(ivec2);     //����svec��Ԫ����string������int
    // vector<string> v1{"a","an","the"};
    // vector<int> v2{1,2,3};
    // vector<int> ivec(10,-1);        // 10��int���͵�Ԫ�أ�ÿ��������ʼ��Ϊ-1
    // vector<string> svec(10,"hi");   //10��string���ͣ�������ʼ��Ϊ��hi��
    // vector<int> v2;     //��vector����
    // for (int i = 0; i != 100; ++i)
    // {
    //     v2.push_back(i);    //���ΰ�����ֵ�ŵ�v2β��
    // }
    // for (auto &i :v2)
    // {
    //     cout << i << endl;
    // }
    // vector<int> ivec;               //ivec����int���͵Ķ���
    // int i;
    // while(cin >> i)
    // { 
    //     ivec.push_back(i);    //���ΰ�����ֵ�ŵ�v2β��
    // }
    // for(auto &i : ivec)
    // {
    //     cout << i << " ";
    // }
    // cout << endl;

    // vector<int> v{1,2,3,4,5,6,7,8,9};
    // for (auto &i : v)
    //     i *= i;             //��Ԫ��ֵ��ƽ��
    // for (auto i : v)        
    //     cout << i << " ";   //�����Ԫ��
    // cout << endl;

    // vector<string> ivec;               //ivec����int���͵Ķ���
    // string i;
    // while(cin >> i)
    // { 
    //     ivec.push_back(i);    //���ΰ�����ֵ�ŵ�v2β��
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
    // vector<int> ivec;               //ivec����int���͵Ķ���
    // int i;
    // while(cin >> i)
    // { 
    //     ivec.push_back(i);    //���ΰ�����ֵ�ŵ�v2β��
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
    //������ʹ��
    // string s("some string");
    // // auto it = s.begin();    //it��ʾs�ĵ�һ���ַ�
    // // while (it != s.end())
    // // {
    // //     *it = toupper(*it);     //��ǰ�ַ��ĳɴ�д��ʽ
    // //     ++it;
    // // }
    // for(auto it = s.begin(); it != s.end() && !isspace(*it); ++it)
    // {
    //     *it = toupper(*it);     //��ǰ�ַ��ĳɴ�д��ʽ
    // }
    // cout << s << endl;

    // //��ϰ3.21
    // vector<string> v1{"a","an","the"};
    // vector<int> v2{1,2,3};
    // vector<int> ivec(10,-1);        // 10��int���͵�Ԫ�أ�ÿ��������ʼ��Ϊ-1
    // vector<string> svec(10,"hi");   //10��string���ͣ�������ʼ��Ϊ��hi��

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

    //��ϰ3.22
    // string s("some string");
    // for(auto it = s.begin(); it != s.end(); ++it)
    // {
    //     *it = toupper(*it);     //��ǰ�ַ��ĳɴ�д��ʽ
    // }
    // cout << s << endl;
    
    // //��ϰ3.23
    // vector<int> v{1,2,3,4,5,6,7,8,9,10};
    // for(auto it = v.begin(); it != v.end(); ++it)
    // {
    //     (*it) *= 2;
    //     cout << *it << " ";
    // }
    // cout << endl;

    // //��ϰ3.24
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

    // //��ϰ3.25
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

    // //��ϰ3.26 ����ȷ��������Χ�ڣ��������

    /****************************************************************/
    //3.5����
    // unsigned cnt = 42;  //���ǳ������ʽ
    // constexpr unsigned sz = 42; //�������ʽ
    // int arr[10];        //����ʮ������������
    // int *parr[sz];      //����42������ָ�������
    // string bad[cnt];    //error:cnt���ǳ������ʽ
    // string strs[get_size()];

    // const unsigned sz = 3;
    // int ial[sz] = {0,1,2};  //��������Ԫ�ص����顣0,1,2
    // int a2[] = {0,1,2};     //ά����3������
    // int a3[5] = {0,1,2};    //�ȼ��� a3[] = {0,1,2,0,0}

    // char a1[] = {'C', '+', '+'};    //�б��ʼ����û�п��ַ�
    // char a2[] = {'C', '+', '+', '\0'};  //�б��ʼ����������ʽ�Ŀ��ַ�
    // char a3[] = "C++";      //�Զ���ӱ�ʾ�ַ��������Ŀ��ַ�
    // const char a4[6] = "Daniel";    //����û�пռ�ɴ�ſ��ַ���

    // int *ptrs[10];  //ptrs�Ǻ���10������ָ�������
    // int &refs[10] = arr;    //���󣺲��������õ�����
    // int (*Parray)[10] = &arr;   //Parrayָ��һ������10������������
    // int (&arrRef)[10] = arr;    //arrRef����һ������10������������

    //��ϰ3.27
    //a�Ƿ���b�Ϸ���c�Ƿ���d�Ƿ�
    //��ϰ3.28
    //sa2[10] ��Ϊ'',ia2[10]��Ϊ0
    //��ϰ3.29
    //����̶�������ָ��������auto��������������Ԫ�أ����������͸�ֵ

    // unsigned scores[11] = {};    // 11�������Σ�ȫ����ʼ��Ϊ0
    // unsigned grade;
    // while (cin >> grade)
    // {
    //     if (grade <= 100)
    //     {
    //         ++scores[grade/10]; //����ǰ�����εļ���ֵ��1
    //     }
    // }
    // for(auto i : scores)
    // {
    //     cout << i << " ";
    // }
    // cout << endl;

    // //��ϰ3.31 
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

    // //��ϰ3.32
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
    // //��ϰ3.33

    // //ָ�������
    // string nums[] = {"one", "two", "three"};    //�����Ԫ����string����
    // string *p = &nums[0];       //pָ��nums�ĵ�һ��Ԫ��
    // string *p2 = nums;          //�ȼ���p2 = &nums[0]
    
    // int ia[] = {0,1,2,3,4,5,6,7,8,9};   //ia��һ������10������������
    // int *p3 = &ia[0];
    // auto ia2(ia);   //ia2 ��һ������ָ�룬ָ��ia�ĵ�һ��Ԫ��
    // ia2 = p3;
    // decltype(ia) ia3;
    // ia3[0] = *p3;

    // int arr[] = {0,1,2,3,4,5,6,7,8,9};
    // int *p = arr;   //pָ��arr�ĵ�һ��Ԫ��
    // ++p;            //pָ��arr[1]
    // cout << *p << endl;

    // //����������Խ��
    // int *e = &arr[10];  //ָ��arrβԪ�ص���һλ�õ�ָ��

    // for(int *b = arr; b != e; ++b)
    // {
    //     cout << *b << endl; //���arr��Ԫ��
    // }

    // int ia[] = {0,1,2,3,4,5,6,7,8,9};   //ia��һ������10������������
    // int *beg = begin(ia);       //ָ��ia��Ԫ�ص�ָ��
    // int *last = end(ia);        //ָ��iaβԪ�ص���һλ�õ�ָ��
    // while (beg != last && *beg >= 0)
    // {
    //     cout << *beg << " ";
    //     ++beg;  
    // }
    // cout << endl;

    // constexpr size_t sz = 5;
    // int arr[sz] = {1,2,3,4,5};
    // int *ip = arr;  //�ȼ��� int *ip = &arr[0]
    // int *ip2 = ip + 4;  //ip2ָ��arr��βԪ��arr[4]

    // int *p = arr + sz;
    // int *p2 = arr + 10;
    // auto n = end(arr) - begin(arr); //n��ֵΪ5��Ϊarr��Ԫ�ص�����
    // // cout << "n: " << n << endl;
    // int *b = arr, *e = arr + sz;
    // while(b < e)
    // {
    //     cout << *b << " ";
    //     ++b;
    // }
    // cout << endl;
    
    // //��ϰ3.34 
    // int ia[] = {0,2,4,6,8};     //����5������������
    // int ib[] = {0,2,4,6,8};     //����5������������
    // int last = *(ia + 4);       //��ȷ����last��ʼ����8��Ҳ����ia[4]��ֵ
    // last = *ia + 4;     //��ȷ��last = 4 �ȼ��� ia[0] + 4
    // int *p1, *p2;
    // p1 = &ia[1];
    // p2 = &ia[1];
    // p1 += p2 - p1;

    // // cout << *p1 << endl;

    // //��ϰ3.35
    // *p1 = 0;
    // // cout << ia[1];

    // //��ϰ3.36
    // vector<int> a(10,5);
    // vector<int> b(10,5);
    // if(ia == ib)    //��Ҫ�����Ƚ�
    // {
    //    cout << "ia = ib";
    // }

    // if(a == b)  //vectorֱ�ӱȽ�
    // {
    //    cout << "a = b";
    // }

    // // C����ַ���
    // char ca[] = {'C', '+', '+', '\0'};    //���Կ��ַ�����
    // cout << strlen(ca) << endl;

    //��ϰ3.37
    // const char ca[] = {'h', 'e', 'l', 'l', 'o','\0'};
    // const char cb[] = {'h', 'e', 'l', 'l', 'o','\0'};
    // const char *cp = ca;
    // while (*cp) {
    //     cout << *cp << endl;
    //     ++cp;
    // } 
    //��ϰ3.39

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

    // //��ϰ3.40
    // char ca[] = {'h', 'e', 'l', 'l', 'o','\0'};
    // char cb[] = {'h', 'a', 'l', 'l', 'e','\0'};
    // char cc[13];
    // strcpy(cc, ca);
    // strcat(cc, " ");
    // strcat(cc, cb);
    // cout << cc << endl;

    // string s("hello world");
    // char *str = s;      //����
    // const char *str = s.c_str();    //��ȷ

    // int arr[] = {0,1,2,3,4,5};
    // vector<int> ivec(begin(arr), end(arr));
    // vector<int> subvec(arr + 1, arr + 4);

    // //��ϰ3.41
    // int arr[] = {0,1,2,3,4,5};
    // vector<int> a(begin(arr),end(arr));
    // for(auto &i : a)
    //     cout << i << endl;
    // //��ϰ3.42
    // vector<int> a = {0,1,2,3,4,5};
    // int arr[6];
    // for (auto &i : a)
    // {
    //     *(arr+i) = i;
    //     cout << *(arr+i);
    // }
    // cout << endl;

    // // ��ά����
    // int ia[3][4];   //��СΪ3�����飬ÿ��Ԫ���Ǻ���4������������
    // //��СΪ10�����顣����ÿ��Ԫ�ض��Ǵ�СΪ20������
    // //��Щ�����Ԫ���Ǻ���30������������
    // int arr[10][20][30] = {0};  //������Ԫ�س�ʼ��Ϊ0
    // int ia[3][4] = {
    //     {0, 1, 2, 3},      //��1�еĳ�ʼֵ
    //     {4, 5, 6, 7},      //��2�еĳ�ʼֵ
    //     {8, 9, 10, 11},    //��3�еĳ�ʼֵ
    // };
    // //û�б�ʶÿ�еĻ����ţ���֮ǰ�ĳ�ʼ������ǵȼ۵�
    // int ia[3][4] = {0,1,2,3,4,5,6,7,8,9,10,11};
    // //���ʼ����ÿһ�еĵ�һ��Ԫ��
    // // int ia[3][4] = {{0},{4},{8}};
    // // ��ʽ�ĳ�ʼ����һ�У�����Ԫ��ִ��ֵ��ʼ��
    // int ix[3][4] = {0, 3, 6, 9};
    // // ��arr����Ԫ��Ϊia���һ�е����һ��Ԫ�ظ�ֵ
    // ia[2][3] = arr[0][0][0];
    // int (&row)[4] = ia[1];  //��row�󶨵�ia�ĵڶ���4Ԫ��������
    // for(auto &i : row)
    //     cout << i << " ";
    // cout << endl;

    // //˫��Ƕ��forѭ�������ά����
    // constexpr size_t rowCnt = 3, colCnt = 4;
    // int ia[rowCnt][colCnt]; //12��δ��ʼ����Ԫ��
    // // ����ÿһ��
    // for (size_t i = 0; i != rowCnt; ++i)
    // {
    //     //����ÿ��
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

    //��ϰ3.43
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
#include<iostream>
#include<string>
#include<vector>

using namespace std;
int main()
{
    // //Á·Ï°4.4
    // int i, j;
    // i = 12 / 3 * 4 + 5 * 15 + 24 % 4 / 2;
    // cout << i << endl;
    // j = ((12 / 3) * 4) + (5 * 15) + ((24 % 4) / 2);    
    // cout << j << endl;

    //Á·Ï°4.5
    // string text = "This is a number.";
    // for (const auto &s : text)
    // {
    //     cout << s;  //Êä³öµ±Ç°ÔªËØ
    //     if ( (!s) || s == '.')
    //         cout << endl;
    //     else
    //         cout << " ";    //·ñÔòÓÃ¿Õ¸ñ¸ô¿ª
    // }

    // vector<int> v {1,23,4,5,6,7,8,9};
    // auto pbeg = v.begin();
    // while(pbeg != v.end() && *pbeg >= 0)
    //     cout << *pbeg++ << endl;
    // int grade = 95;
    // string finalgrade = (grade > 90) ? "high pass" : (grade < 60) ? "fail" : "pass";
    // cout << finalgrade << endl;
    //Á·Ï°4.21
    // vector<int> number {1,2,3,4,5,6,7,8,9,0};
    // for (auto &i : number)
    // {
    //     i = ( (i % 2) != 0) ? (i*2) : i;
    //     cout << i << " ";
    // }
    // cout << endl;
        
    // //Á·Ï°4.22
    // vector<int> gradescore {95,90,80,70,60,50};
    // for (auto &grade : gradescore)
    // {
    //     string finalgrade = (grade > 90) ? "high pass" 
    //                                 :(grade > 75) ? "pass" 
    //                                 : (grade < 60) ? "fail" : "low pass";
    //     cout << finalgrade << " ";
    // }
    // cout << endl; 
    // for (auto &grade : gradescore)
    // {
    //     string finalgrade;
    //     if (grade > 90)
    //         finalgrade = "high pass";
    //     else if (grade > 75)
    //         finalgrade = "pass";  
    //     else if (grade >= 60)
    //         finalgrade = "low pass";
    //     else
    //         finalgrade = "fail";
    //     cout << finalgrade << " ";
    // }
    // cout << endl;   

    // //Á·Ï°4.28
    // int i;
    // float j;
    // double k;
    // long m;
    // long long n;
    // unsigned int p;
    // cout << " int is " << sizeof(i) << " " 
    // << " float is " << sizeof(j) << " " 
    // << " double is " << sizeof(k) << " " 
    // << " long is " << sizeof(m) << " " 
    // << " long long is " << sizeof(n) << " " 
    // << " unsigned int is " << sizeof(p) << endl;

    // //Á·Ï°4.29
    // int x[10]={0,1,2,3,4,5,6,7,8,9};
    // int *p = x;
    // cout << sizeof(x)/sizeof(*x) <<endl;
    // cout << sizeof(p)/sizeof(*p) <<endl;
    // cout << *p <<endl;

    // Á·Ï°4.32 Ñ­»·±éÀúÊý×é
    // Á·Ï°4.33 someValue Îªtrue x¼Ó1 y¼Ó1 Îªfalse x¼õ1 y¼õ1



    return 0;
}

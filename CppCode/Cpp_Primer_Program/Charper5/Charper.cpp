#include <iostream>
#include <string>
#include <vector>
#include <stdexcept>
using namespace std;
int main()
{
    // vector<int>grade {100,90,80,70,60,50};
    // vector<string>gradescore;
    // for (auto &i : grade)
    // {
    //     if (i == 100)
    //     {
    //         gradescore.push_back("A++");
    //     }
    //     else if (i >= 90)
    //     {
    //         gradescore.push_back("A+");
    //     } 
    //     else if (i >= 80)
    //     {
    //         gradescore.push_back("A");
    //     } 
    //     else if (i >= 70)
    //     {
    //         gradescore.push_back("B");
    //     } 
    //     else if (i >= 60)
    //     {
    //         gradescore.push_back("C");
    //     } 
    //     else if (i > 0)
    //     {
    //         gradescore.push_back("D");
    //     } 
    // }
    // for (auto &i :gradescore)
    // {
    //     cout << i << " ";
    // }
    // cout << endl;
    // //��ϰ5.9 5.10 5.11 5.12
    // char value;
    // int a_num = 0, e_num = 0, i_num = 0, o_num = 0, u_num = 0,
    // ff_num = 0, fl_num = 0, fi_num = 0;
    // bool Flag = false;
    // /*
    // ��ͬ�ַ������cin��һ��,char��������ַ�,string��������ַ���
    // */
    // while (cin >> value)
    // {
    //     if(Flag == true)
    //     {
    //         if(value == 'f') 
    //         {
    //             ++ff_num;  
    //         }
    //         else if(value == 'i') 
    //         {
    //             ++fi_num;  
    //         }
    //         else if(value == 'l') 
    //         {
    //             ++fl_num;  
    //         }
    //         Flag = false;
    //     }
    //     else
    //     {
    //         if(value == 'a' || value == 'A')
    //         {
    //             ++a_num;
    //         }
    //         else if(value == 'e' || value == 'E')
    //         {
    //             ++e_num;
    //         }
    //         else if(value == 'i' || value == 'I')
    //         {
    //             ++i_num;
    //         }
    //         else if(value == 'o' || value == 'O')
    //         {
    //             ++o_num;
    //         }
    //         else if(value == 'u' || value == 'U')
    //         {
    //             ++u_num;
    //         } 
    //         else if(value == 'f')
    //         {
    //             Flag = true;
    //         }
    //     }   
    // }
    // cout << "Ԫ��a�� "<< a_num <<" ��" << endl;
    // cout << "Ԫ��e�� "<< e_num <<" ��" << endl;
    // cout << "Ԫ��i�� "<< i_num <<" ��" << endl;
    // cout << "Ԫ��o�� "<< o_num <<" ��" << endl;
    // cout << "Ԫ��u�� "<< u_num <<" ��" << endl;
    // cout << "ff�� "<< ff_num <<" ��" << endl;
    // cout << "fi�� "<< fi_num <<" ��" << endl;
    // cout << "fl�� "<< fl_num <<" ��" << endl;
    // //��ϰ5.14
    // string str, restr;
    // int renum = 0,renummax = 0;
    // while (cin >> str)
    // {
        
    //     if( str == restr)
    //     {
    //         ++renum;
    //     }
    //     else
    //     {
    //         if(renum > renummax)
    //         {
    //             renummax = renum;
    //         }      
    //     }
    //     restr = str;
    // }
    // cout << renummax+1 << endl;
    // // ��ϰ5.17 
    // vector<int> num1 {0,1,2,3};
    // vector<int> num2 {0,1,2,3,4,5,6};
    // int num1_size = (sizeof(num1)/sizeof(num1[0])+1), num2_size = (sizeof(num2)/sizeof(num2[0])+1);
    // bool Flag = false;
    // for(int i = 0; i != num1_size || i != num2_size; ++i )
    // {
    //     if(num1[i] != num2[i])
    //     {
    //         Flag = false;
    //         break;
    //     }
    //     else
    //     {
    //         Flag = true;
    //     }
    // }
    // if(Flag == true)
    // {
    //     cout << "���Ϊ��";
    // }  
    // else
    // {
    //     cout << "���Ϊ��";
    // }
    // //��ϰ5.20
    // string word, t_word;
    // char words;
    // bool Flag = false;
    // while(cin >> word && !word.empty())
    // {
    //     if(word == t_word)
    //     {
    //         if(word[0] != toupper(word[0]))
    //         {
    //             continue;
    //         }
    //         cout << "���ظ��ĵ���Ϊ:" << word << endl;
    //         Flag = true;
    //         break;
    //     }
    //     t_word = word;
    // }
    // if(Flag == false)
    // {
    //     cout << "���ظ��ĵ���" << endl;
    // }
    // int m;
    // double n;
    // while(cin >> m >> n)
    // {
    //     //���ȼ���������������Ƿ�һ��
    //     try
    //     {
    //         if(sizeof(m) != sizeof(n))
    //             throw runtime_error("�������ͱ�����ͬ!");
    //     }
    //     catch(runtime_error error)
    //     {
    //         cout << error.what() << "\n������������(y/n): ";
    //         char c;
    //         cin >> c;
    //         if(!cin || c == 'n')
    //             break;
    //     }
    // }
    int m;
    double n;
    while(cin >> m >> n)
    {
        //���ȼ���������������Ƿ�һ��
        try
        {
            if(n == 0)
                throw runtime_error("��������Ϊ0");
            cout << "������Ϊ:" <<m/n << endl;
        }
        catch(runtime_error error)
        {
            cout << error.what() << "\n������������(y/n): ";
            char c;
            cin >> c;
            if(!cin || c == 'n')
                break;
        }
        //cout << m/n << endl;
    }
    return 0;
}
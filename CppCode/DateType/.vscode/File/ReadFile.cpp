#include<iostream>
#include<fstream>
#include<string>
using namespace std;

// 文本文件
void test01()
{
    // 创建流对象
    ifstream ifs;
    // 打开文件并判断是否打开成功
    ifs.open("test.txt", ios::in);
    if(!ifs.is_open())
    {
        cout << "文件打开失败" << endl;
        return;
    }
    // 读数据

    // first
    // char buf[1024] = {0};

    // while(ifs >> buf) // 顺序读取
    // {
    //     cout << buf << endl;
    // }

    //second 
    // char buf[1024] = {0};
    // while (ifs.getline(buf, sizeof(buf)))
    // {
    //     cout << buf << endl;
    // }

    //third
    // string buf;
    // while(getline(ifs, buf))
    // {
    //     cout << buf << endl;
    // }

    //four // 不建议用
    char c;
    while((c=ifs.get())!=EOF)
    {
        cout << c;
    }


    // 关闭文件
    ifs.close();
}

int main()
{
    test01();

    return 0;
}
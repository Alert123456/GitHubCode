#include <iostream>
using namespace std;

// 抽象出每个零件类
class CPU // 抽象类
{
public:
    // 抽象计算函数
    virtual void calculate() = 0;
};

class VideoCard // 抽象类
{
public:
    // 抽象显示函数
    virtual void display() = 0;
};

class Memory // 抽象类
{
public:
    // 抽象储存函数
    virtual void storage() = 0;
};

class Computer
{
public:
    Computer(CPU *cpu, VideoCard *vc, Memory *mem)
    {
        m_cpu = cpu;
        m_vc = vc;
        m_mem = mem;
    }
    // 工作函数
    void work()
    {
        m_cpu->calculate();
        m_vc->display();
        m_mem->storage();
    }

    // 提供析构函数释放三个电脑零件
    ~Computer()
    {
        // 释放CPU零件
        if(m_cpu != NULL)
        {
            delete m_cpu;
            m_cpu = NULL;
        }
        // 释放VC零件
        if(m_vc != NULL)
        {
            delete m_vc;
            m_vc = NULL;
        }
        // 释放Mem零件
        if(m_mem != NULL)
        {
            delete m_mem;
            m_mem = NULL;
        }
    }

private:
    CPU *m_cpu;      // CPU零件指针
    VideoCard *m_vc; // 显卡零件指针
    Memory *m_mem;   // 内存条零件指针
};

// Inter
class IntelCpu : public CPU
{
public:
    void calculate()
    {
        cout << "Intel 的 CPU 开始计算了!" << endl;
    }
};

class IntelVideoCard : public VideoCard
{
public:
    void display()
    {
        cout << "Intel 的 display 开始计算了!" << endl;
    }
};

class IntelMemory : public Memory
{
public:
    void storage()
    {
        cout << "Intel 的 storage 开始计算了!" << endl;
    }
};

// Lenovo
class LenovoCpu : public CPU
{
public:
    void calculate()
    {
        cout << "Lenovo 的 CPU 开始计算了!" << endl;
    }
};

class LenovoVideoCard : public VideoCard
{
public:
    void display()
    {
        cout << "Lenovo 的 display 开始计算了!" << endl;
    }
};

class LenovoMemory : public Memory
{
public:
    void storage()
    {
        cout << "Lenovo 的 storage 开始计算了!" << endl;
    }
};

void test01()
{
    // 第一台电脑
    cout << "第一台电脑开始工作!!" << endl;
    CPU * intelCpu = new IntelCpu;
    VideoCard * intelCar = new IntelVideoCard;
    Memory * intelMem = new IntelMemory;

    Computer *computer = new Computer(intelCpu, intelCar, intelMem);
    computer->work();
    delete computer;
    cout << "----------------------------" << endl;
    // 第二台电脑
    cout << "第二台电脑开始工作!!" << endl;
    Computer *computer1 = new Computer(new LenovoCpu, new LenovoVideoCard, new LenovoMemory);
    computer1->work();
    delete computer1;
}

int main()
{
    test01();
    return 0;
}
#include<iostream>
using namespace std;

class C1
{
    int m_A;    //Ĭ��Ȩ�� ��˽��
};

struct C2
{
    int m_A;    //Ĭ��Ȩ��  �ǹ���
};

int main() {

    // struct �� class ����
    // struct Ĭ��Ȩ���� ���� public
    // class  Ĭ��Ȩ���� ˽�� private
    C1 c1;
    C2 c2;
    // c1.m_A = 1;
    c2.m_A = 1;

	// system("pause");
	return 0;
}
#include<iostream>
#include<string>
using namespace std;

// ���һ��ѧ���࣬������������ѧ�ţ�
// ���Ը�������ѧ�Ÿ�ֵ��������ʾѧ����������ѧ�� 

// ���ѧ����
class student
{
public:

    // ���е����Ժ���Ϊͳһ��Ϊ ��Ա
    // ����  ��Ա���� ��Ա����
    // ��Ϊ  ��Ա���� ��Ա����
    // ����
    string m_Name;  //����
    int m_Id;   // ѧ��

    // ��Ϊ
    // ��ʾ������ѧ��
    void showStudent()
    {
        cout << "����: " << m_Name << "ѧ��: " << m_Id << endl;
    }

    // ��������ֵ
    void setName(string name)
    {
        m_Name = name;
    }

    // ��ѧ�Ÿ�ֵ
    void setId(int id)
    {
        m_Id = id;
    }
};

int main()
{
    // ����һ�������ѧ�� ʵ��������
    student s1;
    // ��s1���� �������Ը�ֵ����
    s1.setName("����");
    s1.setId(1);
    // ��ʾѧ������Ϣ
    s1.showStudent();

    // ����һ�������ѧ�� ʵ��������
    student s2;
    // ��s1���� �������Ը�ֵ����
    s2.m_Name = "����";
    s2.m_Id = 2;
    // ��ʾѧ������Ϣ
    s2.showStudent();

    return 0;
}
#include<iostream>
using namespace std;

//����Ȩ��
// ����
//����Ȩ�� public       ��Ա    ���ڿ��Է���    ������Է���
//����Ȩ�� protected    ��Ա    ���ڿ��Է���    ���ⲻ���Է���  ������Է��ʸ���ı�������
//˽��Ȩ�� private      ��Ա    ���ڿ��Է���    ���ⲻ���Է���  ���಻���Է��ʸ����˽������
class Person
{
public:
    //����Ȩ��
    string m_Name;  //����
protected:
    //����Ȩ��
    string m_Car;   //����
private:
    //˽��Ȩ��
    int m_Password; //���п�����
private:
    void func()
    {
        m_Name = "����";
        m_Car = "������";
        m_Password = 123456;
    }

};

int main() {

    //ʵ�����������
    Person p1;
    p1.m_Name = "����";
    // p1.m_Car = "����";  //����Ȩ�����ݣ���������ʲ���
    // p1.m_Password = "1111"; //˽��Ȩ�����ݣ���������ʲ���
	// system("pause");
	return 0;
}
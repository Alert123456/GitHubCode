#include<iostream>
#include<string>
using namespace std;

// ��Ա��������Ϊ˽��
// 1.�����Լ����ƶ�дȨ��
// 2.����д���Լ�����ݵ���Ч��

// �������
class Person
{
public:
    //��������
    void setName(string name)
    {
        m_Name = name;
    }
    // ��ȡ����
    string getName()
    {
        return m_Name;
    }
    // ��ȡ����   �ɶ���д ������޸� ������ķ�Χ������ 0 ~ 150֮�䣩
    int getAge()
    {
        // m_Age = 0; //��ʼ��Ϊ0��
        return m_Age;
    }
    void setAge(int age)
    {
        if(age < 0 || age > 150)
        {
            m_Age = 0;
            cout << "�������������!" << endl;
            return;
        }
            
        m_Age = age;
    }
    // �������� ֻд
    void setLover(string lover)
    {
        m_lover = lover;
    }
private:
    //����  �ɶ���д
    string m_Name;
    //����  ֻ��
    int m_Age;
    //����  ֻд
    string m_lover;

};
int main() {

    Person p;
    p.setName("sss");
    cout<< "He name is: " << p.getName() << endl;

    p.setAge(50);

    cout << "He age is " << p.getAge() << endl;

    p.setLover("����"); 

	// system("pause");
	return 0;
}
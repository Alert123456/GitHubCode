#include <iostream>
#include <string>
#include <vector>

using namespace std;

// class Screen;
// class Screen
// {
// public:
//     // typedef string::size_type pos;
//     //����һ��ȼ�
//     using pos = string::size_type;
//     Screen() = default; //��ΪScreen����һ�����캯��������������
//     // cursor�������ڳ�ʼֵ��ʼ��Ϊ0
//     Screen(pos ht, pos wd) : height(ht), width(wd), 
//         contents(ht * wd, ' ') { }
//     Screen(pos ht, pos wd, char c) : height(ht), width(wd), 
//         contents(ht * wd, c) { }
//     //��ʽ���� //��ȡ��괦���ַ�
//     inline char get() const {return contents[cursor];}  
//     //��ʽ����
//     inline char get(pos ht, pos wd) const {return contents[ht*width+wd];} 
//     void some_member() const;

//     //���ݶ����Ƿ�Ϊconst ����display����
//     Screen &display(ostream &os) 
//         { do_display(os); return *this; }
//     const Screen &display(ostream &os) const
//         { do_display(os); return *this; }
//     inline Screen &move(pos r, pos c);
//     inline Screen &set(char);
//     inline Screen &set(pos, pos, char );

//     //Window_mgr�ĳ�Ա���Է���Screen���˽�в���
//     friend class Window_mgr;
//     //Window_mgr::clear������Screen��֮ǰ������
//     // friend void Window_mgr::clear(ScreenIndex);
//     friend ostream& storeOn(ostream &, Screen &);
//     // friend BitMap& storeOn(BitMap &, Screen &);

//     pos size() const { return height * width; }
// private:
//     pos cursor = 0;
//     pos height = 0, width = 0;
//     string contents;
//     mutable size_t access_ctr;  //��ʹ��һ��const������Ҳ�ܱ��޸�
//     //�ú���������ʾScreen������
//     void do_display(ostream &os) const {os << contents;}
// };

// class Window_mgr 
// {

// public:
//     //������ÿ����Ļ�ı��
//     using ScreenIndex = vector<Screen>::size_type;
//     //���ձ�Ž�ָ����Screen����Ϊ�հ�
//     void clear(ScreenIndex);

//     //�򴰿����һ��Screen,�������ı��
//     ScreenIndex addScreen(const Screen&);

// private:
//     //���Window_mgr׷��Screen
//     //Ĭ������£�һ��Window_mgr����һ����׼�ߴ�Ŀհ�Screen
//     vector<Screen> screens{Screen(24, 80, ' ')};
// };

// //���ȴ��������ͣ�֮�����ǲŽ���Window_mgr��������
// Window_mgr::ScreenIndex Window_mgr::addScreen(const Screen &s)
// {
//     screens.push_back(s);
//     return screens.size() - 1;
// }

// extern ostream& storeOn(ostream &, Screen &);
// // extern BitMap& storeOn(BitMap &, Screen &);


// // Screen::pos Screen::size() const
// // {
// //     return height * width;
// // }

// inline void Window_mgr::clear(ScreenIndex i)
// {
//     // s��һ��Screen�����ã�ָ��������Ҫ��յ���Ļ
//     Screen &s = screens[i];
//     // ���Ǹ�ѡ����Screen����Ϊ�հ�
//     s.contents = string( s.height * s.width, ' ');
// }

// inline Screen &Screen::move(pos r, pos c)
// {
//     cursor = r * width + c;    //�����е�λ�� //�����ڽ�����ƶ���ָ������
//     return *this;
// }

// inline Screen &Screen::set(char c)
// {
//     contents[cursor] = c;   //���õ�ǰ�������λ�õ���ֵ
//     return *this;   //��this������Ϊ��ֵ����
// }
// inline Screen &Screen::set(pos r, pos col, char ch)
// {
//     contents[r*width + col] = ch;   //�趨����λ�õ���ֵ
//     return *this;       //��this������Ϊ��ֵ����
// }

// void Screen::some_member() const
// {
//     ++access_ctr;   //����һ������ֵ�����ڼ�¼��Ա���������õĴ���
// }

// // ������
// struct First 
// {
//     int memi;
//     int getMem();
// };
// struct Second
// {
//     int memi;
//     int getMem();
// };
// First obj1;
// // Second obj2 = obj1; //����obj1��obj2�����Ͳ�ͬ

// //��ϰ7.31
// class Y;
// class X;
// class X
// {
//     Y *y = nullptr;
// };
// class Y
// {
//     X x;
// };

//7.4 ���������

typedef double Money;
string bal;

class Account
{
public:
    Money balance() {return bal;} //balʹ�����ڲ���double��
private:
    Money bal;  
    // typedef double Money;//���ڲ��������ض���Money
};

class Screen
{
public: 
    typedef string::size_type pos;
    void demmy_fcn(pos height);
    void setHeight(pos);
    pos height = 0;

private: 
    pos cursor = 0;
    pos width = 0;
    // typedef string::size_type pos;
};

Screen::pos verify(Screen::pos);
void Screen::setHeight(pos var)
{
    height = verify(var);
}
void Screen::demmy_fcn(pos ht)
{
    cursor = width * height;
}
#include <iostream>
#include <string>
using namespace std;

// 设计立方体
// 1、创建立方体类
// 2、设计属性
// 3、设计行为 获取立方体体积与面积
// 4、分别利用全局函数和成员函数 判断两个立方体是否相等
class Cube
{
public:
	// 行为
	// 设置长
	void setL(int l)
	{
		m_L = l;
	}
	// 获取长
	int getL()
	{
		return m_L;
	}
	// 设置宽
	void setW(int w)
	{
		m_W = w;
	}
	// 获取宽
	int getW()
	{
		return m_W;
	}
	// 设置高
	void setH(int h)
	{
		m_H = h;
	}
	// 获取高
	int getH()
	{
		return m_H;
	}

	// 设置获取长宽高

	// 获取立方体面积
	int calculateS()
	{
		return 2 * m_L * m_W + 2 * m_H * m_W + 2 * m_L * m_H;
	}
	// 获取立方体体积
	int calculateV()
	{
		return m_H * m_L * m_W;
	}
	// 利用全局函数判断  两个立方体是否相等
	bool isSame(Cube &c)
	{
		if (m_L == c.getL() && m_H == c.getH() && m_W == c.getW())
			return true;
		return false;
	}

private:
	// 属性
	int m_L, m_W, m_H; // 长、宽、高
};

// 利用全局函数判断  两个立方体是否相等
bool isSame(Cube &c1, Cube &c2)
{
	if (c1.getL() == c2.getL() && c1.getH() == c2.getH() && c1.getW() == c2.getW())
		return true;
	return false;
}
int main()
{

	// 创建立方体对象
	Cube c1;
	c1.setL(10);
	c1.setW(10);
	c1.setH(10);

	cout << "c1的面积为:" << c1.calculateS() << endl;
	cout << "c1的体积为:" << c1.calculateV() << endl;

	// 创建第二个立方体
	Cube c2;
	c2.setL(10);
	c2.setW(10);
	c2.setH(5);
	//利用全局函数判断
	bool ret1 = isSame(c1, c2);
	if (ret1)
	{
		cout << "利用全局函数判断:" << "c1 和 c2 是相等的" << endl;
	}
	else
	{
		cout << "利用全局函数判断:" << "c1 和 c2 是不相等的" << endl;
	}
	//利用成员函数判断
	bool ret = c1.isSame(c2);
	if (ret)
	{
		cout << "利用成员函数判断:" << "c1 和 c2 是相等的" << endl;
	}
	else
	{
		cout << "利用成员函数判断:" << "c1 和 c2 是不相等的" << endl;
	}

	// system("pause");
	return 0;
}
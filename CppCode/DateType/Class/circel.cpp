#include "circle.h"

// 设置半径
void Circel::setR(int r)
{
    m_R = r;
}
// 获取半径
int Circel::get_R()
{
    return m_R;
}
// 设置圆心
void Circel::setCenter(Point center)
{
    m_Center = center;
}
// 获取圆心
Point Circel::getCenter()
{
    return m_Center;
}

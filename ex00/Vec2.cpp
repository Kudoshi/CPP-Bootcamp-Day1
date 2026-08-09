#include <iostream>
#include "Vec2.hpp"
#include <cmath>

float Vec2::length() const
{
    return sqrt(m_x * m_x + m_y * m_y);
}

Vec2 Vec2::plus(const Vec2& inVec) const
{
    float x = m_x + inVec.x();
    float y = m_y + inVec.y();
    return Vec2(x,y);
}
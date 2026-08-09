#pragma once

class Vec2 
{
    public:
        Vec2(float x, float y) : m_x(x), m_y(y) {}
        float x() const{ return m_x; }   
        float y() const{ return m_y; }
        void  setX(float v){ m_x = v; } 
        void setY(float v) { m_y = v; }
        float length() const;
        Vec2 plus(const Vec2&) const;
    private:
        float m_x;
        float m_y;

};
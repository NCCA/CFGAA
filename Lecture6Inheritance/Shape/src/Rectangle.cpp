#include "Rectangle.h"


Rectangle::Rectangle(float _w, float _h)
{
  m_width=_w;
  m_height=_h;
}

float Rectangle::getArea() const
{
  return m_width*m_height;
}


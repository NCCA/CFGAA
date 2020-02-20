#include "Shape.h"

void Shape::setWidth(float _w)
{
  m_width=_w;
}
void Shape::setHeight(float _h)
{
  m_height=_h;
}

float Shape::width() const
{
  return m_width;
}
float Shape::height() const
{
  return m_height;
}

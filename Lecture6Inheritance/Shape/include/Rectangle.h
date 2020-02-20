#ifndef RECTANGLE_H_
#define RECTANGLE_H_

#include "Shape.h"

class Rectangle : public Shape
{
  public :
    Rectangle(float _w, float _h);
    ~Rectangle()=default;
    Rectangle(const Rectangle &)=default;
    float getArea() const;
};

#endif

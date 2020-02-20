#include <iostream>
#include "Rectangle.h"


int main()
{
  Rectangle r(10.0f,8.0f);
  std::cout<<"Area r is "<<r.getArea()<<'\n';

  auto r2=r;
  r2.setWidth(8.0f);
  r2.setHeight(2.0f);
  std::cout<<"Area r2 is "<<r2.getArea()<<'\n';


}

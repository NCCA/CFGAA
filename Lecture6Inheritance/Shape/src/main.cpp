#include <iostream>
#include "Shape.h"


int main()
{
  Shape s;
  s.setWidth(10);
  s.setHeight(20);
  std::cout<<"Shape "<<s.width()<<' '<<s.height()<<'\n';
}

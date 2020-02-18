#include <iostream>
#include <cstdlib>

#include "Mem.h"

int main()
{

  Mem a(4);
  for (int i=0; i<4; ++i)
  {
    a.set(i,i);
  }

  Mem b=a;
  Mem c(a);
  b.set(0,99);
  c.set(0,299);

  std::cout<<"Printing A"<<std::endl;
  a.print();
  std::cout<<"Printing b"<<std::endl;
  b.print();
  std::cout<<"Printing c"<<std::endl;
  c.print();
  return EXIT_SUCCESS;
}





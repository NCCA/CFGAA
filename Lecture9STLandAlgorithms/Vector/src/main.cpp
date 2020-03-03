#include "Vector.h"
#include <iostream>
#include <cstdlib>


int main()
{
  std::cout<<"Vector Test\n";
  Vector v1(1,2,3);
  Vector v2(2,3,4);
  Vector *v3=new Vector(2,3,4);

  std::cout<<v1<<v2<<v3<<"\n";


  std::cout<<v1<<v2<<"\n";
  v1+=v2;
  std::cout<<v2<<"\n";
  v2[0]=10;
  std::cout<<v2[0]<<"\n";

  return EXIT_SUCCESS;

}

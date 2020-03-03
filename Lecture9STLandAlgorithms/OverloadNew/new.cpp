#include <iostream>
#include <cstdlib>
#include "CustomNew.h"
#include <memory>

int main()
{

  std::cout<<MAGENTA<<"Raw Pointer\n";
  char * data = new char [10];
  delete [] data;
  std::cout<<MAGENTA<<"Smart Pointer \n";
  std::unique_ptr<int []> smart(new int [10]);

  std::cout<<MAGENTA<<"Smart Pointer std::make_unique<>\n";
  std::unique_ptr<int []> smart2=std::make_unique<int[]>(250);
  
  return EXIT_SUCCESS;

}
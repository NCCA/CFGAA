#include <iostream>
#include <cstdlib>

int main()
{

union  
{
  int l;
  struct 
  {
    short hi;
    short lo;
  } s;
  char c[4];
} mix;

	mix.l=1345678;
	std::cout<<mix.s.hi<<" "<<mix.s.lo<<"\n";
	std::cout<<(int)mix.c[0]<<" "
					 <<(int)mix.c[1]<<" "
					 <<(int)mix.c[2]<<" "
					 <<(int)mix.c[3]<<"\n";

}
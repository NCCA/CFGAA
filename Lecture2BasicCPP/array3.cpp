#include <iostream>
#include <cstdlib>

int main()
{
	char XO[3][3]={
									{'-','-','-'},
									{'-','-','-'},
									{'-','-','-'},
							 };


  XO[1][2]='O';
  int x,y;

  for(y=0; y<3; ++y)
  {
  	for(x=0; x<3; ++x)
  	{
  		std::cout<<XO[y][x]<<' ';
  	}
	  std::cout<<'\n';
  }

	return EXIT_SUCCESS;
}

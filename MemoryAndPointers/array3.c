#include <stdio.h>
#include <stdlib.h>

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
  		printf("%c ",XO[y][x]);
  	}
  printf("\n");
  }

	return EXIT_SUCCESS;
}

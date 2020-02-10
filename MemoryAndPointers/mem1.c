#include <stdio.h>
#include <stdlib.h>



int globalVar=0;

int func(int _add)
{
	static int stat=0;
	return stat+=_add;
}

int main()
{
	int local=0;
	int i;
	for(i=0; i<10; ++i)
	{
		printf("static = %02d local= %02d global = %02d \n",func(i),local++,globalVar++);
	}
return EXIT_SUCCESS;
}

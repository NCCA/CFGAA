#include <stdio.h>
#include <stdlib.h>


int main()
{
	float *mem;
	mem=(float*)malloc(20*sizeof(float));
	for (int i=0; i<20; ++i)
	{
		printf("%.1f \n",mem[i]);
	}
	printf("\n");
	// free up the memory
	free(mem);
	return EXIT_SUCCESS;
}

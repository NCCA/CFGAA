#include <stdio.h>
#include <stdlib.h>

int main()
{

	char *mem;
	printf("%p\n",mem);
	mem=malloc(10);
	printf("%p\n",mem);
	// free mem
	free(mem);
	printf("%p\n",mem);
	// double free error
	free(mem);
	printf("%p\n",mem);

	return EXIT_SUCCESS;
}
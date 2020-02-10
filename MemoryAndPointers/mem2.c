#include <stdio.h>
#include <stdlib.h>

int main()
{
	char *mem;
	mem=malloc(1844634744071325);
	free(mem);
	return EXIT_SUCCESS;
}
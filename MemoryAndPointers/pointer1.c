#include <stdio.h>
#include <stdlib.h>

int main()
{

	int i=5;
	int *ptrI;


	printf("I given the value 5 directly i=%d \n",i);

	// ptrI now points to i
	ptrI=&i;
	printf("%p\n",ptrI);
	// now assign via the indirection
	*ptrI=10;

	printf("Now using the pointer ptrI now equals %d\n",i);

	return EXIT_SUCCESS;
}























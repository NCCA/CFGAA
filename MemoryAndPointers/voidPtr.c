#include <stdio.h>
#include <stdlib.h>

int main()
{
	// variables to hold our values
	int i;
	char c;
	float f;
	// our void pointer
	void  *ptrMorph;

	// point our pointer to i
	ptrMorph = &i;
	*((int *)ptrMorph) =10;

	// point our pointer to c
	ptrMorph =&c;
	*((char *)ptrMorph)='c';


	// point our pointer to f
	ptrMorph=&f;
	*((float *)ptrMorph)= 25.45f;

	printf("i=%d c=%c f=%f\n",i,c,f);
	for(int i=0; i<10; ++i)
		printf("%p \n",ptrMorph++)

	return EXIT_SUCCESS;

}
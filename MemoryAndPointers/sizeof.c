#include <stdio.h>
#include <stdlib.h>

int main()
{
	printf("sizeof(char)=%ld\n",sizeof(char));
	printf("sizeof(short int)=%ld\n",sizeof(short int));
	printf("sizeof(int)=%ld\n",sizeof(int));
	printf("sizeof(long int)=%ld\n",sizeof(long int));
	printf("sizeof(float)=%ld\n",sizeof(float));
	printf("sizeof(double)=%ld\n",sizeof(double));

	printf("sizeof(void*)=%ld\n",sizeof(void*));

	return EXIT_SUCCESS;
}

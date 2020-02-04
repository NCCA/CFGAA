#include <stdio.h>
#include <stdlib.h>

int main()
{
	printf("sizeof(char)= %ld \n",sizeof(char));
	printf("sizeof(short int)= %ld \n",sizeof(short int));
	printf("sizeof(int)= %ld \n",sizeof(int));
	printf("sizeof(size_t)= %ld \n",sizeof(size_t));
	printf("sizeof(long int)= %ld \n",sizeof(long int));
	printf("sizeof(float)= %ld \n",sizeof(float));
	printf("sizeof(double)= %ld \n",sizeof(double));

	printf("unsigned versions\n");

	printf("sizeof(unsigned char)= %ld \n",sizeof(unsigned char));
	printf("sizeof(unsigned short int)= %ld \n",sizeof(unsigned short int));
	printf("sizeof(unsigned int)= %ld \n",sizeof(unsigned int));
	printf("sizeof(unsigned long int)= %ld \n",sizeof(unsigned long int));

	return EXIT_SUCCESS;
}
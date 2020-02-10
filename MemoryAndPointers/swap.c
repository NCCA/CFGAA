#include <stdio.h>
#include <stdlib.h>


void swap(int *a, int *b)
{
	int tmp=*b;
	*b=*a;
	*a=tmp;
}

int main()
{
	int a=10;
	int b=20;
	printf("%d %d \n",a,b);
	swap(&a,&b);
	printf("%d %d \n",a,b);





}
#include <stdio.h>

int g_data;

void foo(int i)
{
	//static int i=0;
	++i;
	printf("%d\n",i);
	foo(i);
}


int main(int argc, char *argv[]) 
{
	foo(0);
	
}
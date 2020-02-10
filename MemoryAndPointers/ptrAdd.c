#include <stdio.h>
#include <stdlib.h>

int main()
{

int intArray[5]={32,65,1,399,9324};

int *ptrToArray;



ptrToArray=&intArray[4];

for (int i=0; i<=5; i++)
{

  printf("intArray value = %d", *ptrToArray);

  printf(" ptrToArray address= %p\n",ptrToArray);

  --ptrToArray;

}

return 1;

}
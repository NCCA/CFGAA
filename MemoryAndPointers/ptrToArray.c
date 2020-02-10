#include <stdio.h>
#include <stdlib.h>

int main()
{

	int intArray[5]={32,65,1,399,9324};

	int *ptrToArray;
  int *end;

	// as we are using an array we could use
	// ptrToArray=intArray; however the following is
	// more clear when getting the first element
	ptrToArray=&intArray[0];
  end=&intArray[5];
	// i for loop
	//for (int i=0; i<5; i++)
	while(ptrToArray !=end)
  {
		//printf("intArray value = %c \n",*ptrToArray);
	  //printf("ptrToArray address= %p \n",ptrToArray);
		printf("%d %p\n",*ptrToArray,ptrToArray);
		// increment the pointer to next cell
		ptrToArray++;
	}

	return EXIT_SUCCESS;

}
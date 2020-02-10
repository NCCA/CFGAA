#include <iostream>
#include <cstdlib>

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
	while(ptrToArray !=end)
  {
		std::cout<<"value "<< *ptrToArray<<" address "<<ptrToArray<<'\n';
		// increment the pointer to next cell
		ptrToArray++;
	}

	return EXIT_SUCCESS;

}
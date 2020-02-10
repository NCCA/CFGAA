#include <iostream>
#include <memory>
#include <cstdlib>


int main()
{
	int * mem;
	mem = new (std::nothrow) int [5];
	if (mem == nullptr) 
	{
  	// error assigning memory. Take measures.
		std::cerr<<"error allocating block\n";
		exit(EXIT_FAILURE);
	}

	delete [] mem;


}
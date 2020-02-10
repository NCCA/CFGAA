#include <iostream>
#include <cstdlib>

int main()
{
	std::cout<<"enter size of the array\n";
	int size;
	std::cin>>size;

	int *mem= new int[size];
	for(int i=0; i<size; ++i)
		mem[i]=i;

	for(int i=0; i<size; ++i)
		std::cout<<mem[i]<<"\n";

	delete [] mem;

}




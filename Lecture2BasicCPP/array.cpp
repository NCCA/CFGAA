#include <iostream>
#include <cstdlib>

int main()
{
	// array of vowels
	char vowels[5]={'a','e','i','o','u'};
	// the compiler will fill in how many values (25)
	int primesLT100[]={2,3,5,7,11,13,17,19,23,29,31,
										 37,41,43,47,53,59,61,67,71,73,
										 79,83,89,97};
	// index to our array
	int i;
	// loop and print out the values
	for(i=0; i<5; ++i)
	{
		std::cout<<vowels[i]<< ' ' ;
	}
	// newline
	std::cout<<'\n';

	// as we don't know how big the primes array is we need
	// to figure it out, sizeof will return how big the allocated
	// space is, however it is in bytes and an int takes up
	// sizeof(int) (usually 4) bytes so we need to div by this
	std::cout<<sizeof(primesLT100);
	int sizeOfArray=sizeof(primesLT100)/sizeof(int);
	std::cout<<" size of array "<<sizeOfArray<<"\n";
	// loop and print
	for(i=0; i<sizeOfArray; ++i)
	{
		std::cout<<primesLT100[i]<<' ';
	}
	std::cout<<'\n';
	return EXIT_SUCCESS;
}




























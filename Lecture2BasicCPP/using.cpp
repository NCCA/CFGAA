#include <iostream>
#include <cstdlib>

using Byte=char;
using Word=unsigned int;
using Real=float;

int main()
{

	Byte a='c';
	Word i=10;
	Real x=2.6;
	std::cout<<a<<' '<<i<<' '<<x<<'\n';
	return EXIT_SUCCESS;
}
#include <iostream>
#include <cstdlib>

int main()
{
 	int i=0;
 	char c='c';
 	double d=1.0;
 	float f=1.0;
	std::cout<<"i address is "<<&i<<'\n';
	std::cout<<"c address is "<<static_cast<void *>(&c)<<'\n';
	std::cout<<"d address is "<<&d<<'\n';
	std::cout<<"f address is "<<&f<<'\n';

	return EXIT_SUCCESS;
}

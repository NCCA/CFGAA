#include <iostream>
#include <cstdlib>

int main()
{
	std::cout<<"sizeof(char)="<<sizeof(char)<<'\n';
	std::cout<<"sizeof(short int)="<<sizeof(short int)<<'\n';
	std::cout<<"sizeof(int)="<<sizeof(int)<<'\n';
	std::cout<<"sizeof(long int)="<<sizeof(long int)<<'\n';
	std::cout<<"sizeof(float)="<<sizeof(float)<<'\n';
	std::cout<<"sizeof(double)="<<sizeof(double)<<'\n';

	std::cout<<"sizeof(void*)="<<sizeof(void*)<<'\n';
	std::cout<<"sizeof(int *)="<<sizeof(int *)<<'\n';

	return EXIT_SUCCESS;
}

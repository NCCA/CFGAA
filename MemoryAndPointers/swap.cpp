#include <iostream>
#include <cstdlib>


void swap(int &a, int &b)
{
	int tmp=b;
	b=a;
	a=tmp;
}

int main()
{
	int a=10;
	int b=20;
	std::cout<<a<<' '<<b<<'\n';
	swap(a,b);
	std::cout<<a<<' '<<b<<'\n';
	return EXIT_SUCCESS;
}
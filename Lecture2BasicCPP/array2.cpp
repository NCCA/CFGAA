#include <iostream>
#include <cstdlib>

int main()
{
	int array[4][12][23][5][9][2];
	array[0][1][2][3][1][0]=10;

	std::cout<<array[0][1][2][3][1][0]<<'\n';

	return EXIT_SUCCESS;
}

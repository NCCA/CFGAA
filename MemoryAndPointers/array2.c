#include <stdio.h>
#include <stdlib.h>

int main()
{
	int array[4][12][23][5][9][2];
	array[0][1][2][3][1][0]=10;

	printf("%d\n",array[0][1][2][3][1][0]);

	return EXIT_SUCCESS;
}

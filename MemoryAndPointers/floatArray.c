#include <stdio.h>
#include <stdlib.h>

int main()
{
	char c='a';
	float x[8]={16.0f,12.0f,6.0f,8.0f,2.5f,12.0f,14.0f,-54.5f};

	printf("%.1f \n",x[0]);

	printf("Modify cell 3\n");
	printf("%.1f \n",x[3]);
	x[3]=25.0f;
	printf("%.1f \n",x[3]);

	float sum=x[0]+x[1];
	printf("%f\n",sum);
	x[3]+=1.0;
	printf("%.1f \n",x[3]);

	x[2]=x[0]+x[1];
	printf("%.1f \n",x[2]);
	return EXIT_SUCCESS;
}




























#include <iostream>
#include <cstdlib>

int main()
{
	char c='a';
	float x[8]={16.0f,12.0f,6.0f,8.0f,2.5f,12.0f,14.0f,-54.5f};

	std::cout<<x[0]<<'\n';

	std::cout<<"Modify cell 3\n";
	std::cout<<x[3]<<'\n';
	x[3]=25.0f;
	std::cout<<x[3]<<'\n';

	float sum=x[0]+x[1];
	std::cout<<sum<<'\n';;
	x[3]+=1.0;
	std::cout<<x[3]<<'\n';

	x[2]=x[0]+x[1];
	std::cout<<x[2]<<'\n';
	return EXIT_SUCCESS;
}




























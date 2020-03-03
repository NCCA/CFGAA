#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>

int main()
{

	std::vector <int> randomNumbers(10);
  srand(time(nullptr));
	std::generate(std::begin(randomNumbers),std::end(randomNumbers),std::rand);

	for (auto n : randomNumbers)
		std::cout<<n<<' ';
	std::cout<<'\n';

	int n = {0};
  std::generate(std::begin(randomNumbers),std::end(randomNumbers), 
	[&n]{ return n++; });
	
	
	for (auto n : randomNumbers)
			std::cout<<n<<' ';
		std::cout<<'\n';

}









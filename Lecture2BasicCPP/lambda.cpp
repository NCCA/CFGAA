#include <algorithm>
#include <iostream>
#include <vector>
#include <numeric>

int main()
{
	// Create a vector object that contains 10 elements.
	std::vector<int> v(10);
	// use iota to fill 
	std::iota(std::begin(v), std::end(v),0);

	int evenCount = 0;
	int total = 0;

	auto countEvenOdd=[&evenCount,&total] (int n)
	{
		std::cout << n;

		if (n % 2 == 0)
		{
			std::cout << " is even \n";
			++evenCount;
		}
		else
		{
			std::cout << " is odd\n" ;
		}
		++total;
	};


//std::for_each(std::begin(v), std::end(v),countEvenOdd );

std::for_each(std::begin(v), std::end(v),
[&evenCount,&total] (int n)
{
	if (n % 2 == 0)
	{
		++evenCount;
	}
	++total;
} );


std::cout << "There are " << evenCount
<< " even numbers in the vector out of "<<total<<" elements\n";

}








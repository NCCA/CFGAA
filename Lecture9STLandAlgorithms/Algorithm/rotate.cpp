#include <iostream>
#include <cstdlib>
#include <vector>
#include <algorithm>

int main()
{
	std::vector<int> v(10);
	for(int i=0; i<v.size(); ++i)
	{
		v[i]=i;
	}
	std::copy(v.begin(), v.end(), std::ostream_iterator<int>(std::cout ));
	std::cout<<std::endl;
	std::rotate(v.begin(), v.begin() + 1, v.end());
	std::copy(v.begin(), v.end(), std::ostream_iterator<int>(std::cout ));
	std::cout<<std::endl;
  std::rotate(v.rbegin(), v.rbegin() + 5, v.rend());
	std::copy(v.begin(), v.end(), std::ostream_iterator<int>(std::cout));
	std::cout<<std::endl;
	// insertion sort
	 // insertion sort
  for (std::vector<int>::iterator i = v.begin(); i != v.end(); ++i)
  {
        std::rotate(std::upper_bound(v.begin(), i, *i), i, i+1);
  }
  std::copy(v.begin(), v.end(), std::ostream_iterator<int>(std::cout));
	std::cout<<std::endl;
	
	return EXIT_SUCCESS;
}
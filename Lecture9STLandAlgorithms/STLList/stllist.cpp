#include <iostream>
#include <list>
#include <algorithm>
#include <cstdlib>


int main()
{
	std::list <float> toSort;

	toSort.push_back(2.0f);
	toSort.push_back(9.0f);
	toSort.push_back(2.1f);
	toSort.push_front(12.0f);
	toSort.push_front(3.0f);
	toSort.push_front(3.0f);

	for(auto i : toSort)
		std::cout<<i<<'\n';

	toSort.sort();
	std::cout <<"Sorted\n";
	
	std::for_each(std::begin(toSort),std::end(toSort),[](float i){std::cout<<i<<'\n';});
	
	
	
	std::cout <<"Sorted\n";
	std::for_each(std::begin(toSort),std::end(toSort),[](float i){std::cout<<i<<'\n';});
	std::cout <<"reverse \n" ;
	toSort.reverse();
	std::for_each(std::begin(toSort),std::end(toSort),[](float i){std::cout<<i<<'\n';});

	std::cout <<"Front method "<<toSort.front()<<'\n';
	std::cout <<"Back method "<<toSort.back()<<'\n';
	std::cout << "Clear List\n";
	toSort.clear();
	std::cout <<"Add some more values "<<std::endl;
	toSort.push_front(12.0);
	toSort.push_front(3.0);
	toSort.push_front(3.0);
	std::for_each(std::begin(toSort),std::end(toSort),[](float i){std::cout<<i<<'\n';});

	std::cout <<"Now remove unique values"<<std::endl;
	toSort.unique();
	std::for_each(std::begin(toSort),std::end(toSort),[](float i){std::cout<<i<<'\n';});


	toSort.clear();
	std::for_each(std::begin(toSort),std::end(toSort),[](float i){std::cout<<i<<'\n';});
	
	return EXIT_SUCCESS;
}


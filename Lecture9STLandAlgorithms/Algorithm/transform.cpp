#include <iostream>
#include <list>
#include <vector>	
#include <algorithm>

int main()
{

	std::vector <int> myList;
	myList.push_back(2);
	myList.push_back(4);
	myList.push_back(5);
	myList.push_back(6);
	myList.push_back(2);

	std::vector <int> secondList;
	secondList.resize(myList.size());

	std::for_each(std::begin(myList),std::end(myList),[](int n){std::cout<<n<<'\n';});

	std::transform(std::begin(myList),std::end(myList),std::begin(secondList),[](int &n){return n*2;});
	std::cout<<"second\n";
	std::for_each(std::begin(secondList),std::end(secondList),[](int n){std::cout<<n<<'\n';});

}












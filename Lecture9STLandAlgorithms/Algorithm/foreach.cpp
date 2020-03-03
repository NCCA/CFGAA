#include <iostream>
#include <list>
#include <algorithm>
#include <string>

void printFunc(const std::string &i)
{
	std::cout<<i<<'\n';
}

int main()
{

	std::list <std::string> myList;

	myList.push_back("2");
	myList.push_back("asdasd4");
	myList.push_back("2	asd");
	myList.push_back("skdfjhsdfkjhkj");
	myList.push_back("sdfsdhfkjsdhf");

	//std::for_each(std::begin(myList),std::end(myList),printFunc);
	
	
	 std::for_each(std::begin(myList),std::end(myList),[](std::string &_n){ std::cout<<_n<<'\n';});
	 
	std::cout<<"2 appears "<<std::count(myList.begin(),myList.end(),"2")<<"times\n";

}














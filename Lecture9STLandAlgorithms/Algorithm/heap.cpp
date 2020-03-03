#include <iostream>
#include <vector>
#include <algorithm>

void printFunc(int i)
{
	std::cout<<i<<"\n";
}

int main()
{

	std::vector <int> data;
	data.push_back(2);
	data.push_back(4);
	data.push_back(5);
	data.push_back(6);
	data.push_back(2);
	std::for_each(data.begin(),data.end(),printFunc);

	std::make_heap (data.begin(),data.end());
  std::cout << "max heap   : " << data.front() << std::endl;
	std::sort_heap (data.begin(),data.end());
	std::for_each(data.begin(),data.end(),printFunc);
	std::cout<<"doing push back\n";
	data.push_back(99);
	std::push_heap (data.begin(),data.end());

	std::for_each(data.begin(),data.end(),printFunc);

}
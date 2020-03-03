#include <iostream>
#include <queue>
#include <algorithm>

int randNum()
{
	return rand()%100;
}



int main()
{

	std::priority_queue < int, std::vector<int>, std::greater<int> > data;
	std::priority_queue < int > data2;

	for(int i=0; i<10; ++i)
	{
		data.push(randNum());
		data2.push(randNum());

	}
	unsigned int size=data.size();
	for(unsigned int i=0; i<size; ++i)
	{
		std::cout<<data.top()<<" "<<data2.top()<<"\n";
		data.pop();
		data2.pop();
	}
}
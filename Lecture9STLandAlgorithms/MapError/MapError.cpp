#include <iostream>
#include <cstdlib>
#include <map>
#include <string>

int main()
{
	std::map<int,std::string> map;
	map[0]="this is a value";
	std::cout<<map.size()<<"\n";
	for(int i=1; i<20; ++i)
	{
		std::cout<<map[i]<<" >"<<map.size()<<"\n";
	}
	map.clear();
	map[0]="reset";
	for(int i=0; i<20; ++i)
	{

		std::cout<<"size "<<map.size()<<"\n";
		auto it=map.find(i);
	  if(it !=map.end())
	  {
	  	std::cout<<"found value "<<it->second<<"\n";
	  }

	}
	return EXIT_SUCCESS;
}







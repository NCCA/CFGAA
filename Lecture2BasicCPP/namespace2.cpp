#include <iostream>
#include <cstdlib>

namespace graphics
{
	void print()
	{
		std::cout<<"graphics::print\n";
	}

};

namespace console
{
	void print()
	{
		std::cout<<"console::print\n";
	}

};

using namespace graphics;
using namespace console;


int  main()
{
  print();
	print();
}
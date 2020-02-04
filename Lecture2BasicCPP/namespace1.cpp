#include <iostream>
#include <cstdlib>

namespace graphics
{
	void print()
	{
		std::cout<<"graphics::print\n";
	}

}

namespace console
{
	void print()
	{
		std::cout<<"console::print\n";
	}

}

namespace graphics
{
  void debug()
  {
    std::cout<<"graphics::debug\n";
  }
}


int  main()
{
	graphics::print();
	console::print();
	graphics::debug();
}
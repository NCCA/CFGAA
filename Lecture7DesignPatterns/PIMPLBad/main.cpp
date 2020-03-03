/// modifed from Martin Reddy book
/// See http://APIBook.com/ for the latest version.

#include "autotimer.h"
#include <iostream>
#include <cstdlib>


int main(int, char **)
{
  AutoTimer timer("MyTimer");

	for (int i = 0; i < 1000; ++i)
	{
    std::cout << ".";
	}
  std::cout << std::endl;

  return EXIT_SUCCESS;
}

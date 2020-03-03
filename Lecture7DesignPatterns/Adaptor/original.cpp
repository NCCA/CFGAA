/// See http://APIBook.com/ for the latest version.
///

#include "original.h"
#include <iostream>


void Original::doOperation(int value, bool extra_arg)
{
  std::cout << "In Original::DoSomething with value " << value;
  std::cout << " and flag " << extra_arg << '\n';
}

/// See http://APIBook.com/ for the latest version.

#include "adapter.h"
#include <cstdlib>
int main(int, char **)
{
	// create an adapter object and call one of its functions
	Adapter adapter;
	adapter.doSomething(42);

  return EXIT_SUCCESS;
}

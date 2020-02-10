#include <iostream>
#include <cstdlib>
#include <execinfo.h>
#include <cxxabi.h>
#include <unistd.h>

void foo();
void bar(int);
void trace();

int main()
{
	trace();
	foo();
}

void bar(int a)
{	
	std::cout<<"in bar trace()\n";

	trace();
}


void foo()
{
	std::cout<<"in foo trace()\n";
	trace();
	bar(10);
}

void trace()
{
	void* callstack[128];
	int frames = backtrace(callstack, 128);
	char** strs = backtrace_symbols(callstack, frames);
	for (int i = 0; i < frames; ++i) 
	{
	   std::cout<<strs[i]<<'\n';
	}
	free(strs);
}
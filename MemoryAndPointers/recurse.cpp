#include <iostream>
#include <cstdlib>
#include <execinfo.h>
#include <cxxabi.h>
#include <unistd.h>
void trace()
{
// void *array[10];
//   size_t size;

//   // get void*'s for all entries on the stack
//   size = backtrace(array, 10);

//   // print out all the frames to stderr
//   backtrace_symbols_fd(array, size, STDERR_FILENO);
void* callstack[128];
int i, frames = backtrace(callstack, 128);
char** strs = backtrace_symbols(callstack, frames);
for (i = 0; i < frames; ++i) 
{
   printf("%s\n", strs[i]);
}
free(strs);

}



int fact( int n ) 
{
	trace();
	if ( n == 0 )
		return 1 ;
	else
		return fact( n - 1 ) * n ;
}


int main()
{
	fact(-1);
}





// from http://stackoverflow.com/questions/1765969/unable-to-locate-definition-of-etext-edata-end
//http://stackoverflow.com/questions/4308996/finding-the-address-range-of-the-data-segment
#include <stdio.h>
#include <stdlib.h>

/* these are in no header file, and on some
systems they have a _ prepended
These symbols have to be typed to keep the compiler happy
Also check out brk() and sbrk() for information
about heap */
#ifdef __APPLE__
	#include <mach-o/getsect.h>
#endif

extern char  etext, edata, end;

int
main(int argc, char **argv)
{
		#ifdef __linux__
			printf("First address beyond:\n");
			printf("    program text segment(etext)      %10p\n", &etext);
			printf("    initialized data segment(edata)  %10p\n", &edata);
			printf("    uninitialized data segment (end) %10p\n", &end);
		#endif

		#ifdef __APPLE__
	  	printf("    program text (etext)      %10p\n", (void*)get_etext());
    	printf("    initialized data (edata)  %10p\n", (void*)get_edata());
    	printf("    uninitialized data (end)  %10p\n", (void*)get_end());
		#endif


    return EXIT_SUCCESS;
}
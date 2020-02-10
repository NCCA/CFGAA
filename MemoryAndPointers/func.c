#include <stdio.h>
#include <stdlib.h>

void foo(int i)
{
  printf("foo %d\n",i);
}


int main(int argc, char *argv[]) 
{
  foo(2);
  printf("%p\n",&foo);
  void (*functionPtr)(int);
  functionPtr = &foo;
  printf("%p\n",functionPtr);
  functionPtr(6);
  return EXIT_SUCCESS;
}
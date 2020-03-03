#ifndef CUSTOMNEW_H_
#define CUSTOMNEW_H_
#include <iostream>
#include <cstdlib>
#include "TerminalColours.h"

void * operator new(size_t size)
{
  void *ptr=std::malloc(size);
  std::cout<<RED<<"Custom New allocating "<<YELLOW<<size<<RED<<" bytes at "<<YELLOW<<ptr<<RESET<<'\n';
  return ptr;
  
}


void operator delete(void *ptr) noexcept
{
  std::cout<<RED<<"Custom delete called on "<<YELLOW<<ptr<<RESET<<'\n';
  std::free(ptr);
}

#endif
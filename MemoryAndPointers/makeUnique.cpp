#include <iostream>
#include <memory>
#include <cstdlib>
#include <algorithm>
#include <numeric>

// on mac use clang++ -std=c++14  -stdlib=libc++ makeUnique.cpp
int main()
{
  constexpr size_t size=10;

  std::unique_ptr<int  []> data = std::make_unique<int[]>(size);
  std::iota(&data[0],&data[size],0);
  for(int i=0; i<size; ++i)
    std::cout<<data[i]<<'\n';
  return EXIT_SUCCESS;
}
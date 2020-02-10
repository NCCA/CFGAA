#include <iostream>
#include <memory>
#include <cstdlib>
#include <algorithm>
#include <numeric>

int main()
{
  constexpr size_t size=10;
  std::unique_ptr<int  []> data ( new int [size]);
  std::iota(&data[0],&data[size],0);
  for(int i=0; i<size; ++i)
    std::cout<<data[i]<<'\n';
  return EXIT_SUCCESS;
}
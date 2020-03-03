#include <iostream>
#include <algorithm>
#include <numeric>
#include <vector>
#include <cstdlib>

bool isOdd (int i) { return ((i%2)==1); }

int main ()
{
  int mycount;

  std::vector<int> myvector(10123123);
  // for (int i=0; i<10123123; ++i)
  // 	myvector.push_back(i);
  std::iota(std::begin(myvector),std::end(myvector),0);
  mycount = (int) std::count_if (std::begin(myvector), std::end(myvector), isOdd);
  std::cout << "myvector contains " << mycount  << " odd values.\n";
  // with lambda
  mycount = (int) std::count_if (std::begin(myvector), std::end(myvector), 
  [](int i){return ((i%2)==1);});
  std::cout << "myvector contains " << mycount  << " odd values.\n";


  return EXIT_SUCCESS;
}
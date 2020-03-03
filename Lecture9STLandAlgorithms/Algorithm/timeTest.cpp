#include <cstdlib>
#include <ctime>
#include <iostream>
#include <iterator>
#include <list>
#include <vector>
#include <algorithm>

const static int NUMELS=10000;
inline bool lt (int i,int j) { return (i<j); }

int randNum()
{
	return rand()%100;
}

int main ()
{
  clock_t now;
  double vector_time, list_time;
  double SECS_PER_CLOCK = 1.0 / ((double) CLOCKS_PER_SEC);

  // Generate a vector of random numbers
  std::vector<int> myvector (NUMELS, 0);
  std::generate(myvector.begin(), myvector.end(), randNum);
  now = clock();
  std::sort (myvector.begin(), myvector.end(), lt);
  vector_time = (float) (clock() - now) * SECS_PER_CLOCK;


  // Generate a list of random numbers
  std::list<int> mylist;
  for (int i=0; i<NUMELS; ++i) mylist.push_back(rand());
  now = clock();
  mylist.sort(lt);
  list_time = (double) (clock() - now) * SECS_PER_CLOCK;

  std::cout << "vector<int> sort time: "<<vector_time<< "seconds\n";
  //copy(myvector.begin(), myvector.end(), ostream_iterator<int>(cout, "\t"));
  std::cout << "list<int> sort time: "<<list_time<< "seconds\n";
  //copy(mylist.begin(), mylist.end(), std::ostream_iterator<int>(std::cout, "\n"));
  return 0;
}



#include <iostream>


int main()
{
	int  a[]={1,2,3,4,5,6};
  int*  pa=&a[0];

  int x=*pa;



  std::cout<<x<<"\n";
  *pa=99;
  pa=99;
  x=*pa;
  std::cout<<x<<"\n";

}
#include <iostream>
#include <vector>
#include <memory>
#include "Mem.h"

int main()
{
/*
  {
    std::cout<<"**********************************\n";
    std::cout<<"scoped std::vector auto\n";

    Mem a(10,'a');
    Mem b(10,'b');
    std::cout<<"create v\n";
    std::vector<Mem>v(2);
    std::cout<<"push back\n";
    v.push_back(a);
    v.push_back(b);
    v[0]=a;
    v[1]=b;
  }

  std::cout<<"end auto scope\n";
  std::cout<<"**********************************\n";


  {
    std::cout<<"**********************************\n";
    std::cout<<"scoped std::vector dynamic\n";

    std::vector<Mem *>v;
    v.push_back(new Mem(10,'a'));
    v.push_back(new Mem(10,'b'));
    v.clear();
    v.erase(v.begin(),v.end());
  }
  std::cout<<"end dynamic scope\n";
  std::cout<<"**********************************\n";

  {
    std::cout<<"**********************************\n";
    std::cout<<"scoped std::vector dynamic with delete\n";

    std::vector<Mem *>v;
    v.push_back(new Mem(10,'a'));
    v.push_back(new Mem(10,'b'));
    for(size_t i=0; i<v.size(); ++i)
      delete v[i];

    v.clear();
  }
  std::cout<<"end dynamic scope\n";
  std::cout<<"**********************************\n";

*/
  {
    std::cout<<"**********************************\n";
    std::cout<<"shared pointer\n";

    std::vector<std::unique_ptr<Mem > >v;
    v.push_back( std::unique_ptr<Mem >(new Mem(10,'a')) );
    v.push_back( std::unique_ptr<Mem >(new Mem(10,'b')) );
    std::cout<<"clear\n";
    v.clear();
    std::cout<<"after clear\n";
  }
  std::cout<<"end smart pointer scope\n";
  std::cout<<"**********************************\n";

}

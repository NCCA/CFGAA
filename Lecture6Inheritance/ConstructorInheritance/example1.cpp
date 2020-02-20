#include <iostream>

class Base
{
  public :
    Base(){std::cout<<"Base Ctor\n";}
    ~Base(){std::cout<<"Base dtor\n";}
};

class Derived : public  Base
{
  public :
    Derived() {std::cout<<"Derived ctor\n";}
    ~Derived() {std::cout<<"Derived dtor\n";}

};

int main()
{
  {
    std::cout<<"constructing Base b\n";
    Base b;
  }
  std::cout<<"\n\n";

  {
    std::cout<<"constructing Base b\n";
    Derived d;
  }

}
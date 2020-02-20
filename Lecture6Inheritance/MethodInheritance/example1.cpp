#include <iostream>

class Base
{
  public :
    Base(){std::cout<<"Base Ctor\n";}
    ~Base(){std::cout<<"Base dtor\n";}
    void whoAmI() const {std::cout<<"I am Base\n";}
};

class Derived : public  Base
{
  public :
    Derived() {std::cout<<"Derived ctor\n";}
    ~Derived() {std::cout<<"Derived dtor\n";}
    void whoAmI() const {std::cout<<"I am Derived\n";}

};

int main()
{
  {
    std::cout<<"constructing Base b\n";
    Base b;
    b.whoAmI();
  }
  std::cout<<"\n\n";

  {
    std::cout<<"constructing Derived b\n";
    Derived d;
    d.whoAmI();
  }
  std::cout<<'\n';
  {
    std::cout<< "construct Derived as Base \n";
    Base *ptr = new Derived;
    ptr->whoAmI();
    delete ptr;
  }

}
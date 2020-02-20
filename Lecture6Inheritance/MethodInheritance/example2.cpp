#include <iostream>

class Base
{
  public :
    Base(){std::cout<<"Base Ctor\n";}
    ~Base(){std::cout<<"Base dtor\n";}
    virtual void whoAmI() const {std::cout<<"I am Base\n";}
};

class Derived1 : public  Base
{
  public :
    Derived1() {std::cout<<"Derived1 ctor\n";}
    ~Derived1() {std::cout<<"Derived1 dtor\n";}
    virtual void whoAmI() const override {std::cout<<"I am Derived1\n";}

};

class Derived2 : public  Base
{
  public :
    Derived2() {std::cout<<"Derived2 ctor\n";}
    ~Derived2() {std::cout<<"Derived2 dtor\n";}
    virtual void whoAmI() const override {std::cout<<"I am Derived2\n";}

};


int main()
{
  {
    std::cout<< "construct Derived1 as Base \n";
    Base *ptr = new Derived1;
    ptr->whoAmI();
    delete ptr;
    std::cout<< "\nconstruct Derived2 as Base \n";
    ptr = new Derived2;
    ptr->whoAmI();
    delete ptr;
    std::cout<< "\nconstruct Base as Base \n";
    ptr = new Base;
    ptr->whoAmI();
    delete ptr;
    
  }

}
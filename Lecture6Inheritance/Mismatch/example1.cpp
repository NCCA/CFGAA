#include <iostream>
#include <string>
class Base
{
  public : 
    Base()=default;
    virtual void whoAmI(const std::string &_name)
    {
      std::cout<<"std::string version Base "<<_name<<'\n';
    }
};

class Derived : public Base
{
  public : 
    Derived()=default;
    virtual void whoAmI(const char *_name) override
    {
      std::cout<<"const char * Derived "<<_name<<'\n';
    }
};

int main()
{
  Base b;
  b.whoAmI("instance b");
  Derived d;
  d.whoAmI("instance d");

}
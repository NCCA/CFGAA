#include <iostream>

#include <iostream>

class Base
{
  public :
    Base()=default;
    Base(int _a) : m_a{_a} 
    {
      std::cout<<"Base Ctor "<<m_a<<'\n';
    }
    ~Base(){std::cout<<"Base dtor\n";}
  protected :
    int m_a=0;

};

class Derived : public  Base
{
  public :
    Derived()=default;
    Derived(int _a,int _b) : Base(_a), m_b{_b}
    {
      std::cout<<"Derived ctor "<<m_a<<' '<<m_b<<'\n';
    }
    ~Derived() {std::cout<<"Derived dtor\n";}

  protected :
    int m_b=0;
};

int main()
{
  {
    std::cout<<"constructing Base b\n";
    Base b(1);
  }
  std::cout<<"\n\n";

  {
    std::cout<<"constructing Derived b\n";
    Derived d(2,4);
  }

  {
    Base b;
  }
  {
    Derived d;
  }


}
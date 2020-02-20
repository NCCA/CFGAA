#include <iostream>

class AbstractNumber
{
  public : 
    AbstractNumber(int _v) : m_v{_v}{}
    ~AbstractNumber()=default;
    virtual void printValue() const = 0;
  protected :
    int m_v;
};

class Decimal : public  AbstractNumber
{
  public :
    Decimal(int _v) : AbstractNumber(_v) {}
    virtual void printValue() const {std::cout<<"Decimal is "<<m_v<<'\n';}
};

int main()
{
  Decimal n(100);
  n.printValue();
}
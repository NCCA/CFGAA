#include <iostream>

class AbstractNumber
{
  public : 
    AbstractNumber(int _v) : m_v{_v}{}
    ~AbstractNumber()=default;
    virtual void printValue() const = 0;
  private :
    int m_v;
};

int main()
{
  AbstractNumber n(100);
}
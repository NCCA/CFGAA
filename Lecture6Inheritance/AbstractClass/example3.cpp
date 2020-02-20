#include <iostream>
#include <memory>

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
    virtual void printValue() const override {std::cout<<"Decimal is "<<std::dec<<m_v<<'\n';}
};

class Hex : public  AbstractNumber
{
  public :
    Hex(int _v) : AbstractNumber(_v) {}
    virtual void printValue() const override {std::cout<<"Hex is "<< std::hex<<m_v<<'\n';}
};

class Octal : public  AbstractNumber
{
  public :
    Octal(int _v) : AbstractNumber(_v) {}
    virtual void printValue() const override {std::cout<<"Octal is "<< std::oct<<m_v<<'\n';}
};
int main()
{
  std::unique_ptr<AbstractNumber> number; 
  number.reset(new Hex(255));
  number->printValue();
  number = std::make_unique<Octal>(Octal(255));
  number->printValue();
  number = std::make_unique<Decimal>(Decimal(255));
  number->printValue();
  
}
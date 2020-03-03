#ifndef PROTOTYPE_H_
#define PROTOTYPE_H_
// based on example http://en.wikipedia.org/wiki/Prototype_pattern
#include <iostream>

// Prototype
class Prototype
{
public:
    virtual ~Prototype() { }

    virtual Prototype* clone() const = 0;
};

// Concrete prototype
class ConcretePrototype : public Prototype
{
public:
    ConcretePrototype(int _x) : m_x(_x) { }

    ConcretePrototype(const ConcretePrototype& _p) : m_x(_p.m_x) { }

    virtual Prototype* clone() const { return new ConcretePrototype(*this); }

    void setX(int _x) { m_x = _x; }

    int getX() const { return m_x; }

    void printX() const { std::cout << "Value :" << m_x << std::endl; }

private:
    int m_x;
};

#endif


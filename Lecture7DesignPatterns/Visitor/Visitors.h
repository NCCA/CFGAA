#include <iostream>
#include <string>


class Visitor;

class Element
{
  public:
    virtual void accept(class Visitor &v) = 0;
    virtual ~Element()=default;
};

class A: public Element
{
  public:
     void accept(Visitor &v);
    std::string a()
    {
        return "class A";
    }
};

class B: public Element
{
  public:
    void accept(Visitor &v);
    std::string b()
    {
        return "class B";
    }
};

class C: public Element
{
  public:
    void accept(Visitor &v);
    std::string c()
    {
        return "class C";
    }
};




class Visitor
{
  public:
    virtual void visit(A *e) = 0;
    virtual void visit(B *e) = 0;
    virtual void visit(C *e) = 0;
};


void A::accept(Visitor &v)
{
 v.visit(this);
}

void B::accept(Visitor &v)
{
 v.visit(this);
}

void C::accept(Visitor &v)
{
 v.visit(this);
}


class SomeOperation: public Visitor
{
    void visit(A *e)
    {
        std::cout << "someOperation on " + e->a() << '\n';
    }
    void visit(B *e)
    {
        std::cout << "someOperation on " + e->b() << '\n';
    }
    void visit(C *e)
    {
        std::cout << "someOperation on " + e->c() << '\n';
    }
};


class SomeOtherOp: public Visitor
{
    void visit(A *e)
    {
        std::cout << "SomeOtherOp on " + e->a() << '\n';
    }
    void visit(B *e)
    {
        std::cout << "SomeOtherOp on " + e->b() << '\n';
    }
    void visit(C *e)
    {
        std::cout << "SomeOtherOp on " + e->c() << '\n';
    }
};




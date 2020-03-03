#include <iostream>
#include "CustomNew.h"
#include <memory>
#include <vector>

class Point
{
  public :
    Point()
    {
      std::cout<<"defalt ctor\n";
    }
    ~Point()
    {
      std::cout<<"destructor "<<this<<'\n';
    }
    Point(float _x, float _y):m_x(_x),m_y(_y) 
    {
      std::cout<<"User Defined ctor\n";
    }
    Point(const Point &p ):m_x(p.m_x),m_y(p.m_y) 
    {
      std::cout<<"Copy ctor\n";
    }
    Point & operator = (Point &p) 
    {
      m_x=p.m_x;
      m_y=p.m_y;
      std::cout<<"Assignment Operator \n";
      return *this;
    }
    Point(const Point &&p ) 
    {
      std::cout<<"Move ctor\n";
      m_x=p.m_x;
      m_y=p.m_y;
      
//      *this = std::move(p); 
    }
    Point & operator =(Point && p)
    {
      std::cout<<"Move assignment\n";
      m_x=std::move(p.m_x);
      m_y=std::move(p.m_y);
      
      return *this;
    }

    private :
      float m_x=0;
      float m_y=0;
};

std::unique_ptr<Point> makePoint()
{
  return std::unique_ptr<Point>(new Point);
}

int main()
{
  std::cout<<YELLOW<<"Construct two points on stack "<<RESET<<'\n';
  Point a,b;
  std::cout<<YELLOW<<"call std::move "<<RESET<<'\n';
  b=std::move(a);
  std::cout<<YELLOW<<"Make Unique "<<RESET<<'\n';
  std::unique_ptr<Point> test=makePoint();
  
  std::cout<<YELLOW<<"copy to new Pointer "<<RESET<<'\n';
  std::unique_ptr<Point> copy(std::move(test));
  
  std::cout<<YELLOW<<"construct vector with 5 "<<RESET<<'\n';
  std::vector<Point> vec(5);
  Point emp={2,3};
  vec.emplace_back(emp);
  vec.push_back(emp);
  std::cout<<YELLOW<<"Calling clear on Vector "<<RESET<<'\n';
  vec.clear();
  std::cout<<YELLOW<<"Calling resize on Vector "<<RESET<<'\n';
  vec.resize(8);
  return EXIT_SUCCESS;
}
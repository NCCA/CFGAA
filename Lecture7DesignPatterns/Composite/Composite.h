#include<iostream>
#include<string>
#include<vector>


//The Component
class DrawingElement
{
public:
  DrawingElement(std::string _name) : m_name(_name) {};
  virtual void Add(DrawingElement* _d) = 0;
  virtual void Remove(DrawingElement* _d) = 0;
  virtual void Display(int _indent) = 0;
  virtual ~DrawingElement() {};
protected:
  std::string m_name;
private:
  // no default ctor
  DrawingElement();
};

//The 'Leaf' class
class PrimitiveElement : public DrawingElement
{
public:
  PrimitiveElement(std::string _name) : DrawingElement(_name){};
  void Add(DrawingElement* _d)
  {
    std::cout<<"Cannot add to a PrimitiveElement"<<std::endl;
  }
  void Remove(DrawingElement* _d)
  {
    std::cout<<"Cannot remove from a PrimitiveElement"<<std::endl;
  }
  void Display(int _indent)
  {
    std::string newStr(_indent, '-');
    std::cout << newStr << " " << m_name <<std::endl;
  }
  virtual ~PrimitiveElement(){};
private:
  // no default ctor
  PrimitiveElement();
};

//The 'Composite' class
class CompositeElement : public DrawingElement
{
public:
  CompositeElement(std::string _name) : DrawingElement(_name) {};
  void Add(DrawingElement* _d)
  {
    m_elements.push_back(_d);
  }
  void Remove(DrawingElement* _d)
  {
    std::vector<DrawingElement*>::iterator it = m_elements.begin();
    while(it != m_elements.end())
    {
      if(*it == _d)
      {
        delete _d;
        m_elements.erase(it);
        break;
      }
      ++it;
    }
  }
  void Display(int _indent)
  {
    std::string newStr(_indent, '-');
    std::cout << newStr << "+ " << m_name <<std::endl;
    std::vector<DrawingElement*>::iterator it = m_elements.begin();
    while(it != m_elements.end())
    {
      (*it)->Display(_indent + 2);
      ++it;
    }
  }
  virtual ~CompositeElement()
  {
    while(!m_elements.empty())
    {
      std::vector<DrawingElement*>::iterator it = m_elements.begin();
      delete *it;
      m_elements.erase(it);
    }
  }
private:
  // no default allocation
  CompositeElement();
  std::vector<DrawingElement*> m_elements;

};

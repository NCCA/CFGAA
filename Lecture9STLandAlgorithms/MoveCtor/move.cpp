#include <vector>
#include <iostream>
#include <memory>
#include <string>

class Mem
{
	public :
 
    Mem(const std::string &_name,  int _size)
        : m_name(std::move(_name)) 
    {
    		m_mem = new int[_size];
        std::cout << m_name<<" being constructed.\n";
    }
    Mem(Mem&& _o)
        : m_name(std::move(_o.m_name)), 
          m_mem(std::move(_o.m_mem))
    {
        std::cout << m_name<<" being moved.\n";
        // important set this to nullptr else we
        // attempt to destroy an unallocated ptr
        _o.m_mem=nullptr;
    }
    // compiler will not create these 
    Mem& operator=(const Mem& o)=delete;
    Mem& operator=(Mem&& o)=delete;
    ~Mem(){std::cout<<m_name<<" being destructed\n";  delete [] m_mem;}
  private :
    std::string m_name;
    int* m_mem;

};


int main()
{
    std::vector<Mem> d1;
    std::cout << "emplace_back:\n";
    d1.emplace_back("data1",  100);
 
    std::vector<Mem> d2;
    std::cout << "\npush_back:\n";
    d2.push_back(Mem("data2", 200));
     
}



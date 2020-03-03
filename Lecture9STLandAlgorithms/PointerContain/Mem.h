#ifndef MEM_H_
#define MEM_H_

#include <iostream>
#include <cstring>
class Mem
{
  public :
    Mem(int _size,char _n) : m_mem(new int[_size]),m_c(_n), m_size(_size)
    {
      std::cout<<"ctor "<<m_c<<'\n';

    }

//    Mem()=default;
    Mem(): m_mem(nullptr),m_c('d'), m_size(0)
    {
      std::cout<<"default ctor "<<m_c<<'\n';
    }
    Mem(const Mem &_m)
    {
      m_size=_m.m_size;
      m_mem = new int[m_size];
      m_c=_m.m_c;
      memcpy(m_mem,_m.m_mem,sizeof(int)*m_size);
      std::cout<<"copy ctor "<<m_c<<'\n';
    }

    Mem &operator =(const Mem &_m)
    {
      m_size=_m.m_size;
      m_mem = new int[m_size];
      m_c=_m.m_c;
      memcpy(m_mem,_m.m_mem,sizeof(int)*m_size);
      std::cout<<"copy assignment "<<m_c<<'\n';
      return *this;
    }



    ~Mem()
    {
      std::cout<<"dtor "<<m_c<<'\n';
      if(m_mem !=nullptr)
        delete [] m_mem;
    }
  private :
    int *m_mem;
    char m_c;
    int m_size;
};

#endif

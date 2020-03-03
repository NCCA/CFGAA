#include <iostream>
#include <cstdlib>
#include <future>


class Singleton
{
public:
  static Singleton& instance()
  {
    static Singleton *instance = new Singleton();
    return *instance;
  }
  int getCount()const {return s_instanceCount;}

private:
  Singleton() {++s_instanceCount; }
  int s_instanceCount=0;
};


void print()
{
		std::cout<<Singleton::instance().getCount();	
}

int main()
{
  Singleton s=Singleton::instance();
	auto t1 = std::async(print);
	auto t2 = std::async(print);
	auto t3 = std::async(print);

	t1.get();
	t2.get();
	t3.get();
  std::cout<<s.getCount();
		
	return EXIT_SUCCESS;
}
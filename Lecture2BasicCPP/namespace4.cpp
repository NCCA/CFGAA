#include <iostream>
#include <cstdlib>

namespace AReallyLongNamespaceThatIdontWantToType
{

	void func1()
	{
		using std::cout;
		using std::endl;

		cout<<"func1 "<<endl;
	}
}

int main()
{
	namespace shrt=AReallyLongNamespaceThatIdontWantToType;
	shrt::func1();

}








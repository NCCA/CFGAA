#include <iostream>
#include <cstdlib>



void func1()
{
	using std::cout;
	using std::endl;	
	cout<<"func1 "<<endl;
}

void func2()
{
	using namespace std;
	cout<<"func2"<<endl;
}

int main()
{
	{
		using namespace  std;
		
		cout<<"in main\n";
	}
	func1();
	func2();
	std::cout<<"end\n";
}